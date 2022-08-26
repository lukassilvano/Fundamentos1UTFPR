#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float r, volumeEsfera;
    printf("Informe o valor do raio da esfera: \n");
    scanf("%f", &r);
    volumeEsfera = 4.0/3.0*M_PI*(pow(r,3));
    printf("A área da esfera com raio %f é de: %f\n", r, volumeEsfera);
    return 0;
}
