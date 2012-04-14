#include<stdio.h>
#include<stdlib.h>

/*
Elabore um programa que leia dois vetores A e B com 10 elementos inteiros cada.
Construir um vetor C de mesmo comprimento (10 elementos) que seja formado
pelo quadrado da soma dos elementos correspondentes dos vetores A e B.
Apresente os elementos de C.
*/

int main()
{
	int i,a[10],b[10],c[10];
	for(i=0;i<=9;i++){
		printf("Digite o valor de A[%d] = ",i+1);
		scanf("%d",&a[i]);
		printf("Digite o valor de B[%d] = ",i+1);
		scanf("%d",&b[i]);
		c[i]=(a[i]+b[i])*(a[i]+b[i]);
	}
	for(i=0;i<=9;i++){
		printf("Valor de C[%d] = %d\n",i+1,c[i]);
	}
	return 0;
}
