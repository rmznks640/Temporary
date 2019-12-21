#include <stdio.h>

int main()
{
    char secim;
    float sayi1;
    float sayi2;

    printf("Sayi1 Giriniz: "); scanf("%g", &sayi1);
    printf("Sayi2 Giriniz: "); scanf("%g", &sayi2);

    printf("[+] Toplama\n[-] Cikarma\n[/] Bolme\n[*] Carpma\n"); 
    scanf(" %c", &secim);

    switch (secim)
    {
        case '+':
            printf("%g + %g = %g", sayi1, sayi2, sayi1 + sayi2); break;

        case '-':
            printf("%g - %g = %g", sayi1, sayi2, sayi1 - sayi2); break;

        case '/':
            if(sayi2 == 0.0)
                printf("0'a bolunme hatasi!");
            else
                printf("%g / %g = %g", sayi1, sayi2, sayi1 / sayi2); 
            break;

        case '*':
            printf("%g * %g = %g", sayi1, sayi2, sayi1 * sayi2); break;
        
        default: printf("Yanlis Islem Sectiniz"); break;
    }

    
    return 0;
}
