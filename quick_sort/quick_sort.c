#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "quick_sort.h"


/*
aqui tempos uma variavel temporaria,
pego o valor de apontado de ar e passo
para ela, pego o valor apontado de b
e passo para a e depois a da variavel
temporaria e passo para b
*/

void trocar(int* a, int* b) {
    int temporaria = *a;
    *a = *b;
    *b = temporaria;
}



/*aqui é a funcao que particiona/dividi o vetor usando o pivo
pivô = vetor[fim] defini ele como ultimo elemento.

for (int j = inicio; j < fim; j++) 
aqui to percorrendo do inicio ate o pivo
se ele for menor que o pivo "if (vetor[j] <= pivô)"
incremento o indece "i++" e faço a troca


  */

int dividir(int* vetor, int inicio, int fim, unsigned long long* contador_movimentacoes){
    int pivo = vetor[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        if (vetor[j] <= pivo) {
            i++;
            trocar(&vetor[i], &vetor[j]);
            (*contador_movimentacoes)++;
        }
    }

    /*essa parte garante que todos os elementos a
    esquerda são menores que o pivo e todos a direita são maiores */

    trocar(&vetor[i + 1], &vetor[fim]);
    (*contador_movimentacoes)++;
    return (i + 1);
}





void quick_sort(int* vetor, int inicio, int fim, unsigned long long* contador_movimentacoes) {
    if (inicio < fim) {
        int indice_pivot = dividir(vetor, inicio, fim, contador_movimentacoes);
        quick_sort(vetor, inicio, indice_pivot - 1, contador_movimentacoes);
        quick_sort(vetor, indice_pivot + 1, fim, contador_movimentacoes);
    }
}
