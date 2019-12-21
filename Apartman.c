#include <stdio.h>

int main()
{
	int i;
	int j;
	
	for(i = 0; i <= 5; i++)
	{
		printf("%d. kattayiz\n", i);
		for(j = 0; j < 10; j++)	
			printf("%d. kat, %d. odanin kapisi calindi!\n", i, j+1);
	}
}
