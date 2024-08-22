#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("Lütfen sayıyı girin\n");
    scanf("%d",&sayi);


    if(sayi>0)
    {
    printf("Girmiş olduğunuz sayi pozitiftir");
    }
    else if(sayi<0)
    {
    printf("Girmiş olduğunuz sayi negatiftir");
    }
    else
        {
        printf("girilen sayi sıfırdır");
        }
    return 0;
}
