#include <stdio.h>
#include<math.h>


/*Fonksiyon beyanı */

int SayiArmstrongMu(int sayi);

int main()

{   int sayi;

    //sayıyı kullanıcan alıp sayı değişkenine atıyoruz
    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);

//sayi armstrongMu() fonksiyonu cagır ve yazdır

        if(SayiArmstrongMu(sayi)){
        printf("%d bir armstrong sayisidir. \n",sayi);
        }else{
        printf("%d bir armstrong sayisi değildir\n",sayi);
    }
    return 0;
}

//Bir sayının armstrong sayısı olup olmadığını kontrol edip armstrongsa 1 değilse 0 döndürür
int SayiArmstrongMu(int sayi)
    {

    /* Fonksiyon içeriği
    Armstrong sayısı nedir n basamaklı  sayı içinörnek

    153= (1^3)+(5^3)+(3^3) = 1 + 125 + 27 => 153

    */
 int son_basamak,toplam, orjinal_sayi,basamak_sayisi;
 toplam=0;

 orjinal_sayi=sayi;

 //sayının kaç basamak olduğunu hesapla
 basamak_sayisi=(int)log10(sayi)+1;

 //her basamağın üstellerinin toplamını hesapla

 while(sayi>0){
        //son basamağı al
    son_basamak=sayi%10;
    //    son basamak üstelini hesapla ve toplam değişkene ekle
    toplam=toplam+round(pow(son_basamak,basamak_sayisi));

    //son basamağı yok et
    sayi=sayi/10;
 }
 return (orjinal_sayi==toplam);

}
