#include <stdio.h>
int main ()
{
float x1 = 5.0, x2 = 2.0;
int x3;
printf ("%f\n", x1 % x2); //M�dulo n�o pode ser float?
printf ("%f\n", &x1); //Est� imprimindo o endere�o da vari�vel com o &, em vez de imprimir o valor da vari�vel em si.
x1 = x2 //Faltou ;
printf ("%d\n", x3); //x3 n�o possui nenhum valor inicializado, ele est� como NULL
X2 = 10; //Por ser float, precisa .0 no final da vari�vel
x1 + 10.0; //Ele n�o ir� somar 10.0 na vari�vel, falta o s�mbolo de = depois do +
x3 = 039; //A vari�vel n�o ir� salvar o 0 � esquerda.
return 0;
}
