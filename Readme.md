<div>
<h5>Projeto: Estrutura de dados 2</br>
Autor: Antonio Neto</br>
Data: 08/09/2023</br>
Descri��o: Exemplos de ED2 ministrado pela professora Luciana Lee.</br>
referencia: https://en.wikipedia.org/wiki/Sorting_algorithm</h5>

<h4>Considerações</br> 
Performance dos algoritmos: tempo de execução</br>
Espaço utilizado</br>
Estabilidade: Um algoritmo é dito ser estável se ele preserva a ordem relativa das chaves de valor igual no arquivo.</br></h4>
</div>

<div>
Todos os exemplos podem ser compilados atrav�s do makefile e pode-se 
usar o valgrind para detectar vazamentos de mem�ria no pr�prio makefile.
Esta implementada em c os seguintes algorimos de ordena��o:</br></br>

	*<a href="https://en.wikipedia.org/wiki/File:Selection-Sort-Animation.gif">-SelectSort-</a>
	PIOR=n^2 / MELHOR=n^2 -INSTÁVEL-

	*<a href="https://en.wikipedia.org/wiki/File:Insertion-sort-example-300px.gif">-InsetionSort-</a> 
	PIOR=n^2 / MELHOR=n -ESTÁVEL-
	obs: O Insection sort é estável pelo fato de haver a verificação
	do maior valor sempre, independe dos casos possiveis.

	*<a href="https://en.wikipedia.org/wiki/File:Bubble-sort-example-300px.gif">-BubbleSort-</a> 
	PIOR=n^2 / MELHOR=n -ESTÁVEL-
	obs: Idem a do insection sort
	
	*<a href="https://en.wikipedia.org/wiki/File:Merge_sort_algorithm_diagram.svg">-MergeSort-</a>
	PIOR=nlogn / MELHOR=nlogn -ESTÁVEL-
	obs: O mergesort usa a lei "Dividir para conquistar"

	*HeapSort
ObS: Em processamento para a inclus�o de mais algoritmos em c
</div>