#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
typedef struct Ders_
{
    char ad[20];
    int vize;
    int finall;
    int gecmeNotu;
} Ders;
typedef struct Ogr_
{
    char ad[20];
    int dersSay;
    Ders* dersler;
} Ogr;

Ogr* ogr;
int ogrSay=0;

void ekle(char ad[20],int dersSay)
{
    if(ogrSay==0)
    {
        ogr=(Ogr*)malloc(sizeof(Ogr));
    }
    else
    {
        ogr=(Ogr*)realloc(ogr,sizeof(Ogr)*(ogrSay+1));
    }
    strcpy((ogr+ogrSay)->ad,ad);
    (ogr+ogrSay)->dersSay=dersSay;

    (ogr+ogrSay)->dersler=(Ders*)malloc(sizeof(Ders)*dersSay);

    for(int i=0; i<dersSay; i++)
    {
        printf("%d.Dersin Adý:",i+1);
        scanf("%s",((ogr+ogrSay)->dersler+i)->ad);
        printf("%d.Dersin Vize Notu:",i+1);
        scanf("%d",&((ogr+ogrSay)->dersler+i)->vize);
        printf("%d.Dersin Final Notu:",i+1);
        scanf("%d",&((ogr+ogrSay)->dersler+i)->finall);
        printf("\n");
    }

    ogrSay++;
}
void listeleme()
{
    for(int i=0; i<ogrSay; i++)
    {
        printf("%d.Öðrencinin adý:%s \n",i+1,(ogr+i)->ad);
        printf("%d.Öðrencinin ders sayýsý:%d \n",i+1,(ogr+i)->dersSay);
        printf("\n");
        for(int j=0; j<(ogr+i)->dersSay; j++)
        {
            printf("%d.Dersin adý:%s \n",j+1,((ogr+i)->dersler+j)->ad);
            printf("%d.Dersin vize notu:%d \n",j+1,((ogr+i)->dersler+j)->vize);
            printf("%d.Dersin final notu:%d \n",j+1,((ogr+i)->dersler+j)->finall);
            printf("%d.Dersin geçme notu:%d \n",j+1,((ogr+i)->dersler+j)->gecmeNotu);
            printf("\n");
        }
    }
}
void silme(int ogrenci)
{
    if(ogrenci<=0||ogrenci>ogrSay){
        printf("Böyle bir öðrenci bulunmamaktadýr..");
    }else{

        for(int i=ogrenci;i<ogrSay;i++){
            *(ogr+(i-1))=*(ogr+i);
        }
        ogrSay--;
        ogr=(Ogr*)realloc(ogr,sizeof(Ogr)*ogrSay);
    }
}
void arama(char ad[20]){
    int konum=-1;

    for(int i=0;i<ogrSay;i++)
    {
        if(!strcmp((ogr+i)->ad,ad))
        {
            printf("Bulunan öðrencinin:\n");
            printf("Adý:%s",(ogr+i)->ad);
            printf("Ders Bilgileri:\n");
            for(int j=0;j<(ogr+i)->dersSay;j++){
                printf("%d.Dersin adý:%s\n",i+1,((ogr+i)->dersler+j)->ad);
                printf("%d.Dersin vize notu:%d\n",i+1,((ogr+i)->dersler+j)->vize);
                printf("%d.Dersin final notu:%d\n",i+1,((ogr+i)->dersler+j)->finall);
                printf("%d.Dersin geçme notu:%d\n",i+1,((ogr+i)->dersler+j)->gecmeNotu);
                printf("\n");
            }

        }
    }

}
void guncelleme(int ogrenci){
     if(ogrenci<=0||ogrenci>ogrSay){
        printf("Böyle bir öðrenci bulunmamaktadýr..");
    }else{
        printf("Güncellenecek öðrencinin dersleri:\n");
        for(int i=0;i<(ogr+(ogrenci-1))->dersSay;i++){
            printf("%d.Dersin adý:%s\n",i+1,(((ogr+(ogrenci-1))->dersler)+i)->ad);
            printf("%d.Dersin vize notu:%d\n",i+1,(((ogr+(ogrenci-1))->dersler)+i)->vize);
            printf("%d.Dersin final notu:%d\n",i+1,(((ogr+(ogrenci-1))->dersler)+i)->finall);
            printf("\n");
        }
        printf("Kaçýncý dersi güncellemek istiyorsunuz?");
        int ders;
        scanf("%d",&ders);

        if(ders<=0||ders>(ogr+(ogrenci-1))->dersSay){
            printf("Böyle bir ders bulunmamaktadýr..");
        }else{
            printf("%d.Dersin yeni vize notu:",ders);
            scanf("%d",&(((ogr+(ogrenci-1))->dersler)+(ders-1))->vize);
            printf("%d.Dersin yeni final notu:",ders);
            scanf("%d",&(((ogr+(ogrenci-1))->dersler)+(ders-1))->finall);
        }
    }
}
void gecmeNotuHesaplama(){
    for(int i=0;i<ogrSay;i++){
        for(int j=0;j<(ogr+i)->dersSay;j++){
            (((ogr+i)->dersler)+j)->gecmeNotu=(((ogr+i)->dersler)+j)->vize*0.4+(((ogr+i)->dersler)+j)->finall*0.6;
        }
    }
}
int main()
{
    setlocale(LC_ALL,"Turkish");

    int karar;
    int dongu=1;
    while(dongu)
    {
        printf("1.Ekleme\n2.Silme\n3.Not Güncelleme\n4.Listeleme\n5.Öðrenci Arama\n0.Çýkýþ\n");
        printf("=>");
        scanf("%d",&karar);
        char ad[20];
        int dersSay;
        int ogrenci;
        switch(karar)
        {
        case 1:
            printf("Eklemek istediðiniz öðrencinin ismi nedir?");
            scanf("%s",ad);
            printf("%s adlý öðrencinin kaç dersi var?",ad);
            scanf("%d",&dersSay);
            ekle(ad,dersSay);
            gecmeNotuHesaplama();
            break;
        case 2:
            printf("Kaçýncý öðrenciyi silmek istiyorsunuz?");
            scanf("%d",&ogrenci);
            silme(ogrenci);
            break;
        case 3:
            printf("Kaçýncý öðrenciyi güncellemek istiyorsunuz?");
            scanf("%d",&ogrenci);
            guncelleme(ogrenci);
            gecmeNotuHesaplama();
            break;
        case 4:
            listeleme();
            break;
        case 5:
            printf("Aranacak öðrencinin ismi nedir?");
            scanf("%s",ad);
            arama(ad);
            break;
        case 0:
            dongu=0;
            break;
        default:
            printf("Yanlýþ seçim");
        }
        printf("devam etmek için bir tuþa basýnýz..");
        getch();
        system("cls");
    }


    return 0;
}
