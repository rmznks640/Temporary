#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    int girisYapildiMi = 0;
    char girdiKullaniciAdi[8];
    char girdiKullaniciSifre[8];
    char kullanicilar[3][3][8] = {
        "Super", "qwe12", "Amca",
        "Asrin", "CDers", "Hoca",
        "Ridvan", "goto", "Dalga",
    };

    do
    {
        printf("Kullanici Adinizi Girin: ");
        scanf("%s", girdiKullaniciAdi);
        printf("Kullanici Sifrenizi Girin: ");
        scanf("%s", girdiKullaniciSifre);

        for (i = 0; i < 3; i++)
        {
            if(!strcmp(kullanicilar[i][0], girdiKullaniciAdi))
            {
                if(!strcmp(kullanicilar[i][1], girdiKullaniciSifre))
                {
                    girisYapildiMi = 1;
                    printf("Giris Yapildi. Mesajiniz: %s\n", kullanicilar[i][2]);
                }
                else
                    printf("Sifreniz Yanlis. Tekrar Deneyiniz\n");
            }
        }

        if(!girisYapildiMi)
            printf("Giris Yapilamadi Tekrar Deneyiniz.\n");

    } while (!girisYapildiMi);
    
    return 0;
}