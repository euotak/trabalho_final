#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "selection_sort.h"






/*ordenação por seleção tem complexidade O(n²) mas pode mudar para 
O(n²/2)

*/
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
        /*fazer uma otimização do selection sort
        pode ser feito o mesmo processo no inicio e
        ao mesmo tempo
        
        {VER AULA DO PROFESSOR CHINES MAIS TARDE}
        
        */





        if (indice_atual != indice_menor) 
        /*ver se realmente e necessario fazer a troca
        seguir boas praticas que o prof falou

        {VERIFICAR SLIDE MAIS TARDE}
        
        */
        {
            temporario = vetor[indice_atual];
            vetor[indice_atual] = vetor[indice_menor];
            vetor[indice_menor] = temporario;
            (*contador_trocas)++;  /* a precedencia do ++ é maior que o *,
            para funcionar sem problema adiconar () e o ++ por fora
            
            
            {SE TIVER TEMPO SOBRANDO VERIFICAR PRECEDENCIA DE OPERADORES}
            */
        }
    }
}
