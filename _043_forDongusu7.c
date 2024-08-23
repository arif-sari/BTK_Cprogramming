
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sayi ;
    //çarpanları hesaplanacak sayıları al
    printf("Çarpım tablosu oluşturulacak sayiyi giriniz: ");
    scanf("%d",&sayi);

    for(i=1; i<=10; i++){
        if(sayi%i == 0)
        {
            printf("%d *%d = %d\n",sayi,i,(sayi* i));
        }
    }
    return 0;
}
