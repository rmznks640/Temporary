#include <stdio.h>
int main()
{
    char secim;
    float sayi1,sayi2;
    float sonuc;
    do
    {
        printf("Islem Secininiz \n[+]Toplama\n [-]Cikarma\n [*]Carpma\n [/]Bolme\n");
        printf("Seciminiz = ");
        scanf(" %c",&secim);
    
    } while (secim!='+' && secim!='-' && secim!='*' && secim!='/');
    printf("Sayi1 giriniz= ");
    scanf("%f",&sayi1);
    printf("Sayi2 giriniz= ");
    scanf("%f",&sayi2);
    
    if (secim=='+')
        sonuc=sayi1+sayi2;
    else if(secim=='-')
        sonuc=sayi1-sayi2;
    else if(secim=='*')
        sonuc=sayi1*sayi2;
    else if(secim=='/')
        sonuc=sayi1/sayi2;
    printf("Sonuc = %g",sonuc);
    return 0;
}       