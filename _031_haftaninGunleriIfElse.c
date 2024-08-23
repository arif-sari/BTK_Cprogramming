#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gun;

    printf("Gunun, haftanin kacinci gunu oldugunu giriniz (1-7) \n");
    scanf("%d",&gun);

    if(gun==1){
        printf("Pazartesi");
    }else if(gun==2){
        printf("Sali");
    }else if(gun==3){
        printf("Çarsamba");
    }else if(gun==4){
        printf("Persembe");
    }else if(gun==5){
        printf("Cuma");
    }else if(gun==6){
        printf("Cumartesi");
    }else if(gun==7){
        printf("Pazar");
    }else{
        printf("Geçersiz değer, lütfen 1 ile 7 arasında sayı girin");
    }
    return 0;
}
