#include<stdlib.h>
#include<stdio.h>
#include<string.h>
 
int main ()
{
    char frase[56];
    char letras[]="ac";
    char * pch;
    int i,c=0;
    printf("Entre com a frase: ");
    gets(frase);
    pch=strpbrk(frase, letras);
    while(pch != NULL) {
		c+=1;
		pch=strpbrk (pch+1, letras);	
	}
    printf("Total de letras 'a' e 'c' em '%s' = %d\n",frase,c);
    return 0;
}