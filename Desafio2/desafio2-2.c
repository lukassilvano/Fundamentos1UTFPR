#include <stdio.h>

int main (){
    int idade , matricula , cod ;
    float peso ;

    scanf("%d", cod); //Faltou & para poder salvar a variável de forma correta.
    scanf("%d %f", &peso , &idade); //Pela ordem da leitura das variáveis, a primeira variável deve ser int, e a segunda float/double, mas as variáveis estão invertidas, dando erro na hora da leitura das mesmas.
    scanf("%d", &Matricula); //As variáveis são CaseSensitive, ou seja, importa se tem letras maiúsculas ou minúsculas. Logo, não existe a variável Matrícula declarada, apenas matrícula.
    printf("%d", &cod); //Aqui não será imprimido o valor da variável, será imprimido o endereço da variável. E também não há nenhum valor inicializado na variável cod, por causa do erro da linha do scanf("%d", cod);

    return 0;
}
