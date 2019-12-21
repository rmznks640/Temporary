#include <stdio.h>

int main()
{
    char karakter1;
    char karakter2 = '1';

    printf("[1] Kara Araclari\n[2] Hava Araclari\nSeciminiz:");
    scanf(" %c", &karakter1);

    if(karakter1 == '1')
    {
        printf("[1] Dort Tekerlekli\n[2] Iki Tekerlekli\nSeciminiz:");
        scanf(" %c", &karakter2);

        if(karakter2 == '1')
            printf("Araba");
        else if(karakter2 == '2')
            printf("Motor");
        else 
            printf("Yanlis Deger Girdiniz");
    }
    else if (karakter1 == '2')
    {
        printf("[1] Kanatli\n[2] Sicak Hava\nSeciminiz:");
        scanf(" %c", &karakter2);

        if(karakter2 == '1')
            printf("Ucak");
        else if(karakter2 == '2')
            printf("Hava Balonu");
        else 
            printf("Yanlis Deger Girdiniz");
    }
    else
        printf("Yanlis Deger Girdiniz");
    
    return 0;
}
