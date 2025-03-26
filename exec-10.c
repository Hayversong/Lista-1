/*Faça uma função recursiva que receba um número inteiro positivo
N e imprima todos os números naturais de 0 até N em ordem
decrescente.*/

#include <stdio.h>
#include <stdlib.h>

void imprime(int N){
    if (N == -1) return;//caso base onde N não pode ser um número negativo, caso seja, retorne e mata a função

    printf("%d ", N);

    imprime (N - 1);
}

int main(){
    int N;
    printf("digite um numero positivo:\n ");
    scanf("%d", &N);

    printf("numeros pares de %d ate 0 ", N);
    imprime(N);
    printf("\n");

    return 0;
}

/*a lógica utilizada foi a mesma da anterior, porém a verificação de par não é feita depois da impressão e agora o usuário também não precisa se preocupar em digitar um número par*/