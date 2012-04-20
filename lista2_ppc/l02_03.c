//Início Exercício 3 
#include<stdio.h>
#include<stdlib.h>

/*
Elaborar um programa que leia dois vetores A e B com 10 elementos reais (float)
cada. Construir um vetor C também com 10 elementos que seja formado pelo
quadrado da soma dos elementos correspondentes de A e B e apresente o
resultado.
*/

int main(){
	float a[10],b[10],c[10],x;
	int i;
	printf("Este programa prentende capturar 10 elementos de A e B, construir 10 elementos C que resultam do quadrado da soma da A e B.\n\n\n");
	for(i=0;i<=9;i++){
		x=0;
		printf("Digite o valor de A[%d]=",i+1);
		scanf("%f",&a[i]);
		printf("Digite o valor de B[%d]=",i+1);
		scanf("%f",&b[i]);
		c[i]=(a[i]+b[i])*(a[i]+b[i]);
		}
	for(i=0;i<=9;i++){
		printf("O valor de C[%d] = %f\n",i+1,c[i]);
		}
	return 0;
}
//Fim Exercício 3
