#include <stdio.h>
#include <stdlib.h>

#define VERI_BOYUTU 1000


int main()
{
    /*veri boyutu depolayan karakter dizizi */
    char veri[VERI_BOYUTU];

  /*File Pointer to hold referance to our file*/
  FILE * fPtr;

  // w (write) modunda aç
  // "data/file.txt" dosya güzergahı

  fPtr = fopen("dosya1.txt", "w+");

  //fopen() başarısız olursa null dönecek

  if(fPtr == NULL)
    {
      printf("Dosya olusturulamadı. \n");
      exit(EXIT_FAILURE);
    }
    //Dosyaya kaydedilecek olan girdileri kullanıcıdan al
    printf("Dosyaya kaydedilecek olan girdiyi al: \n");
    fgets(veri,VERI_BOYUTU,stdin);

    //veriyi dosyaya yaz

    fputs(veri, fPtr);

    // Dosyayı kapat

    fclose(fPtr);

    // başarı ile mesaj yazdırıldı

    printf("Dosya başarı ile yazdırıldı ve içeriği kaydedildi... ");


    return 0;
}
