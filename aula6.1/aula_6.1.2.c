# include <stdio.h>

int main(){
    int v[5] = {10, 20, 30, 40, 50};
    float media = 0;

    for (int i = 0; i <= 4; i++){
        media += v[i];
    }

    printf("Resultado: %f\n", media / 5);
}
