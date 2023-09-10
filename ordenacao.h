#ifndef __TADP_H
#define __TADP_H

/*Funcionamento: primeiro, encontre o menor elemento no arranjo
e troque-o com o elemento na primeira posi��o. Depois,
encontre o segundo menor elemento do arranjo e troque-o com o
elemento na segunda posi��o. Continue o processo at� que todo
o arranjo esteja ordenado.
Complexidade
	Melhor caso O(n^2)
	Pior caso O(n^2)
Estavel?= n�o*/
void SelectSort(int, int*);

/*Funcionamento: Para colocar o elemento considerado em sua posi��o �correta�,
basta movimentar os elementos maiores que ele dentre aqueles
j� considerados(ordenados) uma posi��o para a direita e, ent�o,
inserir o elemento considerado na posi��o vaga resultante.
Complexidade
	Melhor caso O(n)
	Pior caso O(n^2)
Estavel?= sim*/
void InsetionSort(int, int*);

/*Funcionamento: baseia-se na ideia de comparar repetidamente
pares de elementos adjacentes e, em seguida, trocar as suas
posi��es se existirem na ordem errada.
Complexidade
	Melhor caso O(n)
	Pior caso O(n^2)
Estavel?= sim*/
void BubbleSort(int, int*);

/*Funcionamento: � um algoritmo eficiente de ordena��o por divis�o e conquista.
Primeiro o seguencia � sucessivamente divida em dois atrav�s do metodo MergeSort at� resta apenas um elemento.
Depois o algoritmo vem juntando as partes de forma intercalada e na ordem certa utilizando o metodo merge.
Complexidade
	Melhor caso O(n*logn)
	Pior caso O(n*logn)
Estavel?= sim*/
void MergeSort(int, int, int*);			//void Merge(int*, int, int, int);


/*Funcionamento: utiliza uma estrutura de dados chamada heap bin�rio para ordenar os elementos a medida que os 
insere na estrutura.Assim, ao final das inser��es, os elementos podem ser sucessivamente removidos da raiz da heap, 
na ordem desejada
Complexidade
	Melhor caso O(n*logn)
	Pior caso O(n*logn)
Estavel ? = n�o */
void HeapSort(int, int*);

#endif