#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main ()
{
	char frase[56],clone[56];
	char letra[]="ac";
	int i,c,l=0;
	printf("Entre com a frase: ");
	gets(frase);
	c=strlen(frase);
	for(i=0;i<=c;i++) {
		clone[i]=frase[i];
		if(clone[i]==letra[0] | clone[i]==letra[1]) {
			l+=1;
		} else {
			l=l;
		}
	}
	printf("Total de letras 'a' e 'c' em '%s' = %d\n",frase,l);
	return 0;
}
