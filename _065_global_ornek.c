#include <stdio.h>
#include <stdlib.h>
int g_degisken1=20;

int main()
{
   printf("g=%d\n",g_degisken1);

   //lokal değişken beyanı

   int degisken1=10; //globali ezip local değer ile yeni değer ile değiştirmiş olduk
   //glolal değişkenleri ayırt edici isimler ile belirtmeliyiz

   printf("g=%d\n",degisken1);

   return 0;


}
