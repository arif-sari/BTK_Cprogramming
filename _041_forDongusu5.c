#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n ;
    //kullanıcıdan üst sınır değeriniz al
    printf("Lütfen üst sınır değerini giriniz: ");
    scanf("%d",&n);

    printf("1' den %d'ye kadar tüm çift sayılar : \n",n);

    for(i=1;i<=n;i++){
        if(i%2 == 0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
