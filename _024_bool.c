#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1, sayi2;
    printf("Lütfen iki sayı girin\n");
    scanf("%d%d",sayi1,sayi2);


    if(sayi1>sayi2)
    {
    printf("%d daha büyüktür",sayi1);
    }

    if(sayi2>sayi1){
    printf("%d daha büyüktür",sayi2);
    }
    if (sayi1==sayi2)
        {
    printf("Sayılar eşittir");
    }


    return 0;
}
