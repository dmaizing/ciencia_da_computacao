#include<stdio.h> 
#include<stdlib.h>

/*
Escreva um programa que leia um vetor A com 15 elementos numéricos inteiros e
apresente o total de elementos pares existentes em A.
*/

int main() {
	int i,a[15],cont;
	cont=0;
	for(i=0;i<=14;i++){
		printf("Digite o valor de A[%d]=",i);
		scanf("%d",&a[i]);
		if (a[i]%2==0) 
		cont=cont+1;
	}
	printf("Elementos pares em A=%d\n",cont);
	return 0;
}
