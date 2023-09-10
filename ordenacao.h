#ifndef __TADP_H
#define __TADP_H

/*Funcionamento: primeiro, encontre o menor elemento no arranjo
e troque-o com o elemento na primeira posição. Depois,
encontre o segundo menor elemento do arranjo e troque-o com o
elemento na segunda posição. Continue o processo até que todo
o arranjo esteja ordenado.
Complexidade
	Melhor caso O(n^2)
	Pior caso O(n^2)
Estavel?= não*/
void SelectSort(int, int*);

/*Funcionamento: Para colocar o elemento considerado em sua posição “correta”,
basta movimentar os elementos maiores que ele dentre aqueles
já considerados(ordenados) uma posição para a direita e, então,
inserir o elemento considerado na posição vaga resultante.
Complexidade
	Melhor caso O(n)
	Pior caso O(n^2)
Estavel?= sim*/
void InsetionSort(int, int*);

/*Funcionamento: baseia-se na ideia de comparar repetidamente
pares de elementos adjacentes e, em seguida, trocar as suas
posições se existirem na ordem errada.
Complexidade
	Melhor caso O(n)
	Pior caso O(n^2)
Estavel?= sim*/
void BubbleSort(int, int*);

/*Funcionamento: é um algoritmo eficiente de ordenação por divisão e conquista.
Primeiro o seguencia é sucessivamente divida em dois através do metodo MergeSort até resta apenas um elemento.
Depois o algoritmo vem juntando as partes de forma intercalada e na ordem certa utilizando o metodo merge.
Complexidade
	Melhor caso O(n*logn)
	Pior caso O(n*logn)
Estavel?= sim*/
void MergeSort(int, int, int*);			//void Merge(int*, int, int, int);


/*Funcionamento: utiliza uma estrutura de dados chamada heap binário para ordenar os elementos a medida que os 
insere na estrutura.Assim, ao final das inserções, os elementos podem ser sucessivamente removidos da raiz da heap, 
na ordem desejada
Complexidade
	Melhor caso O(n*logn)
	Pior caso O(n*logn)
Estavel ? = não */
void HeapSort(int, int*);

#endif