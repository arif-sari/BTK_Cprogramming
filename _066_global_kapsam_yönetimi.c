#include <stdio.h>
#include <stdlib.h>

//global değişken beyan

int a =20;

//verilen iki sayi toplayan fonksiyon

int BaziIslemlerGerceklestir(int a, int b){
printf("a değişkeninin BazıIslemlerGerceklestirir() fonksiyonu içindeki giriş değeri =%d\n",a);
printf("b değişkeninin BazıIslemlerGerceklestirir() fonksiyonu içindeki giriş değeri =%d\n",b);

a*=12;
b+=5;

printf("a değişkeninin BazıIslemlerGerceklestirir() fonksiyonu içindeki sonraki değeri =%d\n",a);
printf("b değişkeninin BazıIslemlerGerceklestirir() fonksiyonu içindeki sonraki değeri =%d\n",b);

return a+b;

}


int main()
{
    //lokal değişken beyanı

    int a=10;
    int b=20;
    int c=0;
    printf("a değişkeninin main() içerisindeki değeri = %d\n",a);
    printf("b değişkeninin main() içerisindeki değeri = %d\n",b);


    c=BaziIslemlerGerceklestir(a,b);
    printf("c değişkeninin main() içerisindeki değeri = %d\n",c);

     printf("a değişkeninin main() içerisindeki yeni değeri = %d\n",a);
    printf("b değişkeninin main() içerisindeki yeni değeri = %d\n",b);


}
