#include <stdio.h>

// Vetores e arrays
int main(){
    // <tipo> <nome> [<tamanho>];
    int numeros[3];

    numeros[0] = 10;
    numeros[1] = 20;
    numeros[2] = 30;
    //int tamanho = len(numeros);

    for (int i = 0 ; i <= 2 ; i++) {
        printf("%i\n", numeros[i]);
    }
}
