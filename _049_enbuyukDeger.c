
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int benimDizim[] ={3,8,11,7,2,9,5,4};
    int enBuyukDeger = benimDizim[0];
    int konum = 0;

    int boyut= sizeof(benimDizim)/sizeof(benimDizim[0]);

    for(int indeks=0;indeks<boyut;indeks++){
        if(benimDizim[indeks]>enBuyukDeger){
            enBuyukDeger = benimDizim[indeks];
            konum= indeks;
        }
    }

    printf("Dizinin en buyuk elemani, %d indeksli konumda bulunan %d degeridir \n",konum,enBuyukDeger);
    return 0;
}
