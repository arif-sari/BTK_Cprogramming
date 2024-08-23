#include <stdio.h>
#include <stdlib.h>

int main()
{
int yil;

//kullanıcıdan yıl bilgisi al
printf("yil degerini giriniz :");
scanf("%d",&yil);
//değer 4e bölünebiliyorsa ve 100'e bölünemiyorsa veya 400e bölünebiliyorsa

   if (((yil % 4 ==0)&&(yil%100 !=0 ))||(yil%400==0))
    {
    printf("Soz konusu yil,artik yildir!...");
   }
   else
   {
       printf("Soz konusu yil artik degildir !... ");
   }
    return 0;
}
