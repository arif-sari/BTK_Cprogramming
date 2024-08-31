#include <stdio.h>
#include <stdlib.h>
int SayininKubunuHesapla(int sayi);

int main()
{
    int sayi;
    int c;

    printf("Lutfen bir sayi giriniz =");
    scanf("%d",&sayi);

    c=SayininKubunuHesapla(sayi);
    printf("%d Sayinin kubu %d",sayi,c);

    return 0;
}

int SayininKubunuHesapla(int sayi){
    return(sayi*sayi*sayi);
}
