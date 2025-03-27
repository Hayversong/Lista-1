#include<stdio.h>
/*
    A função fatorial duplo é definida como o produto de todos os números
    naturais ímpares de 1 até algum número natural ímpar N. Assim, o fatorial
    duplo de 5 é 5!! = 1 * 3 * 5 = 15 Faça uma função recursiva que receba
    um número inteiro positivo impar N e retorne o fatorial duplo desse
    número.
*/

int fatorialDuplo(int n){
    if(n == 1) return 1;// Verifica se já chegou ao caso base, retornando 1 caso sim
    return n * fatorialDuplo(n-2); // Passo recursivo
}

int main(){
    int n;

    printf("Digite um numero inteiro impar para o fatorial duplo:\n");
    scanf("%d", &n); // Recebe o valor de n
    printf("Fatorial duplo de %d: %d\n", n , fatorialDuplo(n));
    
    return 0;
}

/*
    A lógica usada foi de multiplicar n por n-2 até o n ser igual a 1
    Exemplo: n = 5. return 5 * fatorialDuplo(3) * fatorialDuplo(1) = 5 * 3 * 1 = 15
*/