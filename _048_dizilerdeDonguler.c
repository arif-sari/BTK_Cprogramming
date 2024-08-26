#include <stdio.h>
#include <stdlib.h>

int main()
{   int benimDizim[10]={25,33,75,100};
    benimDizim[2]=45;
    int indeks;
    //dizilerin eleman sayısını fazla verince anlamsız verilere yol açar

    for (indeks=0;indeks<10;indeks++){
        printf("%d\n",benimDizim[indeks]);
    }

    return 0;
}
