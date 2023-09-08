#include <stdio.h>

#include "ordenacao.h"

int main() {
	int notas[] = {9, 2, 9, 10, 5, 8, 15};
	int tamanho = 0;
	tamanho = sizeof(notas) / sizeof(notas[0]);

	BubbleSort(tamanho, notas);
	for(int i=0; i<tamanho; i++)
		printf("%d ",notas[i]);
	return 0;
}