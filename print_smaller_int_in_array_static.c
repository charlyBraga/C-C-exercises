/*
Auth: Charly Braga Ventura
Date: 2021 august 16
Create a program for user type array int and to found smaller value and tis index

*/

#include <stdio.h>
#include <stdbool.h>
#define LEN 5

int main(){
    int array[LEN], i, menor, pos;
    for(int i=0;i<LEN;i++){
        scanf("%d",&array[i]);
    }
    pos = 0;
    menor = array[0];

    for(int i=0;i<LEN;i++){
        if(menor > array[i]){
            menor = array[i];
            pos = i;
        }
    }

    printf("\nIndex: %d",pos);
    printf("\nValue: %d",array[pos]);
}



