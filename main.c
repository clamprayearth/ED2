#include <stdio.h>

#include "ordenacao.h"


int main() {
	//Vetor teste
	int notas[] = {27, 18, 14, 17, 12, 13, 11, 15, 16};
	int tamanho = 0;
	tamanho = sizeof(notas) / sizeof(notas[0]);
	
	/*Trecho de código para testar as funções de ordenação --comentado--*/
	//SelectSort(tamanho, notas);
	//InsetionSort(tamanho, notas);
	//BubbleSort(tamanho, notas);
	//MergeSort(0, tamanho-1, notas);
	HeapSort(tamanho, notas);

	//Impressão do vetor já ordenado ou não
	for(int i=0; i<tamanho; i++)
		printf("%d ",notas[i]);
	return 0;
}