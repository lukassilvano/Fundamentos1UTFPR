#include <stdio.h>

int main(){
    int abs;
    printf("Digite um valor inteiro, para obter seu valor absoluto: \n");
    scanf("%d", &abs);
    if (abs >= 0)
        printf("Valor absoluto: %d", abs);
    if (abs <0)
        printf("Valor absoluto: %d", abs*=-1);
    return 0;
}
