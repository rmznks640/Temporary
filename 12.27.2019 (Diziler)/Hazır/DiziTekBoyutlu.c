#include <stdio.h>

int main(int argc, char const *argv[])
{
    char dizi[10];
    int i;

    for (i = 0; i < 10; i++)
        dizi[i] = i + 'A';
    
    for (i = 0; i < 10; i++)
        printf("%d -> %c\n", i, dizi[i]);

    return 0;
}
