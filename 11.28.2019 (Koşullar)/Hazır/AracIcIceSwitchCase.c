#include <stdio.h>

int main(int argc, char const *argv[])
{
    char karakter1;
    char karakter2;

    printf("Havada mi yoksa karada mi? (h = havada, k = karada)\n");
    scanf(" %c", &karakter1);

    switch (karakter1)
    {
        case 'h':
            printf("[1] Dort Tekerlekli\n[2] Iki Tekerlekli\nSecimin:");
            scanf(" %c", &karakter2);
            
            switch (karakter2)
            {
                case '1':
                    printf("Araba\n");
                    break;

                case '2':
                    printf("Bisiklet\n");
                    break;
                
                default:
                    printf("Yanlis Giris\n");
                    break;
            }
            break;

        case 'k':
            printf("[1] Kanatli\n[2] Sicak Hava\nSecimin:");
            scanf(" %c", &karakter2);

            switch (karakter2)
            {
                case '1':
                    printf("Ucak\n");
                    break;

                case '2':
                    printf("Hava Balonu\n");
                    break;
                
                default:
                    printf("Yanlis Giris\n");
                    break;
            }
            break;
            
        default:
            printf("Yanlis Giris\n");
            break;
    }
    

    return 0;
}
