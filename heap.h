#ifndef __TADP_H
#define __TADP_H

//Fun��es exclusivas para processamento de heap
int HeapPai(int);
int HeapEsquerdo(int);
int HeapDireito(int);
void MaxHeapify(int, int, int*);
void ConstruirHeapMax(int *);

#endif