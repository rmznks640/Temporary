#include <stdio.h>

int main()
{
    int sayi = 5;

    printf("sayi = %d\n", sayi);
    printf("sayi++ = %d\n", sayi++);
    printf("sayi = %d\n", sayi);
    printf("++sayi = %d\n", ++sayi);
    printf("sayi = %d\n", sayi);

    do
    {
        printf("%d\n", ++sayi);
    } while(sayi < 20);
    
    
    

    return 0;
}
