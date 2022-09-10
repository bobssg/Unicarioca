//Faça uma adaptação no programa de soma de números inteiros mostrado no texto de
//apoio, Figura 4, de modo que, agora, a função faça a soma de três números inteiros.

#include <stdio.h>

int soma(int, int,int);

int main() {

    int numero_1 = 4;
    int numero_2 = 5;
    int numero_3 = 6;
    int resultado;

    resultado = soma(numero_1, numero_2, numero_3);
    printf("A soma de %d , %d e %d = %d", numero_1, numero_2,numero_3, resultado);
}

int soma(int n1, int n2, int n3) {
    int resultado;
    resultado = n1 + n2 + n3;
    return resultado;

}
