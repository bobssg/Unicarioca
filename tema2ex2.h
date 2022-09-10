//Faça um programa que atenda aos seguintes requisitos:
//1) Criar 2 variáveis do tipo inteira denominadas de:
//• numero_1 = 8;
//• numero_2 = 5;
//2) Implemente e use uma função, denominada soma, para somar os dois números;
//3) No mesmo programa, implemente e use uma outra função, denominada subtração,
//para subtrair os dois números;

#include <stdio.h>

int soma(int, int);

int sub(int, int);

int main() {

    int numero_1 = 8;
    int numero_2 = 5;
    int resultadosoma;
    int resultadosub;

    resultadosoma = soma(numero_1, numero_2);
    resultadosub = sub(numero_1, numero_2);
    printf("A soma de %d e %d = %d", numero_1, numero_2, resultadosoma);
    printf("\nA subtracao de %d e %d = %d", numero_1, numero_2, resultadosub);
}

int soma(int n1, int n2) {
    int resultadosoma;
    resultadosoma = n1 + n2;
    return resultadosoma;
}

int sub(int n1, int n2) {
    int resultadosub;
    resultadosub = n1 - n2;
    return resultadosub;


}