#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gun;

    printf("Gunun, haftanin kacinci gunu oldugunu giriniz (1-7) \n");
    scanf("%d",&gun);

    switch(gun)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("Haftaici \n");
        break;
    case 6:
    case 7:
        printf("Haftasonu \n");
        break;
    default:
        printf("Geçersiz bir deger girdiniz \n");
        break;
    }
    return 0;
}
