#include <stdio.h>
#include <stdlib.h>

/*global değişken programcı tarafından belirtilmezde


   int   0
   char  '\0'
   float   0
   double   0
   pointer   NULL

   */
   int g_degisken1; //global değişken olduğunu belirtmek için g_degisken olarak tanımlanır

int main()
{
        //int içindeki tanımlı olanlar local değişkenlerdir tanımlanmazsa otomatik tanımlanmaz
    int a,b ;

    a=10;
    b=20;
    g_degisken1=a+b;


printf  ("a=%d, b= %d, g= %d",a,b,g_degisken1);

return 0;

}
