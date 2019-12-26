#include <stdio.h>

int main()
{
    char secim;
    float sayi1 = 0;
    float sayi2 = 0;
    float sonuc;

    printf("Sayi1 ve sayi2'yi sirayla giriniz\n");
    scanf("%f\n%f", &sayi1, &sayi2);

    do
    {
        printf("\n[+] Toplama\n[-] Cikarma\n[*] Carpma\n");
        printf("[/] Bolme\n[e] Cikis\nSeciminiz: ");
        scanf(" %c", &secim);

        switch (secim)
        {
            case '+': 
                sonuc = sayi1 + sayi2; 
                printf("Sonuc = %g\n", sonuc);
                break;
            case '-': 
                sonuc = sayi1 - sayi2; 
                printf("Sonuc = %g\n", sonuc);
            break;
            case '*': 
                sonuc = sayi1 * sayi2; 
                printf("Sonuc = %g\n", sonuc);
            break;
            case '/': 
                sonuc = sayi1 / sayi2; 
                printf("Sonuc = %g\n", sonuc);
            break;
            case 'e': printf("Cikis Yapiliyor\n"); break;
            
            default: printf("Yanlis Deger Girdiniz\n"); break;
        }

    } while (secim != 'e');
    

    return 0;
}
