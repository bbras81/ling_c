#include <stdio.h>

//Declaração de constantes.
#define texto "Entrada e saida de dados."

int main(){

    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";
    printf("%s\n", texto);

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    printf("Digite a sua Altura:\n");
    scanf("%f", &altura);

    printf("Digite o seu nome: \n");
    scanf("%s", nome);


    printf("Dados informados: \n");
    printf("Idade: %d.\n", idade);
    printf("Altura: %.2f.\n",altura);
    printf("Nome: %s.\n", nome);

}