#include <stdio.h>
int main ()
{
int foo = 5, bar = 2;
float foobar = 8.0;
printf ("%d\n", foo + 3 * bar);
printf ("%d\n", (foo + 3) * bar);
printf ("%d\n", (foo * bar) / 8);
printf ("%f\n", (foo * bar) / foobar);
printf ("%d\n", foo % 3);
printf ("%d\n", foo % bar);
printf ("%d %d\n", foo * -1, -foo);
printf ("%f\n", foo + 0.1);
printf ("%d\n", foo / bar * bar);
return 0;
}

/*
11
16
1
1,250000
2
1
-5 -5
5.1
1,25 //errei, � 4
*/
