#include <stdio.h>
#include <stdlib.h>
//& and yada abpersand
//* asterisk pointer işaretçi
// işaretçiye işaretçi(Çşifte işaretçi)

// adresler bazında bir işlem yapacaksak şu adresteki veriye aritmetik işlem yapmak istiyoruz

int main()
{
    // değişken tanımlama

    char karakter = 'C';
    int tamSayi=1;
    float gercel_tamsayi= 10.4f;
    long long buyuk_tamsayi =98989898911;

    //ampersand &= and per se and (ve yalnızca ve anlamına gelir)
    //bir değişkenimiz var bu değişkenimizin adresini ve değerini yazdırmak istiyoruz

    //printf("karakter değişkeninin değeri = %c, karakter değişkeninin adresi =%u\n",söz edilen karakterin içeriğin değerii,&yazıldığı bellek adresi);
    printf("karakter değişkeninin değeri = %c, karakter değişkeninin adresi =%u\n",karakter,&karakter);
    printf("tamsayı değişkeninin değeri = %d, tamsayı değişkeninin adresi = %u\n",tamSayi,&tamSayi);
    printf("gercel_sayi değişkeninin değeri = %f, gercel_sayı değişkeninin adresi =%u\n",gercel_tamsayi,&gercel_tamsayi);
    printf("buyuk_tamsayi değişkeninin değeri = %lld, buyuk_tamsayi değişkenin adresi =%u\n",buyuk_tamsayi,&buyuk_tamsayi);





}
