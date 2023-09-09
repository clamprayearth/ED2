#include <stdio.h>
#include <stdlib.h>

/*Funcionamento: primeiro, encontre o menor elemento no arranjo
e troque-o com o elemento na primeira posição. Depois,
encontre o segundo menor elemento do arranjo e troque-o com o
elemento na segunda posição. Continue o processo até que todo
o arranjo esteja ordenado.
Complexidade = O(n^2)*/
void SelectSort(int n, int *x) {
	int indx, minimo;

	for (int i=0; i < n-1; i++) {
		minimo = x[i];
		indx = i;
		for (int j = i+1; j < n; j++) {
			if (x[j] < minimo) {
				minimo = x[j];
				indx = j;
			}
		}
		x[indx] = x[i];
		x[i] = minimo;
	}
}
/*Funcionamento: Para colocar o elemento considerado em sua posição “correta”,
basta movimentar os elementos maiores que ele dentre aqueles
já considerados(ordenados) uma posição para a direita e, então,
inserir o elemento considerado na posição vaga resultante.
Complexidade = O(n^2)*/
void InsetionSort(int n, int* x) {
	int chave, i;
	
	for (int j = 1; j < n; j++) {
		chave = x[j];
		i = j - 1;
		while ((i >= 0) && (x[i] > chave)) {
			x[i + 1] = x[i];
			i = i - 1;
		}
		x[i + 1] = chave;
	}
}

/*Funcionamento: baseia-se na ideia de comparar repetidamente
pares de elementos adjacentes e, em seguida, trocar as suas 
posições se existirem na ordem errada.
Complexidade = O(n^2)*/
void BubbleSort(int n, int * x) {
	int t =0;
	
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

//Funcionamento: Ler MergeSort
void Merge(int* v, int inic, int meio, int fim) {
	int i, j, k;
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
	free(b);
	
}

/*Funcionamento: é um algoritmo eficiente de ordenação por divisão e conquista.
Primeiro o seguencia é sucessivamente divida em dois através do metodo MergeSort até resta apenas um elemento. 
Depois o algoritmo vem juntando as partes de forma intercalada e na ordem certa utilizando o metodo merge.
Complexidade = O(n*logn)*/
void MergeSort(int inic, int fim, int* a) {
	if (inic < fim) {
		int meio = (inic + fim) / 2;

		MergeSort(inic, meio, a);
		MergeSort(meio + 1, fim, a);
		Merge(a, inic, meio, fim);
	}
}