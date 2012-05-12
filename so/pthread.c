#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>
#define NUMBER_OF_THREADS 10

void *print_hello_world(void *tid)
{
	printf("Alo mundo! Rafael etc com saudades do thread %d\n",tid);
	pthread_exit(NULL);
}
int main(int argc, char *argv[])
{
	pthread_t threads[NUMBER_OF_THREADS]; 
	int status,i;
	char a;
	for(i=0;i<NUMBER_OF_THREADS;i++)
	{
		printf("Criando thread %d\n",i);
		status=pthread_create(&threads[i], NULL, print_hello_world,(void *)i);
		if(status!=0)
		{
			printf("Erro ao criar thread, codigo %d\n",status);
			exit(-1);
		}
	}
	printf("Rafael etc avalizando threads com vc!\n");
	a=getchar();
	exit(0);
}
