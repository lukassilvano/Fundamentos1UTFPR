#include <stdio.h>

int main (){
    int idade , matricula , cod ;
    float peso ;

    scanf("%d", cod); //Faltou & para poder salvar a vari�vel de forma correta.
    scanf("%d %f", &peso , &idade); //Pela ordem da leitura das vari�veis, a primeira vari�vel deve ser int, e a segunda float/double, mas as vari�veis est�o invertidas, dando erro na hora da leitura das mesmas.
    scanf("%d", &Matricula); //As vari�veis s�o CaseSensitive, ou seja, importa se tem letras mai�sculas ou min�sculas. Logo, n�o existe a vari�vel Matr�cula declarada, apenas matr�cula.
    printf("%d", &cod); //Aqui n�o ser� imprimido o valor da vari�vel, ser� imprimido o endere�o da vari�vel. E tamb�m n�o h� nenhum valor inicializado na vari�vel cod, por causa do erro da linha do scanf("%d", cod);

    return 0;
}
