#include <stdio.h>
#include <stdlib.h>

int main()
{

    // dosyamızın referansını tutan işaretçi
    FILE * fPtr;

    char karakter;

    /*

    dosyayı r read modunda açacağız
    "dosya1.txt" dosyasının güzergahı


    */
    fPtr = fopen("dosya1.txt","r");


    /* fopen() , eğer başarısızsa NULL döner */

    if( fPtr ==NULL)
        {
            printf("Dosya okunamadı. \n");
            printf("Dosyanın ilgili konumda olup olmadığını ve de erişim yetkiniz olup olmadığını kontrol edin \n");
            exit(EXIT_FAILURE);
    }

    // dosya başarılı olarak açıldıysa
    printf("Dosya başarılı olarak açıldı, içeriği okunuyor \n\n");

    do{
        karakter = fgetc(fPtr);

        //dosyadan okunan karakteri konsola yazdır

        putchar(karakter);

        } while (karakter!= EOF);   //end of file karakterine denk gelene kadar yap


        //dosya ile işimiz bitti başka dosyaların erişmesi için serbest bırakıyoruz

    fclose(fPtr);





}
