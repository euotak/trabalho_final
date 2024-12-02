#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "quick_sort.h"


void trocar(int* a, int* b) {
    int temporaria = *a;
    *a = *b;
    *b = temporaria;
}

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
