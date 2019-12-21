#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sayi1;
    int sayi2;

    printf("Sirasiyla iki sayi giriniz\n");
    scanf("%d\n%d", &sayi1, &sayi2);
    
    printf("sayi1 <  sayi2: %d\n", sayi1 <  sayi2);
    printf("sayi1 >  sayi2: %d\n", sayi1 >  sayi2);
    printf("sayi1 <= sayi2: %d\n", sayi1 <= sayi2);
    printf("sayi1 >= sayi2: %d\n", sayi1 >= sayi2);
    printf("sayi1 == sayi2: %d\n", sayi1 == sayi2);
    printf("sayi1 != sayi2: %d\n", sayi1 != sayi2);
    
    // printf("-----------------\n");

    // if(sayi1 <  sayi2)
    //     printf("sayi1, sayi2'den kucuktur\n");
    // else
    //     printf("sayi1, sayi2'den kucuk degildir\n");

    // if(sayi1 >  sayi2)
    //     printf("sayi1, sayi2'den buyuktur\n");
    // else
    //     printf("sayi1, sayi2'den buyuk degildir\n");

    // if(sayi1 <= sayi2)
    //     printf("sayi1, sayi2'den kucuk esittir\n");
    // else
    //     printf("sayi1, sayi2'den kucuk esit degildir\n");

    // if(sayi1 >= sayi2)
    //     printf("sayi1, sayi2'den buyuk esittir\n");
    // else
    //     printf("sayi1, sayi2'den buyuk esit degildir\n");

    // if(sayi1 == sayi2)
    //     printf("sayi1, sayi2'ye esittir\n");
    // else
    //     printf("sayi1, sayi2'ye esit degildir\n");

    // if(sayi1 != sayi2)
    //     printf("sayi1, sayi2'ye esit degildir\n");
    // else
    //     printf("sayi1, sayi2'ye esittir\n");

    return 0;
}
