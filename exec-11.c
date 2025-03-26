/*Faça uma função recursiva que receba um número inteiro positivo par
N e imprima todos os números pares de 0 até N em ordem decrescente.*/
#include <stdio.h>
#include <stdlib.h>

void imprime(int N){
    if (N == -1) return;//caso base onde N não pode ser um número negativo, caso seja, retorne e mata a função
    
    imprime (N - 2);
    
    printf("%d ", N);

}

int main(){
    int N;
    printf("digite um numero par e positivo:\n ");
    scanf("%d", &N);

    if (N < 0 || N % 2 != 0) {//verificação para saber se o numero digitado pelo usuário é par
        printf("o numero tem que ser par e positivo\n");//caso não seja dá erro
        return 1;
    }

    printf("numeros pares de 0 ate %d ", N);
    imprime(N);
    printf("\n");

    return 0;
}

/*a lógica utilizada foi a mesma das questões anteriores, a mudança necessária no código foi desfazer a verificação
já que agora a chamada recursiva está diminuindo em 2 e a entrada é necessariamente um número par*/
