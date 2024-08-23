#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sayi ;
    //çarpanları hesaplanacak sayıları al
    printf("Çarpanlara ayrılacak sayıy giriniz: ");
    scanf("%d",&sayi);

    printf("%d sayısının tüm carpanları : \n",sayi);


    for(i=1; i<=sayi; i++){
        if(sayi%i == 0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
