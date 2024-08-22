#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float a,b,c;
    float kok1, kok2, imajiner ;
    float diskriminant;

    printf("(aX^2 + bX +c ) seklindeki ikinici dereceden denklemin a, b, c kaysayilarini giriniz : ");
    scanf("%f%f%f",&a,&b,&c);

    diskriminant = (b*b) - (4*a*c);

    switch (diskriminant>0){

    case 1:
        //diskriminant pozitif
        kok1 =(-b+sqrt(diskriminant))/(2*a);
        kok2 =(-b-sqrt(diskriminant))/(2*a);

        printf("iki adet ayrık ve gercel kök bulunmaktadır %.2f ve %.2f",kok1 ,kok2);
        break;
    case 0:
        switch(diskriminant<0){
            //diskriminant negatif ise
        case 1:

            kok1=kok2=-b/(2*a);
            imajiner = sqrt(-diskriminant)/(2*a);
            printf("iki adet ayrık ve karmasik kök bulunmaktadır %.2f +i%.2f %.2f-i%",kok1 ,imajiner,kok2, imajiner);
        break;

        case 0:
            kok1=kok2=-b/(2*a);



        }
    }
    return 0;
}
