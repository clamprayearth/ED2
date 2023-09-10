#include <stdio.h>
#include <stdlib.h>

#include "heap.h"

/*variaveis: n=tamanho do vetor
			 x=vetor*/
void SelectSort(int n, int *x) {
	/*A variavel minimo vai receber o menor valor corrente da variavel
	i e indx vai receber i.*/
	int indx, minimo;

	for (int i=0; i < n-1; i++) {
		minimo = x[i];
		indx = i;
		for (int j = i+1; j < n; j++) {
			//Caso o valor corrente seja menor ele será colcado na variavel minimo
			if (x[j] < minimo) {
				minimo = x[j];
				indx = j;
			}
		}
		//Coloca-se o valor do minimo na respectiva posição.
		x[indx] = x[i];
		x[i] = minimo;
	}
}

/*variaveis: n=tamanho do vetor
			 x=vetor*/
void InsetionSort(int n, int* x) {
	int chave, i;
	
	for (int j = 1; j < n; j++) {
		chave = x[j];
		i = j - 1;
		//comparação para ver se o valor corrente é o maior entre os elementos ordenados
		while ((i >= 0) && (x[i] > chave)) {
			x[i + 1] = x[i];
			i = i - 1;
		}
		//Deslocamento do vetor para a direita
		x[i + 1] = chave;
	}
}

/*variaveis: n=tamanho do vetor
			 x=vetor*/
void BubbleSort(int n, int * x) {
	int t =0;
	
	//Comparação do valor corrente com todos os numeros adjacentes
	for (int i = n-1; i >= 0; i--) {
		for (int j = 1; j <= i; j++) {
			if (x[j-1] > x[j]) {
				t = x[j-1];
				x[j-1] = x[j];
				x[j] = t;
			}
		}
	}
}

//Funcionamento: Ler MergeSort, função par a intercalação ordenada dos elementos dividos
/*variaveis: inic=posição relativa do inicio
			 meio=posicão relativa do meio
			 fim=posição relativa do fim
			 v=vetor*/
void Merge(int* v, int inic, int meio, int fim) {
	int i, j, k;
	//Instanciação de um vetor b pra intercala de forma ordenada o vetor que está dividido
	int * b = malloc ((fim - inic + 1) * sizeof(int));
	i = inic; j = meio+1; k = 0;

	while (k < fim - inic + 1) {
		if ((i <= meio) && (j <= fim)) {
			if (v[i] <= v[j]) {
				b[k] = v[i];
				i++;
			}
			else {
				b[k] = v[j];
				j++;
			}
		} else {
			if (i <= meio) {
				b[k] = v[i];
				i++;
			} else {
				b[k] = v[j];
				j++;
			}
		}
		k++;
	}

	i = inic; k = 0;

	while (i <= fim) {
		v[i] = b[k];
		k++; i++;
	}
	
	//Desalocação do vetor b
	free(b);	
}



/*variaveis: inic=posição relativa do inicio
			 fim=posição relativa do fim
			 a=vetor*/
void MergeSort(int inic, int fim, int* a) {
	if (inic < fim) {
		int meio = (inic + fim) / 2;
		//Quebra do vetor em partes até existir apenas um elemento
		MergeSort(inic, meio, a);
		MergeSort(meio + 1, fim, a);
		Merge(a, inic, meio, fim);
	}
}

/*variaveis: n=tamanho do vetor
			 x=vetor*/
void HeapSort(int n, int* x) {
	int aux;
	//Tamanho do heap que vai diminuido a cada interação
	int m = n - 1;

	//Primeiro constroi o heapmax para depois usa-lo no heapsort
	ConstruirHeapMax(x);
	/* Trecho do código para se visualizar o HeapMax --comentado--
	for (int i = 0; i < n; i++)
		printf("%d ", x[i]);
	printf("\n");*/

	for (int i = n-1; i >= 1; i--) {
		aux = x[0];
		x[0] = x[i];
		x[i] = aux;
		m--;
		//Reprocessamento do vetor para se torna um maxheap denovo com um elemento a menos
		MaxHeapify(m, 0, x);
	}
}