#include <stdio.h>

int main()
{
    float sureler[5][2];
    int i;
    int j;

    sureler[0][0] = 12.25; sureler[0][1] = 14.25;
    sureler[1][0] = 15.23; sureler[1][1] = 21.25;
    sureler[2][0] = 25.23; sureler[2][1] = 31.25;
    sureler[3][0] = 35.23; sureler[3][1] = 51.25;
    sureler[4][0] = 45.23; sureler[4][1] = 61.25;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d. kosucunun %d. suresi = %f\n", 
            i + 1, j + 1, sureler[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
