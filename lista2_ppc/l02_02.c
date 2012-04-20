//Início Exercício 2
#include<stdio.h> 
#include<stdlib.h>

/*
Escreva um programa que leia um vetor A com 15 elementos numéricos inteiros e
apresente o total de elementos pares existentes em A.
*/

int main() {
	int i,a[15],cont;
	cont=0;
	printf("Este programa prentende capturar 15 elementos e apresentar o total de elementos pares que foram apresentados.\n\n\n");
	for(i=0;i<=14;i++){
		printf("Digite o valor de A[%d]=",i+1);
		scanf("%d",&a[i]);
		if (a[i]%2==0) 
		cont=cont+1;
	}
	printf("\n%d elementos pares em A\n",cont);
	return 0;
}
//Fim Exercício 2
