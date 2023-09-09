#include <stdio.h>

#include "ordenacao.h"

int main() {
	int notas[] = {9, 2, 9, 10, 5, 8, 15, 23, 11};
	int tamanho = 0;
	tamanho = sizeof(notas) / sizeof(notas[0]);

	//SelectSort(tamanho, notas);
	InsetionSort(tamanho, notas);
	//BubbleSort(tamanho, notas);
	//MergeSort(0, tamanho-1, notas);
	
	for(int i=0; i<tamanho; i++)
		printf("%d ",notas[i]);
	return 0;
}