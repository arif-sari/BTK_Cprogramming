#include <stdio.h>
#include <stdlib.h>

int main()
{
    int isim =" Arif SARI";
    int message = "Hello World";
    char c='B';


    printf("İsmin kapladigialan %d byte kadardir \n", sizeof(isim));

    printf("%d\n",sizeof(message));
    printf("%d\n",sizeof(c));


    return 0;
}
