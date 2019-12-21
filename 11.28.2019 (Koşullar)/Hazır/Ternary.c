#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sayi1;
    int sayi2;

    printf("Sirasiyla iki sayi giriniz\n");
    scanf("%d\n%d", &sayi1, &sayi2);

    printf("Mesaj: %s\n", sayi1 < sayi2 ? "Sayi2 Buyuk" : "Sayi1 Buyuk");

    return 0;
}
