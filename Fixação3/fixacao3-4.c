#include <stdio.h>

int main(){
    int idade, anoNascimento, anoAtual;
    printf("Digite o ano de nascimento do eleitor: \n");
    scanf("%d", &anoNascimento);
    printf("Digite o ano atual: \n");
    scanf("%d", &anoAtual);
    idade = anoAtual - anoNascimento;

    if(idade < 16)
        printf("Não eleitor (abaixo de 16 anos).");
    else if (idade >=18 && idade <65)
        printf("Eleitor obrigatório (com idade no intervalo [18, 65) anos).");
    else if ((idade >= 16 && idade <18) || idade >=65)
        printf("Eleitor facultativo (com idade no intervalo [16, 18) ou com 65 anos ou mais).");
    return 0;
}
