#include <stdio.h>
int main()
{
printf ("%f\n", 3.539);
printf ("%.0f\n", 3.539);
printf ("%.1f\n", 3.539);
printf ("%.2f\n", 3.539);
printf ("%.3f\n", 3.539);
printf ("%.4f\n", 3.539);
printf ("%.5f\n", 3.539);
return 0;
}

/* %f mostra todas as casas decimais que cabem num float
%.0f pega 0 casas decimais e arredonda pro número mais próximo
%.1f pega 1 casa decimal e arredonda a primeira casa decimal, se necessário
e assim em diante, até o máximo de 6 casas decimais que cabem no float.*/
