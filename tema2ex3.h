//Faça um programa que atenda aos seguintes requisitos:
//1) Criar duas variáveis do tipo float denominadas de:
//• AV1 = 8.4;
//• AV2 = 9.5;
//2) Implemente e use uma função, denominada media, para calcular a média de AV1 e AV2;
//3) Dentro da função main(), verificar se a média é maior ou igual a 7.0 e, se for, exibir a
//mensagem “Aprovado”, senão, exibir a mensagem “Reprovado”.

#include <stdlib.h>
#include <stdio.h>

float media(float, float);

int main() {

    float av1 = 8.4;
    float av2 = 9.5;
    float resultado;

    resultado = media(av1, av2);

    if (resultado < 7.0) {
        printf("\nAluno reprovado\n");
        printf("%.1f", resultado);
    } else {
        printf("\nAluno aprovado\n");
        printf("%.1f", resultado);
        
    }
}

float media(float n1, float n2) {
    float resultado;
    resultado = (n1 + n2) / 2;
    return resultado;
}



