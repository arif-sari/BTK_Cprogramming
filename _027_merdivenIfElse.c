#include <stdio.h>
#include <stdlib.h>

int main()
{

    int sayi1,sayi2,sayi3,max;

    printf("Lütfen 3 adet sayı giriniz: \n");
    scanf("%d%d%d",&sayi1,&sayi2,&sayi3);

    if((sayi1>sayi2)&& (sayi1>sayi3))
        {
        max =sayi1;
        }
    else if((sayi2>sayi1)&&(sayi2>sayi3))
        {
        max = sayi2;
        }
    else if((sayi3>sayi1)&&(sayi3>sayi2))
        {
        max =sayi3;
        }

    //max değeri yazdır
    printf("3 sayı arasında en büyük değer = %d",max);

    return 0;
