#include<stdio.h> 
#include<stdlib.h>

/*
Construa um programa que leia um vetor A de 10 elementos reais, calcule a soma
e a média dos 10 elementos, apresentando o resultado.
*/

int main()
{
	float a[10],soma,media;
	int i;
	for(i=0;i<=9;i++){
		printf("Digite o valor de A[%i]=",i);
		scanf("%f",&a[i]);
		soma=soma+a[i];
		sub=sub-a[i];
	}
	printf("Resultado SOMA=%f\n",soma);
	media=soma/2;
	printf("Resultado MEDIA=%f\n",media);
	return 0;
}
