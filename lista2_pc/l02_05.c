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
	for(i=0;i<=29;i++){
		printf("Digite o valor de A[%d] = ",i+1);
		scanf("%d",&a[i]);
		if (a[i]%2==0)
		par=par+1;
		else
		impar=impar+1;
	}	
	printf("Voce digitou %d numeros pares e %d numeros impares.\n",par,impar);
	return 0;
}
