#include <stdio.h>
#include <stdlib.h>
#include<math.h>

//fonsiyon tanımlama
int SayiAsalMi(int sayi);



int main()

{
    int sayi;

    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);

    if(SayiAsalMi(sayi)){
        printf("%d bir asal sayıdır.\n",sayi);
    }else{

        printf("%d bir asal sayi değildir.\n",sayi);
        }

    return 0;
}


/*Fonksiyonun içeriği açıklaması  kendisi ve 1 haricinde başka sayıya bölünmeyen sayı
*/

int SayiAsalMi(int sayi){
 int i;

for (i=2;i<=sayi/2;i++){
    if(sayi%i==0){
        return 0;
    }
}
return 1;

}


