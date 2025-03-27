#include <stdio.h>

/*
    Faça uma função recursiva que permita inverter um número inteiro N. Ex:
    123 - 321
*/

int inversor(int n, int aux) {
    if (n == 0) return aux;
    return inversor(n / 10, aux * 10 + n % 10);
}
int main() {
    int n;

    printf("Digite um valor inteiro para n:\n");
    scanf("%d", &n); // Recebe o valor de n
    printf("Numero inverso de %d: %d\n", n, inversor(n, 0));

    return 0;
}

/*
    A lógica usada foi de multiplicar aux por 10 e somar o resto da divisão de n por 10 até que n fosse igual a 0.
    Exemplo: n = 123. return inversor(12, 3) -> inversor(1, 32) -> inversor(0, 321) = 321
*/