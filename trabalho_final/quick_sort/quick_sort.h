#ifndef QUICK_SORT_H
#define QUICK_SORT_H


void trocar(int* a, int* b);
int dividir(int* vetor, int inicio, int fim, int* contador_movimentacoes);
void quick_sort(int* vetor, int inicio, int fim, int* contador_movimentacoes);

#endif 