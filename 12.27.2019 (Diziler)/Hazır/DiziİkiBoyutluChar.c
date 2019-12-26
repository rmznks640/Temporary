#include <stdio.h>

int main(int argc, char const *argv[])
{
    char dizi[4][10] = {
        "Asrin",
        "Dogan",
        "Muhammet",
        "Bekir"
    };
    int i;
    
    for (i = 0; i < 4; i++)
        printf("%d -> %s\n", i, dizi[i]);

    return 0;
}
