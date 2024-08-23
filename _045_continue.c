#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=0;

    for(i=1; i<=10;i++)
        {
    if(i==5){
        continue; //5 için çalışma devam et diyor 5 atlanıp 10a kadar devam edecek
    }
        printf("%d\n",i);

    }
return 0;


}
