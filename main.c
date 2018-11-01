#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {
	
	int i;
	int K[SIZE];
	
	printf(" input %i numbers : ", SIZE);
	
	for( i=0; i<SIZE; i++)
	{
		scanf("%d",&K[i]);
	}
	
	printf("sorted numbers are : ");
	for (i=0;i<SIZE;i++)
	{
		printf("%d",K[i]);
	}

	return 0;
}
 

