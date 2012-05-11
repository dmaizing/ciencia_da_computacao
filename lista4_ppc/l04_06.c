#include<stdlib.h>
#include<stdio.h>
#include<string.h>
 
int main ()
{
    char frase[]="Eu gosto de C";
	char copia1[13],copia2[13];
    int i,c=0;
    c=strlen(frase);
    strncpy(copia1,frase,4);
    for(i=3;i<=c;i++) {
		copia2[i]=frase[i];
    }
    puts(copia1);
    puts(copia2);
    return 0;
}
