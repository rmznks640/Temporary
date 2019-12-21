#include <stdio.h>

int main()
{
    char karakter1;
    char karakter2;

    printf("[1] Kara Araclari\n[2] Hava Araclari\nSeciminiz:");
    scanf(" %c", &karakter1);

    switch (karakter1)
    {
        case '1':
            printf("[1] Dort Tekerlekli\n[2] Iki Tekerlekli\nSeciminiz:");
            scanf(" %c", &karakter2);

            switch (karakter2)
            {
                case '1': printf("Araba"); break;
                case '2': printf("Bisiklet"); break;
                default:  printf("Yanlis Deger Girdiniz"); break;
            }
            break;
            
        case '2':
            printf("[1] Kanatli\n[2] Sicak Hava\nSeciminiz:");
            scanf(" %c", &karakter2);

            switch (karakter2)
            {
                case '1': printf("Ucak"); break;
                case '2': printf("Hava Balonu"); break;
                default:  printf("Yanlis Deger Girdiniz"); break;
            }
            break;
        
        default: printf("Yanlis Deger Girdiniz"); break;
    }
    
    return 0;
}
