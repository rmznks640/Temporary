#include <stdio.h>
int main()
{
    int i;
    int negitif=0;
    int positif=0;
    int sifir=0;
    int sayi;
    for ( i = 0; i < 10; i++)
    {
        printf("Sayi Giriniz= ");
        scanf("%d",&sayi);
        if (sayi<0)
        {
            negitif++;
        }
       else if (sayi>0)
        {
            positif++;
        }
       else if (sayi==0)
        {
            sifir++;
        }
        
    }
    printf("Pozitif= %d\n",positif);
    printf("negatif= %d\n",negitif);
    printf("sifir= %d\n",sifir);
    return 0;
}
