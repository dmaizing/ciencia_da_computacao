#include<stdlib.h>
#include<stdio.h>

int main()
{
	int a[4],b[4],c[4],d[4],e[4][4];
	int i,j;
	for(i=0;i<=3;i++) {
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		e[0][i]=a[i];
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);
		e[1][i]=b[i];
		printf("c[%d] = ",i);
		scanf("%d",&c[i]);
		e[2][i]=c[i];
		printf("d[%d] = ",i);
		scanf("%d",&d[i]);
		e[3][i]=d[i];
	}
	for(i=0;i<=3;i++) {
		for(j=0;j<=3;j++) {
			printf("e[%d][%d] = %d\n",i,j,e[i][j]);
		}
	}
	return 0;	
}