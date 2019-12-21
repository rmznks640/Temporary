#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sayi;

    printf("[1] Dort Tekerlekli\n[2] Iki Tekerlekli\n[3] Kanatli\nSecimin:");
    scanf("%d", &sayi);

    if(sayi == 1)
        printf("Araba\n");
    else if(sayi == 2)
        printf("Bisiklet\n");
    else if(sayi == 3)
        printf("Ucak\n");
    else
        printf("Yanlis Deger\n");

    return 0;
}
