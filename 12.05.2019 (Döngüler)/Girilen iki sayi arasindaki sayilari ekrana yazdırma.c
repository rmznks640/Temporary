#include <stdio.h>
int main()
{
    int sayi1,sayi2;
    printf("Sayi 1 giriniz");
    scanf("%d",&sayi1);
    printf("Sayi 2 giriniz");
    scanf("%d",&sayi2);
    if (sayi1>sayi2)
    {
        for ( sayi2; sayi2 < sayi1; sayi2++)
        {
            printf("%d\n",sayi2);
        }
        
    }
    else
    { 
    
        for (; sayi1 < sayi2; sayi1++)
        {
            printf("%d\n",sayi1);
        }
        
    }

    
    return 0;
}
