#include<stdio.h>
/*
    Crie uma função recursiva que receba um número inteiro positivo N
    e calcule o somatório dos números de 1 a N.
*/

int somatorio(int n){
    if(n == 1) return 1;// Verifica se já chegou ao caso base, retornando 1 caso sim
    return n + somatorio(n-1); // Passo recursivo
}

int main(){
    int n;

    printf("Digite um numero inteiro para o calculo do somatorio:\n");
    scanf("%d", &n); // Recebe o valor de n
    printf("Somatorio de %d: %d\n", n , somatorio(n));
    
    return 0;
}

/*
    A lógica usada foi de calcular n + n - 1 até que n fosse igual a 1.
    Exemplo: n = 3. return 3 + somatorio(2) + somatorio(1) = 3 + 2 + 1 = 6
*/