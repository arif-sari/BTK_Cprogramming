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
        printf("Pazartesi");
        break;
    case 2:
        printf("Sali");
        break;
    case 3:
        printf("Çarşamba");
        break;
    case 4:
        printf("Perşembe");
        break;
    case 5:
        printf("Cuma");
        break;
    case 6:
        printf("Cumartesi");
        break;
    case 7:
        printf("Pazar");
        break;
    default:
        printf("Geçersiz bir deger girdiniz");
    }
    return 0;
}
