#include <stdio.h>
#include <math.h>

int main()
{
    float kenar1;
    float kenar2;
    float kenar3;
    float s;
    float area;

    printf("Sirasiyla a b ve c kenarlarini girin\n");
    scanf("%f\n%f\n%f", &kenar1, &kenar2, &kenar3);

    if(kenar1 + kenar2 > kenar3 && 
        kenar1 + kenar3 > kenar2 && 
        kenar2 + kenar3 > kenar1)
    {
        s = (kenar1 + kenar2 + kenar3) / 2.0;

        area = sqrt(s * 
        (s - kenar1) * 
        (s - kenar2) * 
        (s - kenar3));

        printf("Alan = %f", area);
    }
    else
        printf("Cizilemez");

    return 0;
}
