#include <stdio.h>
#include <stdlib.h>

int main()
{
    char karakter;

    //kullanıcıdan bir karakter al
    printf("Lutfen bir karakter giriniz: ");
    scanf("%c",&karakter);

    if((karakter>= 'a' && karakter<= 'z')||(karakter>= 'A' && karakter<= 'Z')){
        printf("Alfabetik karakter girdiniz \n");
    }
    else
    {
        printf("Alfabetik olmayan bir karakter girdiniz \n");
    }
    return 0;
