#include <stdio.h>
#define PrizmaSayisi 2

int main()
{
    int i;
    int j;
    float hacim;
    float prizmalar[PrizmaSayisi][3];

    for (i = 0; i < PrizmaSayisi; i++)
        for (j = 0; j < 3; j++)
        {
            printf("%d. Dikdortgen prizmasinin %d. kenarinin uzunlugu: ", i + 1, j + 1);
            scanf("%f", &prizmalar[i][j]);
        }

    printf("----------------------------\n");
    
    for (i = 0; i < PrizmaSayisi; i++)
    {
        hacim = 1.0;
        for (j = 0; j < 3; j++)
            hacim *= prizmalar[i][j];
        
        printf("%d. Prizmanin hacmi: %f\n", i + 1, hacim);
    }

}
