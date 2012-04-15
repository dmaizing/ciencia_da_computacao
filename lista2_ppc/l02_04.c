#include<stdio.h>
#include<stdlib.h>

/*
O produto escalar de dois vetores (matemáticos), v=[v1,v2,v3,...,vn] e
u=[u1,u2,u3,...,un], é dado por v*u=v1*u1+v2*u2+v3*u3+...+un*vn .
Escreva um programa que leia dois vetores A e B de dez elementos cada e
apresente como resultado o cálculo do produto escalar entre A e B.
*/

int main(){
	int i,a[10],b[10],c[10],sc;
	sc=0;
	printf("Este programa prentende capturar o produto escalar de A*B=A1*B1,A2*B2,A3*B3,...,An*bn.\n\n\n");
	for(i=0;i<=9;i++){
		printf("Digite o valor de A[%d]=",i+1);
		scanf("%d",&a[i]);
		printf("Digite o valor de B[%d]=",i+1);
		scanf("%d",&b[i]);
		c[i]=a[i]*b[i];
		sc=sc+c[i];
	}
	printf("\nO produto escalar de A*B = %d\n",sc);
	return 0;
}
