#include<stdio.h>


int main()
{
	int i, k;
	for(i =0; i<=10; i++)
	{
		for(k=0; k<=10; k++)
		{
			printf("%d\t", i*k);
		}
		printf("\n");
	}
}
