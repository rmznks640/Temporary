#include <stdio.h>
#define OgrenciSayisi 5

int main(int argc, char const *argv[])
{
    int i;
    float vizeOrtalama;
    float finalOrtalama;
    float genelOrtalama;
    
    float notlar[OgrenciSayisi][2];

    for (i = 0; i < OgrenciSayisi; i++)
    {
        printf("\n%d. Ogrencinin Vize Notu: ", i + 1);
        scanf("%f", &notlar[i][0]);
        printf("%d. Ogrencinin Final Notu: ", i + 1);
        scanf("%f", &notlar[i][1]);

        vizeOrtalama  += notlar[i][0];
        finalOrtalama += notlar[i][1];
    }

    vizeOrtalama  /= OgrenciSayisi;
    finalOrtalama /= OgrenciSayisi;
    genelOrtalama = vizeOrtalama * 0.4 + finalOrtalama * 0.6;

    printf("Sinifin\nVize Ortalamasi: %f\nFinal Ortalamasi: %f\nGenel Ortalamasi: %f\n", vizeOrtalama, finalOrtalama, genelOrtalama);

    return 0;
}
