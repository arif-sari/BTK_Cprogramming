#include <stdio.h>
#include <string.h>

int main()
{
    char metin1[20]= "Merhaba ";
    char metin2[] = "Dünya!";
    char metin3[20];

    //ucuca ekleme yöntemi
    //strcat concotanate ucuca eklemeninin kısaltması

    strcat(metin1,metin2); // metin2'yi metin1'in ucuna ekle ekle (sonuc metin1'e yazılsın)

    //metin'1 yazdır
    printf("%s",metin1);
    printf("\n...\n ");
    printf("%s",metin2);
    printf("\n...\n ");

    //metin1 içeriğini metin3'e kopyala
    strcpy(metin3 ,metin1);

    //metin3'ü yazdır

    printf("%s",metin3);
    printf("\n...\n ");

    //compare(strcmp) -  metin1 ve metin3 karşılaştır sonucu yazdır
    /* mevcut durumda
        metin1="Merhaba Dünya!"
        metin2 ="Dünya!"
        metin3 = "Merhaba Dünya!
        //str compare iki değeri karşılaştırıyor

        */
    printf("%d\n",strcmp(metin1, metin3));
    printf("\n...\n");
    printf("%d\n",strcmp(metin1, metin2));
    printf("\n...\n");
    printf("%d\n",strcmp(metin2, metin1));
    printf("\n...\n");

    return 0;
}
