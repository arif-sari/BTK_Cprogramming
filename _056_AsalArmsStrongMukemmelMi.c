#include <stdio.h>
#include <stdlib.h>

int SayiAsalMi(int sayi);
int SayiMukemmelMi(int sayi);
int SayiArmstrongMu(int sayi);

int main()
{
    int sayi;

    printf("Bir sayi giriniz: \n");
    scanf("%d",&sayi);

    //SayiAsalMi() fonksiyonunu çagır ve sonucu yazdır

    if(SayiAsalMi(sayi)){
        printf("%d Sayi bir asal sayidir\n",sayi);
    }else{
        printf("%d Sayi asal sayi değildir\n",sayi);
    }

    //SayiArmstrongMu() fonksiyonunu cagırır ve sonucu yazdırır
    if(SayiArmstrongMu(sayi)){
        printf("%d Sayı armstrong sayidir\n",sayi);
    }else{
        printf("%d Sayı armstrong değildir\n",sayi);
    }

    //SayiMukemmelMi() fonksiyonunu çagırır ve sonucu yazdırır

    if(SayiMukemmelMi(sayi)){
        printf("%d Sayi bir mükemmel sayidir \n",sayi);
    }else{
        printf("%d Sayi mükemmel sayi değildir\n ",sayi);
    }
    return 0;
}


// Fonksiyonlar

int SayiAsalMi(int sayi){
    int i;

    for (i=2;i<=sayi/2;i++){
        return 0;
    }

}


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

int SayiMukemmelMi(int sayi){

    /*kendisi hariç pozitif tam bölenlerinin toplamı kendisine eşit mükemmel sayıdır
    örnek     6=3+2+1
    */

    int i, toplam,n;
    toplam =0;
    n=sayi;

    for (i=1;i<n;i++){
    //sayi i degerine bölünüyorsa

        if(n%i==0){
        toplam+=i;

        }
    }

    return(sayi== toplam);

}
