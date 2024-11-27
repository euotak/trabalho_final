#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "vetores.h"


<<<<<<< HEAD
void vetor_ordenado(int* vetor, int tamanho) {
=======
void gerar_array_ordenado(int* vetor, int tamanho) {
>>>>>>> 633e511b57c1eb4c1cef77a53141a352c69fc1ef
    for (int indice = 0; indice < tamanho; indice++) 
    {
        vetor[indice] = indice + 1; /*então né */
    }
}

<<<<<<< HEAD
void vetor_decrescente(int* vetor, int tamanho) {
=======
void gerar_array_decrescente(int* vetor, int tamanho) {
>>>>>>> 633e511b57c1eb4c1cef77a53141a352c69fc1ef
    for (int indice = 0; indice < tamanho; indice++) 
    {
        vetor[indice] = tamanho - indice;
    }
}


<<<<<<< HEAD
void vetor_aleatorio(int* vetor, int tamanho) {
=======
void gerar_array_aleatorio(int* vetor, int tamanho) {
>>>>>>> 633e511b57c1eb4c1cef77a53141a352c69fc1ef
    srand(time(NULL));
    for (int indice = 0; indice < tamanho; indice++) 
    {
        vetor[indice] = rand() % tamanho; /* A constante RAND_MAX é 
        o valor máximo que pode ser retornado pela rand função. RAND_MAX 
        é definido como o valor 0x7fff. 
        
        https://learn.microsoft.com/pt-br/cpp/c-runtime-library/rand-max?view=msvc-170

        {DAR UMA OLHADA MELHOR MAIS TARDE}
        */
    }
}