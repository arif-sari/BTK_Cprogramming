#include<stdio.h>
#include<math.h>
//fonksiyon beyani
//decleration

float CemberCapiHesapla(float yaricap);
float CemberCevresiHesapla(float yaricap);
float DaireAlaniHesapla(float yaricap);

int main(){
    float cap, alan, yaricap, cevre;

    printf("Cember/Dairenin yaricapini girin :");
    scanf("%f",&yaricap);

    cap = CemberCapiHesapla(yaricap);
    cevre = CemberCevresiHesapla(yaricap);
    alan = DaireAlaniHesapla(yaricap);

    printf("Cemberin capi = %.2f birimdir\n",cap);
    printf("Cemberin cevresi= %.2f birimdir\n",cevre);
    printf("Dairenin alani= %.2f birimdir*\n",alan);

    return 0;

}


//hesaplama yapan fonsiyonlar

float CemberCapiHesapla (float yaricap){
return(2*yaricap);
}

float CemberCevresiHesapla(float yaricap){
return (2*M_PI*yaricap);
}

float DaireAlaniHesapla(float yaricap){
return (M_PI/yaricap*yaricap);
}
