/*Escreva uma função recursiva que determine quantas vezes um
dígito K ocorre em um número natural N. Por exemplo, o dígito 2 ocorre 3
vezes em 762021192.*/
#include <stdio.h>
#include <stdlib.h>

int contador(int N, int K){
    int i;//variável auxiliar

    if (N == 0) return K; //caso base
    
    if (N % 100 == K)//obter o ultimo o digito e comparar com K
        i = 1;  // se for igual a 1, armazena em i
    else{
        i = 0;// se não for igual a 1, armazena 0
    }
    return i + contador (N/10, K);//remove o ultimo digito recusirvamente para o numero inteiro até acabar, o valor de i é somado a cada chamada
}

int main (){
    int N, K, resultado;

    printf("digite o numero natural e digite o digito a ser contado:\n");
    scanf("%d %d", &N, &K);

    resultado = contador(N, K);//chamada da função
    printf("O numero %d apareceu %d vezes\n", K ,resultado);
    return 0;
}

/*
    a lógica usada foi primeiro tentar percorrer o número N inteiro, depois foi somar 1 em uma variável auxiliar para cada vez
    que o número K aparecesse e somar 0 para cada vez que não aparecesse
*/