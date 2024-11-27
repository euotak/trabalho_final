#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "selection_sort/selection_sort.h"
#include "quick_sort/quick_sort.h"
#include "gerador_vetores/vetores.h"


/*utilizar "selection_sort/selection_sort.h"
para facilitar a clareza */





/* 
{CORRIGIR ERRO NA LINKAGEM}
{CORRIGIR ERRO NA LINKAGEM}
{CORRIGIR ERRO NA LINKAGEM}
{CORRIGIR ERRO NA LINKAGEM}
{CORRIGIR ERRO NA LINKAGEM}
{CORRIGIR ERRO NA LINKAGEM}
{CORRIGIR ERRO NA LINKAGEM}
{CORRIGIR ERRO NA LINKAGEM}
{CORRIGIR ERRO NA LINKAGEM}

*/


int main() {
    int tamanho = 100000;
    int* vetor = (int*)malloc(tamanho * sizeof(int));

    if (vetor == NULL) {
        printf("não alocou memoria /n");
        return -1;
    }

    int escolha_entrada, escolha_algoritmo;



    printf("Escolha o tipo de entrada:\n");
    printf("1: Ordem crescente\n");
    printf("2: Ordem decrescente\n");
    printf("3: Ordem aleatória\n");
    scanf("%d", &escolha_entrada);


    /*será que é uma boa ordem? mudar a ordem depois
    e ver qual fica mais bonito*/

    /*
    
    ^
    | não mudar, funciona melhor dessa forma
    
    */

    switch (escolha_entrada) {
        case 1:
            vetor_ordenado(vetor, tamanho);
            break;
        case 2:
            vetor_decrescente(vetor, tamanho);
            break;
        case 3:
            vetor_aleatorio(vetor, tamanho);
            break;
        default:
            printf("apenas 1,2 ou 3\n");
            free(vetor);
            return -1;
    }





    printf("Escolha o algoritmo de ordenação:\n");
    printf("1: Selection Sort\n");
    printf("2: Quick Sort\n");
    scanf("%d", &escolha_algoritmo);




    /*essa porra serve para medir o tempo e usar a funcao clock()*/
    clock_t inicio, fim;
    double tempo_execucao;

    switch (escolha_algoritmo) {
        case 1: {
            unsigned long long contador_trocas;
            inicio = clock();
            selection_sort(vetor, tamanho, &contador_trocas);
            fim = clock();
            tempo_execucao = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
            printf("Tempo de execução do selection sort: %f segundos\n", tempo_execucao);
            printf("trocas realizadas: %llu\n", contador_trocas);
            break;
        }

        case 2: {
            unsigned long long contador_movimentacoes = 0;
            inicio = clock();
            quick_sort(vetor, 0, tamanho - 1, &contador_movimentacoes);
            fim = clock();
            tempo_execucao = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

            printf("Tempo de execução do Quick Sort: %f segundos\n", tempo_execucao);
            printf("Movimentos realizadas: %lld\n", contador_movimentacoes);
            break;
        }

        default:
            printf("apenas 1 ou 2\n");
            free(vetor);
            return -1;
    }

    free(vetor);
    return 0;
}