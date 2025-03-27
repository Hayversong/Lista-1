#include<stdio.h>
/*
    Crie um programa em C, que contenha uma função recursiva que
    receba dois inteiros positivos k e n e calcule k^n. Utilize apenas
    multiplicações. O programa principal deve solicitar ao usuário os valores
    de k e n e imprimir o resultado da chamada da função.
*/

int elevado(int k, int n){
    if(n == 0) return 1; // Verifica se já chegou ao caso base, retornando 1 caso sim
    return k * elevado(k, n-1); // Passo recursivo
}

int main(){
    int n, k;

    printf("Digite um valor inteiro positivo para k e para n:\n");
    scanf("%d %d", &k, &n); // Recebe o valor de k e n
    printf("%d elevado a %d: %d\n", k, n, elevado(k, n));

    return 0;
}

/*
    A lógica usada foi de calcular k * n - 1 até que n fosse igual a 0.
    Exemplo: k = 3, n = 4. return 3 * elevado(3, 3) * elevado(3, 2) * elevado(3, 1) * elevado(3, 0) = 3 * 3 * 3 * 3 * 1 = 81
*/