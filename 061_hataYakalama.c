#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bolunen=20;
    int bolen=2;
    int bolum;

    if(bolen==0){
        fprintf(stderr, "Sifira bolme hatasi programdan cikiliyor");
        exit(-1); //exit(EXIT_FAILURE);
    }

    bolum =bolunen/bolen;
    fprintf(stderr,"Bolum(Sonuc): %d\n", bolum);

    exit(0);



}
