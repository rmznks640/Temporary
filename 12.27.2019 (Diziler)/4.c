#include <stdio.h>

int main()
{
    int i;
    float notlar[6][3];
    float vizeOrtalamasi = 0.0;
    float finalOrtalamasi = 0.0;
    float genelOrtalamasi = 0.0;

    for (i = 0; i < 6; i++)
    {
        printf("%d. ogrencinin vize notu: ", i + 1);
        scanf("%f", &notlar[i][0]);
        printf("%d. ogrencinin final notu: ", i + 1);
        scanf("%f", &notlar[i][1]);
        notlar[i][2] = notlar[i][0] * 0.4 + notlar[i][1] * 0.6;
        vizeOrtalamasi  += notlar[i][0];
        finalOrtalamasi += notlar[i][1];
        genelOrtalamasi += notlar[i][2];
    }

    vizeOrtalamasi /= 6.0;
    finalOrtalamasi /= 6.0;
    genelOrtalamasi /= 6.0;

    printf("Sinifin\n");
    printf("Vize Ortalaması: %f\n", vizeOrtalamasi);
    printf("Final Ortalaması: %f\n", finalOrtalamasi);
    printf("Genel Ortalaması: %f\n", genelOrtalamasi);

    return 0;
}
