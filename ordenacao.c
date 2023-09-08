#include <stdio.h>

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

void InsectionSort(int n, int* x) {
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