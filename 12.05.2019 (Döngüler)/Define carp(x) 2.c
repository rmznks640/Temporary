#include <stdio.h>
#define carp(x) (x*x)
int main()
{
    int i=1,sonuc=0;
    i = 4;
    sonuc=carp(i);
    printf("1.Sonuc = %d\n",sonuc);
    i++;
    sonuc=carp(i);
    printf("2.sonuc =%d\n",sonuc);
    ++i;
    sonuc=carp(i);
    printf("3.Sonuc= %d\n",sonuc);
    return 0;
}
