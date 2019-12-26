#include <stdio.h>
#define Limit 40

int main()
{
    int i;
    char isimler[3][12];
    float notlar[3][3];

    for (i = 0; i < 3; i++)
    {
        printf("%d. ogrencinin ismini girin: ", i + 1);
        scanf("%s", isimler[i]);
        printf("%s vize notu: ", isimler[i]);
        scanf("%f", &notlar[i][0]);
        printf("%s final notu: ", isimler[i]);
        scanf("%f", &notlar[i][1]);
        notlar[i][2] = notlar[i][0] * 0.4 + notlar[i][1] * 0.3;
    }

    for (i = 0; i < 3; i++)
        if(notlar[i][1] < Limit)
            printf("%s dersin finalinden kaldi!\n", isimler[i]);
        else if(notlar[i][2] < Limit)
            printf("%s dersin genel ortalamadan kaldi!\n", isimler[i]);
        else
            printf("%s dersten gecti!\n", isimler[i]);
    
    
}
