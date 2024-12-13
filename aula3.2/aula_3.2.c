#include <stdio.h>

int main(){
    int A, B, soma, subt, multip, divis;
    printf("Digite o Primeiro valor: ");
    scanf("%d", &A);
    printf("Digite o Segundo Valor:");
    scanf("%d", &B);

    soma = A + B;
    subt = A - B;
    multip = A * B;
    divis = A / B;

    printf("Soma: %d.\n", soma);
    printf("Subtração: %d.\n", subt);
    printf("Multiplicação; %d.\n", multip);
    printf("Divisão: %f.\n", divis);

}