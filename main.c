#include <stdio.h>

//TEMA 01 – REVISÃO DE ESTRUTURAS DE REPETIÇÃO EM C //

//Faça um programa que utilize a estrutura de repetição for, de modo que o trecho de
//código mostrado abaixo seja executado por cinco vezes.
// printf("Digita o nome do launo: <<");
//    scanf("%s", nome);
//    printf("\Digite a media final do aluno: <<");
//    scanf("%f",&media_final);
//    if(media_final >= 7)
//        printf("\nAprovado!");
//    else
//        printf("\nReprovado");

int main() {
    int cont;
    float media_final;
    char nome [20];

    for (cont = 1; cont <= 5 ; cont++) {
        printf("\n\nDigite o nome do aluno: <<");
        scanf("%s", nome);
        printf("\Digite a media final do aluno: <<");
        scanf("%f",&media_final);
        if (media_final >= 7)
            printf("\nAprovado!");
        else
            printf("\nReprovado");
    }
    return 0;
}