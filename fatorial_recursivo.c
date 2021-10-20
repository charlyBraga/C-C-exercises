#include<stdio.h>

int fatorial(int n){
    if(n<=1)
        return 1;
    return n * fatorial(n-1);
}

int main(){
    int n;
    printf("****** Calculo de fatorial ******");
    printf("\n\nDigite o valor de n: ");
    scanf("%i",&n);
    if(n>=0)
        printf("\nResultado do fatorial de %i: %i\n",n,fatorial(n));
    else
        printf("\nErro: Este programa funciona apenas para número maior ou igual a 0!\n");
}
