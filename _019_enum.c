#include <stdio.h>
#include <stdlib.h>
//enum numalandırılmış tiplerdir
//bir insanın eğitim seviyesi, kan grupları gibi sadece belirli değerler alabilen sadece bir listeden alınan değerler dışında değer alamayanlar
// örnek kan grubu- a b ab pozitif ve negatif dışında deger alamaz z kan grubu olamaz
    enum Seviyeler{
    DUSUK=12,
    ORTA=25,
    YUKSEK=35
    };


int main()
{
    enum Seviyeler OdaSicakligi =ORTA;

    // numaralandırılmış tipteki değeri yazdır
    //aksi belirtilmedikçe sıfır göreceğiz

    printf("%d",OdaSicakligi);

    return 0;

}
