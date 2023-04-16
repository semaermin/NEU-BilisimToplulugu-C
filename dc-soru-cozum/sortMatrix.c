#include <stdio.h>

int main(){
    int satir,sutun,temp;
    printf("Satir ve sutun sayilarini arada bir bosluk olacak sekilde sirayla giriniz: ");
    scanf("%d %d",&satir,&sutun);
    int dizi[satir][sutun];

    for(int i=0;i<satir;i++){
        printf("%d. satirdaki elemanları aralarinda bir bosluk olacak sekilde girin: ",i+1);
        for(int j=0;j<sutun;j++){
            scanf("%d",&dizi[i][j]);
        }
    }
    

    for(int i=0;i<satir*sutun;i++){
        for(int j=i;j<satir*sutun;j++){
            if(dizi[i/sutun][i%sutun]>dizi[j/sutun][j%sutun]){
                temp = dizi[i/sutun][i%sutun];
                dizi[i/sutun][i%sutun] = dizi[j/sutun][j%sutun];
                dizi[j/sutun][j%sutun] = temp;
            }
        }
    }

    for(int i=0;i<satir;i++){
        for(int j=0;j<sutun;j++){
            printf("%d\t",dizi[i][j]);
        }
        printf("\n");
    }
}