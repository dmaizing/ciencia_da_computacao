#include<stdio.h>
#include<stdlib.h>

/*
O produto escalar de dois vetores (matemáticos), v=[v1,v2,v3,...,vn] e
u=[u1,u2,u3,...,un], é dado por v*u=v1*u1+v2*u2+v3*u3+...+un*vn .
Escreva um programa que leia dois vetores A e B de dez elementos cada e
apresente como resultado o cálculo do produto escalar entre A e B.
*/

int main(){
	int i,a[10],b[10],c[10];
	sc=0;
	for(i=0;i<=9;i++){
		printf("Digite o valor de A[%d]=",i);
		scanf("%d",&a[i]);
		printf("Digite o valor de B[%d]=",i);
		scanf("%d",&b[i]);
		c[i]=a[i]*b[i];
		sc=sc+c[i];
	}
	printf("O produto escalar de AB=%d\n",sc);
}
