#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sayi;

    printf("[1] Dort Tekerlekli\n[2] Iki Tekerlekli\n[3] Kanatli\nSecimin:");
    scanf("%d", &sayi);

    switch (sayi)
    {
        case 1:
            printf("Araba\n");
            break;
        case 2:
            printf("Bisiklet\n");
            break;
        case 3:
            printf("Ucak\n");
            break;
        
        default:
            printf("Yanlis Deger\n");
            break;
    }

    return 0;
}
