#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sayi1,sayi2,toplam;
   int *isaretci1,*isaretci2;

   isaretci1=&sayi1; // isaretci1 sayi1'in adresini tutmaktta
   isaretci2=&sayi2;

   printf("İki Sayi girin:");
   scanf("%d%d",isaretci1,isaretci2);

   toplam=*isaretci1+*isaretci2;
   printf("Toplam = %d ",toplam);
   return 0;


}
