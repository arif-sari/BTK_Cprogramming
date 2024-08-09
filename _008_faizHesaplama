#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{
    float ana_para, zaman, faiz_orani, basit_faiz_miktari,bilesik_faiz_miktari;
    printf("Anapara miktarını giriniz :");
    scanf("%f",&ana_para);

    printf("Zamanı giriniz :");
    scanf("%f",&zaman);

    printf("Faiz oranını girin  :");
    scanf("%f" ,&faiz_orani);

    //Basit ve bileşik  faiz hesabı ile faiz miktarı hesapla
    basit_faiz_miktari=(ana_para * zaman * faiz_orani )/100;
    bilesik_faiz_miktari = ana_para *(pow((1+ faiz_orani/100),zaman));


    //sonucu yazdır

    printf("Basit faiz hesabı ile faiz miktarı = %f\n",basit_faiz_miktari);
    printf("Bileşik faiz hesabı ile hesaplanan faiz miktarı = %f",bilesik_faiz_miktari);

    return 0;
}
