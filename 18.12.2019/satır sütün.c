#include <stdio.h>

int main()
{
	int satir=5,i,j,sutun=5;
	
	for(i=1; i<=satir; i++)
	{
		for(j=1; j<=sutun; j++)
			printf(" %d,%d ",i,j);
		printf("\n");
	}	
}
