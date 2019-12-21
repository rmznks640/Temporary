#include <stdio.h>

int main()
{
    int girdi;
    int bosluk = 0;
    int j = 0;
    int yildiz;

    do
    {
        printf("Girdi: ");
        scanf("%d", &girdi); // 5

        if(girdi % 2 == 0)
            printf("Tek Bir Sayi Girmeniz Gerekmektedir!\n");
    } while (girdi % 2 == 0);
    
    
    bosluk = girdi / 2; // 5 / 2 = 2.5 -> 2
    yildiz = 1;
    
    while (bosluk >= 0) // 2  -  1
    {
        for (j = 0; j < bosluk; j++) // 2  -  1
            printf(" ");
        
        for (j = 0; j < yildiz; j++) // 1  -  3
            printf("*");
        
        printf("\n");
        bosluk--; // -1
        yildiz += 2; // 7
    }

    bosluk = 1; // 1
    yildiz = girdi - 2; // 3

    while (bosluk <= girdi / 2)
    {
        for (j = 0; j < bosluk; j++) // 1 - 2
            printf(" ");
        
        for (j = 0; j < yildiz; j++) // 3 - 1
            printf("*");
        
        printf("\n");
        bosluk++; // 2
        yildiz -= 2; // 1
    }
    
    
    
    return 0;
}
