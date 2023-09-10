#include <stdio.h>

/*variaveis: i=indice do vetor
			 retorno=indice do pai do elemento*/
int HeapPai(int i) {
	return i / 2;
}

/*variaveis: i=indice do vetor
			 retorno=indice do filho esquerdo do elemento*/
int HeapEsquerdo(int i) {
	return (2 * i) + 1;
}

/*variaveis: i=indice do vetor
			 retorno=indice do filho direito do elemento*/
int HeapDireito(int i) {
	return (2 * i + 1) + 1;
}

/*variaveis: n=tamanho do heap
			 i = posição do vetor
			 x = vetor*/
void MaxHeapify(int n, int i, int *x) {
	int e, d, maior;
	//Primeiro é determinado os filhos do elemento
	e = HeapEsquerdo(i);
	d = HeapDireito(i);
	
	//Processamento do vetor para se torna um maxheap
	if ((e <= n) && (x[e] > x[i]))
		maior = e;
	else
		maior = i;

	if ((d <= n) && (x[d] > x[maior]))
		maior = d;
	
	
	if (maior != i) {
		int aux = x[i];
		x[i] = x[maior];
		x[maior] = aux;
		//Reprocessamento do vetor para se torna um maxheap de forma recusiva
		MaxHeapify(n, maior, x);
	}
}

/*variaveis: x = vetor
Construção o vetor HeapMax através da função MaxHeapify*/
void ConstruirHeapMax(int *x) {
	int tamanhoHeap = sizeof(x);

	for (int i = tamanhoHeap / 2; i >= 0; i--)
		MaxHeapify(tamanhoHeap, i, x);
}