//EN
/* ++ Description Exercise ++
Write a program that takes a string with a maximum length of 100 and verify that it is a palindrome.
Ex.: of palindrome: Anna, level, civic, noon.
*/

//PT-BR
/* ++ Descricao do exercicio ++
Escreve um programa que receba uma string de tamanho máximo 100 e verifique se é um palíndromo.
Ex.: de palindromo: arara, asa.
*/

#include <iostream>
#include<stdio.h>
#include<cstring>

#define SUCESSO 0;
constexpr auto MAX = 100;

int main( int argc , char** argv)
{
	int left, right;
	char s[MAX]="noon";
	int len = strlen(s);
	int flag = 1;//1=verdadeiro e 0=falso

	for(int i=0; i<len;i++){
        left = i;
        right = len-i-1;
        if(left == right){
            break;//eh palindromo
        }

        if(s[left] != s[right]){//nao eh palindromo
            flag = 0;
            printf("\nNot palindromo\n");
            break;
        }
	}


	if(flag == 1){
            printf("\nIt is a palindromo\n");
	}

    return 0;
}






