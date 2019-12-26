#include <stdio.h>
#define KupSayisi 4

int main(int argc, char const *argv[])
{
    float veriler[KupSayisi][3];
    float sonuc;
    int i;
    int j;
    
    for (i = 0; i < KupSayisi; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d. Dikdörtgen Prizmasinin %d. kenarinin uzunlugu: ", i + 1, j + 1);
            scanf("%f", &veriler[i][j]);
        }
        printf("------------------------------------\n");
    }
    
    for (i = 0; i < KupSayisi; i++)
    {
        sonuc = 1.0;
        for (j = 0; j < 3; j++)
            sonuc *= veriler[i][j];
        printf("%d. Kupun Hacmi = %g\n", i + 1, sonuc);
    }
    
    return 0;
}
