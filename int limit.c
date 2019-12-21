#include <stdio.h>

int main()
{
	int i, j, z, k, toplam = -1;
	
	
	printf("%d\n\n",sizeof(int));
	for (i=0;i<256;i++)
	{
		for(j=0;j<256;j++)
		{
			for(z=0;z<256;z++)
			{
				for (k=0;k<128;k++)
				{
					toplam++;
				}
			}
		}
	}
	printf("%d\n",toplam);
	printf("%d",++toplam);
}
