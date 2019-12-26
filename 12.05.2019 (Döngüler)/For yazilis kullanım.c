#include<stdio.h>
int main()
{
    int sayi1,sayi2=20;
    for ( sayi1=10; sayi1 <sayi2; sayi1++)
    {
        if (sayi1==12)
            continue;
        printf("%d\n",sayi1);
    }
    
    return 0;
}
