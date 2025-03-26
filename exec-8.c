/*A multiplicação de dois números inteiros pode ser feita através de
somas sucessivas. Proponha um algoritmo recursivo Multip_Rec(n1,n2)
que calcule a multiplicação de dois inteiros.*/
#include <stdio.h>
#include <stdlib.h>

int multip_rec(int n1, int n2){
    if(n1 == 0 || n2 == 0) return 0; //se algum dos números for zero, retorna 0 porque qualquer numero multiplicado por 0, é 0
    if(n2 == 1) return n1;//se n2 for 1, retorne o valor de n1 pois todo numero multiplicado por 1, é ele mesmo

    return n1 + multip_rec(n1, n2 - 1);
}

int main(){
    int n1, n2;
    printf("digite dois numeros para serem multiplicados:\n ");
    scanf("%d %d", &n1, &n2);

    int resultado = multip_rec(n1, n2);
    printf("o resultado da multiplicação é: %d\n", resultado);

    return 0;
}
    /*primeiro foi necessário fazer os casos bases, onde um numero multiplicado por 0 sempre será 0
    e onde número multiplicado por 1 sempre será ele mesmo, após isso, foi feita a soma chamando a função recursivamente
    onde ela chama a si mesma com n2 e decrementando em 1 e soma n1 ao resultado
    */
