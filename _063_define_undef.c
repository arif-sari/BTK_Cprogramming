#include <stdio.h>
#include <stdlib.h>

#define BUYUK_SAYI 1000000 // SONUNDA ; / = yok

//define ile atanan değişken(golbal değişken gibi) kod içinden erişilebilir, undef/define ile değiştirilebilir
//const  değiştirilemez
//main içinde tanımlananlara fonksiyondan çıkınca erişilemez

int BelirliIslemlerGerceklestir(int girdi)
{
    return (girdi<BUYUK_SAYI);
    //return (girdi<BASKA_BIR_BUYUK_SAYI); hata verir
}

int main()
{
    int ilk_degisken =20;
    int ikinci_degisken=25;
    int sonuc1, sonuc2, sonuc3;
    const int BASKA_BIR_BUYUK_SAYI=1000000;

    printf("Büyük sayi: %d\n",BUYUK_SAYI);

    sonuc1=(ilk_degisken<BUYUK_SAYI);
    printf("Sonuc 1: %d\n",sonuc1);

    sonuc2=(ikinci_degisken<BUYUK_SAYI);
    printf("Sonuc 2: %d\n",sonuc2);


    #undef BUYUK_SAYI
    #define BUYUK_SAYI 30000000

    printf("Buyuk sayi : %d\n" ,BUYUK_SAYI);

    sonuc3=BelirliIslemlerGerceklestir(30);
    printf("Sonuc 3: %d\n ",sonuc3);


}
