<h5>Projeto: Estrutura de dados 2</br>
Autor: Antonio Neto</br>
Data: 08/09/2023</br>
Descri��o: Exemplos de ED2 ministrado pela professora Luciana Lee.</br>
referencia: https://en.wikipedia.org/wiki/Sorting_algorithm</h5>

<h4>Considerações</br> 
*Performance dos algoritmos: tempo de execução</br>
*Espaço utilizado</br>
*Estabilidade: Um algoritmo é dito ser estável se ele preserva a ordem relativa das chaves de valor igual no arquivo.
Todos os exemplos podem ser compilados atrav�s do makefile e pode-se 
usar o valgrind para detectar vazamentos de mem�ria no pr�prio makefile.
Esta implementada em c os seguintes algorimos de ordena��o:</h4>

<a href="https://en.wikipedia.org/wiki/File:Selection-Sort-Animation.gif" target="_blank">-SelectSort-</a></br>
PIOR=n^2 / MELHOR=n^2 -INSTÁVEL-</br></br>

<a href="https://en.wikipedia.org/wiki/File:Insertion-sort-example-300px.gif" target="_blank">-InsetionSort-</a></br> 
PIOR=n^2 / MELHOR=n -ESTÁVEL-</br>
obs: O Insection sort é estável pelo fato de haver a verificação</br>
do maior valor sempre, independe dos casos possiveis.</br></br>

<a href="https://en.wikipedia.org/wiki/File:Bubble-sort-example-300px.gif" target="_blank">-BubbleSort-</a></br> 
PIOR=n^2 / MELHOR=n -ESTÁVEL-</br>
obs: Idem a do insection sort</br></br>
	
<a href="https://en.wikipedia.org/wiki/File:Merge_sort_algorithm_diagram.svg" target="_blank">-MergeSort-</a></br>
PIOR=nlogn / MELHOR=nlogn -ESTÁVEL-</br>
obs: O mergesort usa a lei "Dividir para conquistar" e utiliza 2n de memória</br></br>

ObS: Em processamento para a inclus�o de mais algoritmos em c