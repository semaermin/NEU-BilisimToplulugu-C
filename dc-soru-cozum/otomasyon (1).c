#include <stdio.h>
    // Bir dizi seklinde, bir hastanedeki hastalarin bilgielri tutulmaktadir. Bir satir bir hasta, ve satir içindeki sutunlar hastanin bilgielri olmak uzere
    // her hastanin essiz bir ID numarasi, sigorta turu, kardes sayisi ve tedavi sekli bilgileri int sayilarla ifade edilmistir.
    // Sigorta Turu: Yok =>0, ucretin iki kati ; SGK =>1, 20% indirimli ; Yesil Kartli =>2, ucretsiz ; GSS=>3, %10 indirimli ; ozel =>4, ucretsiz
    // Kardes sayisi 3ve daha fazla ise 10 ₺ indirimli
    // Tedavi ayakta => 0, 50₺ ; tedavi yatarak =>1, 150₺
    // hastanin toplam ucretini hesaplayip bilgileri ile beraber yazdriniz.
    int hastalar[100][4] = {{101, 0, 4, 1}, {112, 2, 1, 0}, {107, 4, 3, 0}, {257, 1, 0, 0}, {158, 3, 4, 1}, {156, 3, 4, 1}, {423,2,4,0}};

int HastaBul(int hasta_no){
    int satir= sizeof(hastalar)/sizeof(hastalar[0][0]*sizeof(int));
    for(int i=0;i<satir;i++){
        if(hasta_no == hastalar[i][0]){
            return i;
        }
        else if(i == satir-1)
            return -1;
    }
}

float UcretHesapla(int hasta_indis){
    float ucret = 0;
    if(hastalar[hasta_indis][3] == 1){
        ucret = 150;
    }
    else
        ucret = 50;

    switch(hastalar[hasta_indis][1]){
        case 0:
            ucret*=2;
            // ucret = ucret*2;
            break;
        case 1:
            ucret-=(ucret*20)/100;
            //ucret= (ucret*80)/100;
            break;
        case 2:
            ucret =0;
            break;
        case 3:
            ucret-=(ucret*10)/100;
            break;
        case 4:
            ucret = 0;
            break;
        default:
            break;
    }
    if(ucret >=10 && hastalar[hasta_indis][2] >= 3)
        ucret-=10;

    return ucret;
    
}

int main(){
    int hasta_no, hasta_indis;
    float ucret;
    printf("Hangi ID ye sahip kisiyi aramak istiyorsunuz?");
    scanf("%d",&hasta_no);
    hasta_indis = HastaBul(hasta_no);
    if(hasta_indis == -1){
        printf("Hasta bulunamadi");
        return 0;
    }
    ucret = UcretHesapla(hasta_indis);

    printf("Hasta ID: %d\nSigorta: %d\nKardes Sayisi: %d\nTedavi Tipi: %d\nUcret: %.2f",hastalar[hasta_indis][0],hastalar[hasta_indis][1],hastalar[hasta_indis][2],hastalar[hasta_indis][3], ucret);



}
