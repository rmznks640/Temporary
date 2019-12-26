#include <stdio.h>

int main()
{
    int i;
    char harfler[10];

    for (i = 0; i < 10; i++)
        harfler[i] = i + 'A';
    
    for (i = 0; i < 10; i++)
        printf("%d -> %c\n", i, harfler[i]);

    return 0;
}
