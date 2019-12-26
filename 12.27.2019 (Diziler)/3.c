#include <stdio.h>

int main()
{
    int i;
    char isimler[4][12] = {
        "Dogan", "Zeynep", "Bekir"
    };

    printf("Son ismi giriniz: ");
    scanf("%s", isimler[3]);

    for (i = 0; i < 4; i++)
        printf("%d -> %s\n", i + 1, isimler[i]);
    
    return 0;
}