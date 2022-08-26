#include <stdio.h>
int main ()
{
float x1 = 5.0, x2 = 2.0;
int x3;
printf ("%f\n", x1 % x2); //Módulo não pode ser float?
printf ("%f\n", &x1); //Está imprimindo o endereço da variável com o &, em vez de imprimir o valor da variável em si.
x1 = x2 //Faltou ;
printf ("%d\n", x3); //x3 não possui nenhum valor inicializado, ele está como NULL
X2 = 10; //Por ser float, precisa .0 no final da variável
x1 + 10.0; //Ele não irá somar 10.0 na variável, falta o símbolo de = depois do +
x3 = 039; //A variável não irá salvar o 0 à esquerda.
return 0;
}
