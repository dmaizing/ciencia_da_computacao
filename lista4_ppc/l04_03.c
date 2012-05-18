#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a[5][5],b[5][5];
	int i,j;
	for(i=0;i<=4;i++) {
		for(j=0;j<=4;j++) {
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
			if(i==j) {
				b[i][j] = a[i][j]*3;
			} else {
				b[i][j] = a[i][j]*2;
			}
		}
	}
	for(i=0;i<=4;i++) {
		for(j=0;j<=4;j++) {
			printf("b[%d][%d] = %d\t",i,j,b[i][j]);
		}
	}
	return 0;
}
