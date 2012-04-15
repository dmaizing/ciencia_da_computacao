#include<stdlib.h>
#include<stdio.h>

/*
Escreva um programa que que calcule a tabuada de um número qualquer de 1 a
10 e armazene os resultados em um vetor A (de 10 elementos). Apresente os
elementos do vetor A .
*/

int main(){
	int i,a[10],n;
	printf("Este programa prentende capturar 1 elemento e mostrar sua tabuada de 1 a 10.\n\n\n");
	printf("Digite um valor inteiro=");
	scanf("%d",&n);
	for(i=0;i<=9;i++){
		a[i]=n*(i+1);
	}
	for(i=0;i<=9;i++){
		printf("%d x %d = %d \n",n,i+1,a[i]);
	}
	return 0;
}
