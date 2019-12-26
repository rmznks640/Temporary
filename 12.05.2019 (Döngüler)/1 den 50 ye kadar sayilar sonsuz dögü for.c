#include <stdio.h>
int main()
{
	int x=1;
	while (1)
	{
		if(x>50)
			break;	
		printf("X= %d\n",x);
		x++;
	}
}