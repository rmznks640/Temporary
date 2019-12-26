#include <stdio.h>

int main(int argc, char const *argv[])
{
    float bilgiler[3][3];
    int i;
    int j;

    bilgiler[0][0] = 43.5;
    bilgiler[0][1] = 43.1;
    bilgiler[0][2] = 45.4;

    bilgiler[1][0] = 41.4;
    bilgiler[1][1] = 45.8;
    bilgiler[1][2] = 47.4;

    bilgiler[2][0] = 50.9;
    bilgiler[2][1] = 56.3;
    bilgiler[2][2] = 58.3;
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d. kisinin %d. kosu suresi: %f\n", i + 1, j + 1, bilgiler[i][j]);
        printf("\n");
    }


    return 0;
}
