#include <stdio.h>
#include <math.h>

int main(){
    float raiz;
    printf("Digite um n�mero real para achar sua raiz quadrada: \n");
    scanf("%f", &raiz);
    if (raiz <0)
        printf("O valor digitado � negativo. Imposs�vel tirar raiz.");
    else if (raiz >= 0)
        printf("A raiz quadrada: %f", sqrt(raiz));
    return 0;
}
