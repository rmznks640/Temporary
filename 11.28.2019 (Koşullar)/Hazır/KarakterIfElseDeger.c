#include <stdio.h>

int main(int argc, char const *argv[])
{
    char karakter1;
    char karakter2;

    printf("Sirasiyla iki sayi giriniz\n");
    scanf("%c\n%c", &karakter1, &karakter2);

    printf("1. Karakterin sayisal degeri: %d\n2. Karakterin sayisal degeri: %d\n", karakter1, karakter2);

    if(karakter1 == karakter2)
        printf("Karakterler ayni\n");
    else
        printf("Karakterler farkli\n");

    return 0;
}
