#include <stdio.h>

#include "ordenacao.h"


int main() {
	//Vetor teste
	int notas[] = {27, 18, 14, 17, 12, 13, 11, 15, 16};
	int tamanho = 0;
	tamanho = sizeof(notas) / sizeof(notas[0]);
	
	/*Trecho de c�digo para testar as fun��es de ordena��o --comentado--*/
	//SelectSort(tamanho, notas);
	//InsetionSort(tamanho, notas);
	//BubbleSort(tamanho, notas);
	//MergeSort(0, tamanho-1, notas);
	HeapSort(tamanho, notas);

	//Impress�o do vetor j� ordenado ou n�o
	for(int i=0; i<tamanho; i++)
		printf("%d ",notas[i]);
	return 0;
}