/*
    O máximo divisor comum dos inteiros x e y é o maior inteiro que é
    divisível por x e y. Escreva uma função recursiva mdc em C, que retorna o
    máximo divisor comum de x e y. O mdc de x e y é definido como segue:
    se y é igual a 0, então mdc(x,y) é x; caso contrário, mdc(x,y) é mdc (y, x%y), onde % é o operador resto
*/
#include <stdio.h>
#include <stdlib.h>

int mdc (int x, int y){
    if(y == 0) return x; //se y for igual a 0 retorna x e mata a função pois o MDC é x
    
    return mdc(y, x % y);//aplicação do algoritmo de euclides
}

int main(){
    int h, f;

    printf("insira um valora para h e um para f para o calculo do mdc: ");
    scanf("%d" "%d", &h, &f); //armazena o valor de 2 resultados

    printf("resultado: %d", mdc(h, f));

    return 0;
}

/*
    a lógica aplicada foi, primeiro, observar que qualquer número pode dividir o 0 enquanto o maior divisor de x é o próprio x
    e esse x também divide 0
*/