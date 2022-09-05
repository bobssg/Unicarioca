#include <stdio.h>
#include <stdlib.h>

// Lembram de fatorial? Na Matemática, fatorial de um número N é dado pelo produto de
// todos os inteiros positivos menores ou iguais a N. O símbolo de fatorial é !. Então, fatorial de N
// = N!
// Então, faça um programa para calcular o fatorial de um número digitado pelo usuário.


int main() {

    int n, i;
    int fat = 1;

    printf("\n Digite o numero;");
    scanf("%d", &n);

    for (i = n; i > 1; i--) {
        fat = fat * i;
    }

    printf("\n %d", fat);

    return 0;
}
