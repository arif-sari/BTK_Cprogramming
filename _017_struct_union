#include <stdio.h>
#include <stdlib.h>
// kullanıcı tanımlı değişken türleri
//struct bir nevi değişkenler kümesi her bir personel için detayları aynı anda hafızada tutan veri
//hafızada yeriniz yoksa tüm veriyi tutmaya imkan yoksa özellikler gömülü sistemde struct yerine union kullanır



//01 ilk önce personele ait struct oluşturulur
 struct PersonelBilgisi{
        int Yas;
        float Maas;
        char Isim[30];
        char Cinsiyet[8];


    };




int main()
{
    struct PersonelBilgisi Personel1;
    //Personel1 alanlarına değer ata
    //Personel1.Isim ="Ahmet Ahmetoğlu"; yazarsak hata alırız

    strcpy(Personel1.Isim, "Ahmet Ahmetoğlu"); //strcpr ile personel1e kopyalamak gerekiyor

    //Personel1.Cinsiyet ="Erkek"; yazarsak hata alırız

    strcpy(Personel1.Cinsiyet, "Erkek");
    // stringlerde atama yapamıyoruz ama int ve float için atama yapılabilir

    Personel1.Yas= 34;
    Personel1.Maas= 8500;

    // Personel bilgilerini yazdır

    printf("Personelin Adı: %s\n", Personel1.Isim);
    printf("Personelin Cinsiyeti: %s\n", Personel1.Cinsiyet);
    printf("Personelin Yaşı: %d \n", Personel1.Yas);
    printf("Personelim Maaşı: %.2lf\n", Personel1.Maas);

    printf("\n............................\n");

    // Persone2 bilgilerini yazdır
    // Diğer tanımalama yöntemi {yas,maaş,isim,cinsiyet} küme parantezi içinde tanımlanıyor

    struct PersonelBilgisi Personel2 = {33,8800,"Ayşe Ayşeoğlu","Kadın"};

    printf("Personelin Adı: %s\n", Personel2.Isim);
    printf("Personelin Cinsiyeti: %s\n", Personel2.Cinsiyet);
    printf("Personelin Yaşı: %d \n", Personel2.Yas);
    printf("Personelim Maaşı: %.2lf \n", Personel2.Maas);

    printf("\n............................\n");


    //personel bilgilerini yeni bir yapıya kopyala

    struct PersonelBilgisi Personel2Kopyasi;
     Personel2Kopyasi=Personel2;
    //personel2'nin kopyası structının değerlerinin yazdırır
    //personel 2nin kopyasını oluşturdurğumuz için aynı bilgileri personel2 kopyasında dagörmemiz gerekir

    printf("Personelin Adı: %s\n", Personel2Kopyasi.Isim);
    printf("Personelin Cinsiyeti: %s\n", Personel2Kopyasi.Cinsiyet);
    printf("Personelin Yaşı: %d \n", Personel2Kopyasi.Yas);
    printf("Personelim Maaşı: %.2lf \n", Personel2Kopyasi.Maas);

    printf("\n............................\n");

    return 0;
}
