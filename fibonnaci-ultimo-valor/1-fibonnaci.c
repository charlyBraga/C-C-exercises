//Fibbonaci

#include<stdio.h>
int main(){
    int n, n1=0, n2=1, fib=0;
    scanf("%i",&n);
    if(n == 1)
      printf("%i",n1);
    if(n==2)
      printf("%i",n2);
    if(n>2){
      while(n>2){
        fib = n1 + n2;
        n1 = n2;
        n2 = fib;
        n-=1;
        if(n<=2)
            printf("%i",fib);
      }
    }
    return 0;
}
