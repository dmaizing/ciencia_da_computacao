#include<stdlib.h>
#include<stdio.h>

/*
Elabore um programa que leia 12 elementos inteiros de um vetor A . Construa um
vetor B também de 12 elementos inteiros através da seguinte regra: todo elemento
ímpar de A deve ser multiplicado por 2; caso contrário (para os elementos pares)
os elementos de A devem permanecer inalterados. Apresente no final os elementos
de B.
*/

int main()
{
	int a[12],b[12],i;
	printf("Este programa prentende capturar 12 elementos A e construir 12 elementos B sendo que pra cada elemento A impar o correspondente B sera multiplicado por 2 e os elementos pares de A serao identicos ao correspondente B.\n\n\n");
	for(i=0;i<=11;i++){
		printf("Digite o valor de A[%d]",i+1);
		scanf("%d",&a[i]);
		if (a[i]%2==0)
		b[i]=a[i];
		else
		b[i]=a[i]*2;
	}
	for(i=0;i<=11;i++){
		printf("Valor de B[%d] = %d\n",i+1,b[i]);
	}
	return 0;
}
