#include <stdio.h>
#include <math.h>

int main(){
    float raiz;
    printf("Digite um número real para achar sua raiz quadrada: \n");
    scanf("%f", &raiz);
    if (raiz <0)
        printf("O valor digitado é negativo. Impossível tirar raiz.");
    else if (raiz >= 0)
        printf("A raiz quadrada: %f", sqrt(raiz));
    return 0;
}
