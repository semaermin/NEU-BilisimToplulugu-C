#include <stdio.h>
#include <stdlib.h>

// Soru 1
int main()
{
    int sayi, i;
    printf("Kac sayi girilecek:");
    scanf("%d", &sayi);
    int girilen_deger, toplam = 0;
    for (i = 0; i < sayi; i++)
    {
        printf("%d.sayiyi giriniz:", i + 1);
        scanf("%d", &girilen_deger);

        toplam += girilen_deger;
    }

    float ar_or = toplam / (float)sayi;

    printf("Sayilarin aritmetik ortalamasi: %.2f", ar_or);
    return 0;
}

// Soru 2
int main()
{
    int cift = 0, tek = 0;
    int sayi;
    do
    {
        printf("Bir sayi giriniz:");
        scanf("%d", &sayi);

        if (sayi % 2 == 0)
            cift++;
        else if (sayi % 2 == 1 && sayi != 0)
        {
            tek++;
        }
    } while (sayi != 0);

    printf("Toplam tek sayi: %d\tToplam cift sayi: %d", tek, cift);
    return 0;
}

// Soru 3
int main()
{
    int sayi1, sayi2, toplam, carpim;
    while (sayi1 + sayi2 != sayi1sayi2)
    {
        printf(" İki sayı girin Giriniz: ");
        scanf("%d %d", &sayi1, &sayi2);
        printf("Toplamları: %d\nÇarpımları: %d\n", sayi1 + sayi2, sayi1sayi2);
    }
}

// Soru 4
int main()
{
    int kisi_sayisi;
    int cevap, i;
    int olumlu = 0, tarafsiz = 0, olumsuz = 0;
    printf("Kisi sayisi giriniz:");
    scanf("%d", &kisi_sayisi);
    for (i = 0; i < kisi_sayisi; i++)
    {
        printf("Dersimizden memnun musunuz?\n1- Olumlu \t2- Tarafsiz \t3- Olumsuz\n%d.Kisinin verdigi cevabi giriniz:", i + 1);
        scanf("%d", &cevap);

        if (cevap == 1)
            olumlu++;
        else if (cevap == 2)
            tarafsiz++;
        else if (cevap == 3)
            olumsuz++;
        else
            printf("Hatali bir deger girdiniz.");
    }

    float olumlu_oran = (olumlu / (float)kisi_sayisi) * 100;
    float tarafsiz_oran = (tarafsiz / (float)kisi_sayisi) * 100;
    float olumsuz_oran = (olumsuz / (float)kisi_sayisi) * 100;

    printf("\nSorulan soru icin:\nOlumlu oran: %% %.2f\tTarafsiz Oran: %% %.2f\tOlumsuz Oran: %% %.2f", olumlu_oran, tarafsiz_oran, olumsuz_oran);
}

// Soru 5
int main()
{
    int miktar, kalan, yirmi = 0, on = 0, bes = 0;
    printf("Çekmek istediğiniz miktar: ");
    scanf("%d", &miktar);
    if (miktar % 5 != 0)
    {
        printf("Çekmek istediğiniz miktar 5'in katları şeklinde olmalıdır.\n ");
    }
    kalan = miktar;
    while (kalan > 0)
    {
        if (kalan >= 20)
        {
            yirmi = kalan / 20;
            kalan = kalan % 20;
        }
        else if (kalan >= 10)
        {
            on = kalan / 10;
            kalan = kalan % 10;
        }
        else if (kalan >= 5)
        {
            bes = kalan / 5;
            kalan = kalan % 5;
        }
    }
    printf("%d₺ paraniz %d yirmilik, %d onluk ve %d beslik seklinde verilmistir.", miktar, yirmi, on, bes);
}
