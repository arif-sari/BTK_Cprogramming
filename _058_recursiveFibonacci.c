#include <stdio.h>
#include <stdlib.h>

int NinciFibonacciSayisiniHesapla(int n);

int main()
{
    int n1=0,n2=1;
    printf("Fibonacci dizisinden ilk kaç elemanın hesaplanmasını istersiniz?:");
    int adet;
    scanf("%d",&adet);
    int n3,i;

    //0 ve 1 hali hazırda yazıldığı için sonraki sayıları yazdır

    for(i=2;i<adet;++i){
        n3 = n1+n2;
        printf("%d",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}

int NinciFibonacciSayisiniHesapla(int n ){
    if(n==1){
        return 0;
        }else if (n==2){
        return 1;
    }else{
        return NinciFibonacciSayisiniHesapla(n-1)+NinciFibonacciSayisiniHesapla(n-2);
    }
}

