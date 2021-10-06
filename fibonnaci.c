//Fibonnaci//
/*A sequencia de Fibonnaci consiste em soma de dois numeros anteriores para obter o numero atual*/
/*Para n igual a 8, a sequência'eh: 0,1,1,2,3,5,8,13*/
#include<stdio.h>

int main(){
    int n, n1=0, n2=1, fib=0;
    printf("Digite o valor de n: ");
    scanf("%i",&n);

    if(n >= 0)
      printf("A sequencia de fibonnaci eh: %i",n1);
    if(n >= 1)
      printf(",%i",n2);
    if(n >= 2){
      while(n>2){
        fib = n1 + n2;
        n1 = n2;
        n2 = fib;
        n-=1;
        printf(",%i",fib);
      }
    }
    return 0;
}
