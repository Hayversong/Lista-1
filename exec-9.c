/*Faça uma função recursiva que receba um número inteiro positivo par
N e imprima todos os números pares de 0 até N em ordem crescente.*/
#include <stdio.h>
#include <stdlib.h>

void imprime(int N){
    if (N == -1) return;//caso base onde N não pode ser um número negativo, caso seja, retorne e mata a função
    
    imprime (N - 1);
    
    if(N % 2 == 0){ //verifica se o numero atual é par e imprime caso seja
        printf("%d ", N);
    }
}

int main(){
    int N;
    printf("digite um numero positivo:\n ");
    scanf("%d", &N);

    printf("numeros pares de 0 ate %d ", N);
    imprime(N);
    printf("\n");

    return 0;
}

/*a ideia é percorrer de 0 até numero N verificando todos os números para saber quais são pares
a eficiência é questionável por causa disso mas o programa funciona*/