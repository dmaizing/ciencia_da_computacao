#include<stdlib.h>
#include<stdio.h>

int main()
{
	int a[5][5];
	int i,j,t=0;
	for(i=0;i<=4;i++) {
		for(j=0;j<=4;j++) {
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
			if(i==j) {
				if(a[i][j]%2!=0) {
					t=t;
				} else {
					t+=a[i][j];
				}
			}
		}
	}
	printf("t = %d\n",t);
	return 0;	
}
