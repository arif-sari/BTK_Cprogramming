#include <stdio.h>
#include <stdlib.h>

int main()
{
    int benimMatrisim[2][3]={{1,4,2},{3,6,8}}; //2 satır 3 sütunluk matris

    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d ",benimMatrisim[i][j]);
        }
        printf("\n");
    }
        return 0;
}
