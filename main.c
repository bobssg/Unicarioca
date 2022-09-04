#include <stdio.h>
#include <string.h>
#include <ctype.h>


//Exercício 1
//Faça um código para contar o número de vezes que a letra “a” aparece em uma palavra
//qualquer digitada pelo usuário:
//Exemplos:
//Artesanato -> 2 vezes
//Rua -> 1 vez
//Consideravelmente -> 1 vez

int main(){
    char palavra [50];
    int qtdAs = 0;
    int lente, i;

    printf("Digite a palavra: ");
    scanf("%s", palavra);

    lente = strlen(palavra);

    for (i=0; i <= lente; i++) {

        if (palavra[i] == 'a' || palavra[i] == 'A'){

            qtdAs++;
        }
    }
    printf("A quantidade de letas a sao; %d", qtdAs);

    return 0;

}