#include <stdio.h>
#include <math.h>

int main(){
    //1
    printf("%0.f\n", pow(2.0, 3));
    printf("%d\n", 2*2*2);
    //2
    int n;
    printf("Digite um valor para elevar ao cubo: \n");
    scanf("%d", &n);
    n = n*n*n;
    printf("Resultado: %d", n);

    return 0;
}
