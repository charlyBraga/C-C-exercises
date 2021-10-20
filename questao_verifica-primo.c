#include<stdio.h>

int eh_primo(int num){
    int primo=1;
    for (int i=2;i<num;i++){
        if (num%i == 0){
            primo=0;
        }
    }
    return primo;
}

int main(){
    int num;
    scanf("%i",&num);
    if(eh_primo(num)){
        printf("primo");
    }
    else{
        printf("não primo");
    }

    return 0;

}
