#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double taban , kuvvet , sonuc;

    //Kullanıcıdan iki sayi al
    printf("Taban değerini girin : ");
    scanf("%lf",&taban);
    printf("Kuvvet değerini girin :");
    scanf("%lf" , &kuvvet);

    //taban kuvvet hesabı
    sonuc= pow(taban,kuvvet);
    printf("%.2lf ^ %.2lf= %.2lf",taban, kuvvet,sonuc);

    return 0;
}
