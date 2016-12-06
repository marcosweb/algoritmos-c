/*

2.5. Exercicios Propostos
2.5.1. Variáveis compostas unidimensionais
2.5.1.1. Cálculos com temperaturas

Professor: Alenxandre Ribeiro
Aluno: Marcos Aurelio
Data: 05/12/2016

*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){

    // Para fins de teste, inseri algumas temperaturas num vetor,
    // em vez das entradas de dados.
    int temp[121] = {15,28,21,39,40,17,25,26,19,16};
    int x, menor, maior, dias, soma, num_dias;
    float media;

    x = 0;
    menor = 40;
    maior = 0;
    media = 0;
    dias  = 0;
    soma  = 0;

    while(temp[x] != '\0' && x < 121 ){
        if (menor > temp[x]){
            menor = temp[x];
        }
        if (temp[x] > maior){
            maior = temp[x];
        }
        soma += temp[x++];
    }

    media = (float) soma / x;
    x = 0;

    while(temp[x] != '\0'){
        if (temp[x++] < media){
            dias++;
        }
    }

    printf("\nMenor Temperatura.....: %d", menor);
    printf("\nMaior Temperatura.....: %d", maior);
    printf("\nTemperatura Média.....: %.2f", media);
    printf("\nDias abaixo da média..: %d \n\n", dias);

    return 0;
}
