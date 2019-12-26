#include <stdio.h>
#define AileSayisi 2
#define AileUyeSayisi 2

int main(int argc, char const *argv[])
{
    int i;
    int j;
    int k;
    char aile[AileSayisi][AileUyeSayisi][2][20];

    for (i = 0; i < AileSayisi; i++)
    {
        printf("%d. Aile\n", i + 1);
        for (j = 0; j < AileUyeSayisi; j++)
        {
            printf("%d. Uye\n", j + 1);
            printf("Adi: ");
            scanf("%s", aile[i][j][0]);
            printf("Soyadi: ");
            scanf("%s", aile[i][j][1]);
        }
        printf("\n");
    }
    

    for (i = 0; i < AileSayisi; i++)
    {
        printf("%d. Ailenin Bilgileri\n", i + 1);
        for (j = 0; j < AileUyeSayisi; j++)
            printf("%d. Uyenin Adi: %s, Soyadi: %s\n", j + 1, aile[i][j][0], aile[i][j][1]);
        printf("\n");
    }


    return 0;
}
