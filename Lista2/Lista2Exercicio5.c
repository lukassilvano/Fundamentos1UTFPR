#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float a,b,c,d,e, media;
    printf("Digite o primeiro n�mero: \n");
    scanf("%f", &a);
    printf("Digite o segundo n�mero: \n");
    scanf("%f", &b);
    printf("Digite o terceiro n�mero: \n");
    scanf("%f", &c);
    printf("Digite o quarto n�mero: \n");
    scanf("%f", &d);
    printf("Digite o quinto n�mero: \n");
    scanf("%f", &e);

    media=(a+b)/2;
    printf("%f\n", media);
    media=(a+b+c)/3;
    printf("%f\n", media);
    media=(a+b+c+d)/4;
    printf("%f\n", media);
    media = (a+b+c+d+e)/5;
    printf("%f\n", media);

    return 0;
}
