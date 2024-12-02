#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "selection_sort.h"

void selection_sort(int vetor[], int tamanho, unsigned long long* contador_trocas) {
    int indice_atual, indice_comparacao, indice_menor, temporario;
    *contador_trocas = 0;
    for (indice_atual = 0; indice_atual < (tamanho - 1); indice_atual++) {
        indice_menor = indice_atual;

        for (indice_comparacao = (indice_atual + 1); indice_comparacao < tamanho; indice_comparacao++) {
            if (vetor[indice_comparacao] < vetor[indice_menor]) {
                indice_menor = indice_comparacao;
            }
        }
        if (indice_atual != indice_menor) 
        {
            temporario = vetor[indice_atual];
            vetor[indice_atual] = vetor[indice_menor];
            vetor[indice_menor] = temporario;
            (*contador_trocas)++;
        }
    }
}
