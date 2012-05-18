#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main ()
{
	char frase[]="Eu gosto de C";
	char copia1[13],copia2[13];
	int i,c=0;
	c=strlen(frase);
	strcpy(copia1,frase+3);
	for(i=0;i<=c-3;i++) {
		copia2[i]=frase[i+3];
	}
	printf("String copiada com strcpy():\n");
	puts(copia1);
	printf("String copiada com for:\n");
	puts(copia2);
	return 0;
}
