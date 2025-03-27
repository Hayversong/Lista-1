#include<stdio.h>
/*
    Faça uma função recursiva que permita somar os elementos de
    um vetor de inteiros.
*/

int soma(int vet[], int n){
    printf("%d ", vet[n]); // Printa o valor atual do vetor
    if(n == 0) return vet[0];// Verifica se já chegou ao caso base
    return vet[n] + soma(vet, n-1); // Passo recursivo
}

int main(){
    int vet[] = {1, 2, 3};
    printf("Valores do vetor: ");
    printf("\nSoma total: %d\n", soma(vet, 2));
    return 0;
}

/*
    A lógica usada foi de somar vet[index] com vet[index-1] até o index zero
    Exemplo: vet[] = {1, 2, 3}, tam = 2.
    return vet[2] + soma(vet, 1) + soma(vet, 0) = 3 + 2 + 1 = 6
*/