#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int i;
    char kullanicilar[2][3][10] = {
        "Syntriax", "SynGiris", "SynSifre",
        "Asdfghjk", "admin"   , "qwert123" 
    };
    char girdiAd[10];
    char girdiSifre[10];
    char girisYapildiMi = 0;

    do
    {
        printf("\n\nKullanici Adinizi Giriniz: ");
        scanf("%s", girdiAd);
        printf("Kullanici Sifrenizi Giriniz: ");
        scanf("%s", girdiSifre);

        for (i = 0; i < 2; i++)
            if(!strcmp(girdiAd, kullanicilar[i][1]) && !strcmp(girdiSifre, kullanicilar[i][2]))
            {
                printf("%s olarak giris yapildi!\n", kullanicilar[i][0]);
                girisYapildiMi = 1;
                break;
            }


        if(!girisYapildiMi)
            printf("Girdiginiz Degerleri Kontrol Ediniz!\n");
        

    } while(!girisYapildiMi);
    
    return 0;
}
