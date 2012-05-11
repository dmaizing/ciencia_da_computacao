#include<stdlib.h>
#include<stdio.h>
#include<string.h>
 
int main ()
{
    char palavra[18],copia1[18],copia2[18];
    int i,c=0;
    printf("Entre com uma palavra: ");
    gets(palavra);
    c=strlen(palavra);
    strcpy(copia1,palavra);
    for(i=0;i<=c;i++) {
		copia2[i]=palavra[i];
    }
    puts(copia1);
    puts(copia2);
    return 0;
}
