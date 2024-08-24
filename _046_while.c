#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    //kuýllanýcýdan üstsýnýr deðerini al
    printf("Lutfen ust sinir degerini girin: ");
    scanf("%d",&n);

    printf("1'den %d'ye kadar tum sayma sayilari\n",n);

    for(i=1;i<=n;i++){
        printf("%d\n",i);
    }
    printf("...\n");

    i=1;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
   printf("....\n");

    return 0;
}
