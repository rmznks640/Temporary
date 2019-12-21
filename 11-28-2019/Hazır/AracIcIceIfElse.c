#include <stdio.h>

int main(int argc, char const *argv[])
{
    char karakter1;
    char karakter2;

    printf("Havada mi yoksa karada mi? (h = havada, k = karada)\n");
    scanf(" %c", &karakter1);
    
    if (karakter1 == 'h')
    {
        printf("[1] Dort Tekerlekli\n[2] Iki Tekerlekli\nSecimin:");
        scanf(" %c", &karakter2);

        if(karakter2 == '1')
            printf("Araba\n");
        else if(karakter2 == '2')
            printf("Bisiklet\n");
        else
            printf("Yanlis Giris\n");
    }
    else if(karakter1 == 'k')
    {
        printf("[1] Kanatli\n[2] Sicak Hava\nSecimin:");
        scanf(" %c", &karakter2);

        if(karakter2 == '1')
            printf("Ucak\n");
        else if(karakter2 == '2')
            printf("Hava Balonu\n");
        else
            printf("Yanlis Giris\n");
    }
    else
        printf("Yanlis Giris\n");

    return 0;
}
