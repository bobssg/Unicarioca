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
    int qtdAs = 0;
    int i;

    printf("Digite a palavra: ");
    scanf("%s", palavra);
    printf("\n\n palavra digitada:\n %s", palavra);

    for (i=0; palavra[i] !='\0'; i=i+1) {

        if (palavra[i] == 'a' || palavra[i] == 'A');
        qtdAs = qtdAs + 1;

    }
    printf("A quantidade de letas a sao; %i", qtdAs);



    return 0;

}