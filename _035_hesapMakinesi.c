#include <stdio.h>
#include <stdlib.h>

int main()
{
    char islem;
    float sayi1,sayi2,sonuc=0.0f;

    //karşilma mesaji
    printf( "Basit hesap makinesi uygulaması\n");
    printf("-----------------------------------\n");
    printf("Lutfen [sayi 1] [+ - * / ][sayi 2] giriniz \n ");

    //iki sayıyı ve işlem işaretini al

    scanf("%f %c %f",&sayi1,&islem,&sayi2);

    switch (islem){

    case '+':
        sonuc=sayi1+sayi2;
        break;
    case '-':
        sonuc = sayi1-sayi2;
        break;
    case '/':
        sonuc= sayi1 /sayi2;
    case '*':
        sonuc=sayi1*sayi2;
    default :
        printf("Geçersiz islem");

        //sonuclari yazdir

    }
       printf("%.2f %c %.2f = %.2f",sayi1,islem,sayi2,sonuc);
    return 0;
    
}
