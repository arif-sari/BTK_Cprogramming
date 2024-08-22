#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ogrenci_notu;

    printf(" Öğrenci notu giriniz: \n");

    //getchar() komutu ile notu al ve ogrenci_notu değişkeninde sakla
    ogrenci_notu= getchar();

    //putchar() komutu ilede notu çıktı olarak ver
    putchar(ogrenci_notu);


    return 0;
}
