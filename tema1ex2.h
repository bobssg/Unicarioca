#include <stdio.h>
#include <string.h>

//Exercício 1
//Faça um código para contar o número de vezes que a letra “a” aparece em uma palavra
//qualquer digitada pelo usuário:
//Exemplos:
//Artesanato -> 2 vezes
//Rua -> 1 vez
//Consideravelmente -> 1 vez

int main(){
    char palavra [50];
    int qtdLetras , qtdAs = 0, i;

    printf("Digite a palavra: ");
    scanf("s", &palavra);

    qtdLetras = strlen(palavra);

    for (i = 0; i<= qtdLetras; i++) {
        switch (palavra[i]) {
            case 'A':
            case 'a':
                qtdAs++;
                break;
        }
    }


    return 0;

}