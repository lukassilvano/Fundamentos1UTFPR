#include <stdio.h>

int main(){
    int velocidadeMax, velocidadeMotorista, velocidadeExcedente;
    float valorMulta;
    printf("Digite a velocidade máxima da rua/avenida: \n");
    scanf("%d", &velocidadeMax);
    printf("Digite a velocidade do motorista: \n");
    scanf("%d", &velocidadeMotorista);

    velocidadeExcedente = velocidadeMotorista - velocidadeMax;

    if(velocidadeExcedente <= 0)
        printf("Motorista está dentro da velocidade limite. \n");
    else if (velocidadeExcedente >0){
        valorMulta = velocidadeExcedente * 50;
        printf("Motorista ultrapassou a velocidade limite. Aplicar multa no valor de R$%.2f", valorMulta);
    }

    return 0;
}
