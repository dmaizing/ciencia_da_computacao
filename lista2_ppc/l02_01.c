//Exercício 1
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
	printf("Este programa prentende capturar 10 elementos, calcular a soma destes e apresentar o resultado e a media do mesmo.\n\n\n");
	for(i=0;i<=9;i++){
		printf("Digite o valor de A[%i]=",i+1);
		scanf("%f",&a[i]);
		soma=soma+a[i];
	}
	printf("\nResultado SOMA = %f\n",soma);
	media=soma/2;
	printf("\nResultado MEDIA = %f\n",media);
	return 0;
}
//Fim
