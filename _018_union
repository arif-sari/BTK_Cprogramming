#include <stdio.h>
#include <stdlib.h>
 //bir çok varlıgın birleşimi demektir
    //union veri yapısı sadece bir tanesini tutmak için kullanılır
    //struct birden cok veri tutabilir


// veri isimli union oluşturduk
    union Veri {
        int i;
        float f;
        char str[20];//bunların hepsinin en cok kaplayacağı yer kadar açıyor
        };



int main()
{
    union Veri veri;
    veri.i=10;
    veri.f=220.5;
    strcpy(veri.str, "C programlama Kursu");

    printf("Verinin büyüklüğü: %d\n", sizeof(veri));
    printf("veri.i: %d\n",veri.i);
    printf("veri.f: %.2f\n",veri.f);
    printf("veri.str: %s\n",veri.str);
    printf("\n.........\n");// en son ulaştığı veri anlanlı diğerleri farklı değerlerde bu satırda str anlamlı


    veri.i=103;

    printf("Verinin büyüklüğü: %d\n", sizeof(veri));
    printf("veri.i: %d\n",veri.i);
    printf("veri.f: %.2f\n",veri.f);
    printf("veri.str: %s\n",veri.str);
    printf("\n.........\n");// bu satırda veri.i anlamlı

    veri.f=203.45;

    printf("Verinin büyüklüğü: %d\n", sizeof(veri));
    printf("veri.i: %d\n",veri.i);
    printf("veri.f: %.2f\n",veri.f);
    printf("veri.str: %s\n",veri.str);
    printf("\n.........\n");// bu satırda veri.f anlamlı

    return 0;
}
