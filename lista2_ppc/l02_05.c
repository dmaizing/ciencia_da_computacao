#include<stdlib.h>
#include<stdio.h>

/*
Construir um programa que leia um vetor A de 30 elementos do tipo inteiro. Ao final
do programa apresentar a quantidade de elementos pares e ímpares existentes em
A.
*/

int main()
{
	int a[30],i,par,impar;
	par=0;
	impar=0;
	printf("Este programa prentende capturar 30 elementos e mostrar a quantidade de pares e impares.\n\n\n");
	for(i=0;i<=29;i++){
		printf("Digite o valor de A[%d]=",i+1);
		scanf("%d",&a[i]);
		if (a[i]%2==0)
		par=par+1;
		else
		impar=impar+1;
	}	
	printf("\nVoce digitou %d elementos pares e %d impares.\n",par,impar);
	return 0;
}
