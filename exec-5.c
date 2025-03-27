#include<stdio.h>
/*
    Crie um programa em C que receba um vetor de números reais com
    100 elementos. Escreva uma função recursiva que inverta ordem dos
    elementos presentes no vetor.
*/

int inverter(int vet[], int n){
    printf("%d ", vet[n]); // Printa o valor atual do vetor
    if(n == 0) return vet[n];// Verifica se já chegou ao caso base
    return inverter(vet, n-1); // Passo recursivo
}

int main(){
    int vet[100];
    printf("Valores do vetor:\n");
    for (int i = 0; i < 100; i++){ // Preenche o vetor
        printf("%d ", i);
        vet[i] = i;
    }
    printf("\nValores invertidos:\n");
    inverter(vet, 9);
    return 0;
}

/*
    A lógica usada foi de somar vet[index] com vet[index-1] até o index zero
    Exemplo: vet[] = {1, 2, 3}, tam = 2.
    return vet[2] + soma(vet, 1) + soma(vet, 0) = 3 + 2 + 1 = 6
*/