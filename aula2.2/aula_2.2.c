#include <stdio.h>

int main(){
    //scanf(<especificador de formato>, &<v1>,)
    /*
        Criar um scanf para cada variavel necessária
    */

    int idade =  0;
    printf("Valor inicial da idade: %d.\n", idade);

    printf("Digite uma idade:\n");
    scanf("%d",&idade);

    printf("Idade informada: %d.\n", idade);
    
}