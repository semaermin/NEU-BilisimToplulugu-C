#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gun, haftalikKazanc;
    float saatlikUcret;

    printf("Iscinin kac gun calistigini giriniz:");
    scanf("%d", &gun);

    printf("\nIscinin haftalik maasini giriniz:");
    scanf("%d", &haftalikKazanc);

    saatlikUcret = (haftalikKazanc / (float)gun) / 8;
    printf("Iscinin saatlik ucreti: %f", saatlikUcret);
    return 0;
}

int main()
{
    int a, b, c;

    printf("Sirayla a b c yi giriniz:");
    scanf("%d %d %d", &a, &b, &c);

    if (a * b * c > 0)
    {
        printf("Mutlak degerleri ile sayilarin toplami esit");
    }
    else if (a > 0)
    {
        if ((0 - a) + b + c == 0 - (a + b + c))
            printf("Sayilarin mutlaklarinin toplami ile toplamlarinin mutlagi esit.") else
            {
                printf("Sayilarin mutlaklarinin toplami ile toplamlarinin mutlagi esit degil.")
            }
    }
    else if (b > 0)
    {
        if (a + (0 - b) + c == 0 - (a + b + c))
            printf("Sayilarin mutlaklarinin toplami ile toplamlarinin mutlagi esit.") else
            {
                printf("Sayilarin mutlaklarinin toplami ile toplamlarinin mutlagi esit degil.")
            }
    }
}

int main()
{
    int SaatlikUcret, CalismaSaati;

    printf("Iscinin saatlik ucretini giriniz:");
    scanf("%d", &SaatlikUcret);

    printf("Iscinin gunde kac saat calistigini giriniz:");
    scanf("%d", &CalismaSaati);

    if (CalismaSaati * 7 > 40)
    {
        float YeniUcret = (SaatlikUcret * 1.5) * CalismaSaati * 7;
        printf("Iscinin bir haftalik kazanci: %.2f", YeniUcret);
    }
    else
    {
        int YeniUcret = SaatlikUcret * CalismaSaati * 7;
        printf("Iscinin bir haftalik kazanci: %d", YeniUcret);
    }
}

int main()
{
    int a, b, c;
    printf("Sirayla a b c yi giriniz:");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= 0 && b >= 0 && c >= 0)
    {
        printf("Sayilarin hepsi pozitif.");
    }
    else
    {
        printf("Sayilarin bazilari pozitif degil.");
    }

    return 0;
}

int main()
{
    int a, b, c, topMut;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    topMut = a + b + c;

    if ((a + b + c) < 0)
        topMut = -1 * (a + b + c);

    if (a < 0)
        a = -1 * a;

    if (b < 0)
        b = -1 * b;

    if (c < 0)
        c = -1 * c;

    if (a + b + c == topMut)
        printf("Sayıların mutlak değerlerinin toplamı ile sayıların toplamlarının mutlak değerleri eşittir.");
    else
        printf("Sayıların mutlak değerlerinin toplamı ile sayıların toplamlarının mutlak değerleri eşit değildir.");
}

int main()
{
    int maliyet_buzdolabi, maliyet_camasir;
    int satis_buzdolabi, satis_camasir;
    float kar_buzdolabi, kar_camasir;
    int yilliksatis_buzdolabi, yilliksatis_camasir;

    printf("Buzdolabi ve Camasir makinesi maliyetini giriniz:");
    scanf("%d %d", &maliyet_buzdolabi, &maliyet_camasir);

    printf("Buzdolabi ve Camasir makinesi satis fiyatlarini giriniz:");
    scanf("%d %d", &satis_buzdolabi, &satis_camasir);

    printf("1 yilda satilan buzdolabi ve camasir makinesi adetini giriniz:");
    scanf("%d %d", &yilliksatis_buzdolabi, &yilliksatis_camasir);

    kar_buzdolabi = (satis_buzdolabi - maliyet_buzdolabi) / (float)maliyet_buzdolabi * 100;
    kar_camasir = (satis_camasir - maliyet_camasir) / (float)maliyet_camasir * 100;

    int toplam_satis = satis_buzdolabi * yilliksatis_buzdolabi + satis_camasir * yilliksatis_camasir;

    int toplam_kar = (satis_buzdolabi - maliyet_buzdolabi) * yilliksatis_buzdolabi + (satis_camasir - maliyet_camasir) * yilliksatis_camasir;

    printf("Bir buzdolabinin\nMaliyeti: %d \t Satis Fiyati: %d \t Kar Orani: %.2f \t Yillik Satilan Miktar: %d\n\n", maliyet_buzdolabi, satis_buzdolabi, kar_buzdolabi, yilliksatis_buzdolabi);
    printf("Bir camasir makinesinin\nMaliyeti: %d \t Satis Fiyati: %d \t Kar Orani: %.2f \t Yillik Satilan Miktar: %d\n\n", maliyet_camasir, satis_camasir, kar_camasir, yilliksatis_camasir);

    printf("Yillik Kazanc: %d\nYillik Kar: %d", toplam_satis, toplam_kar);
    return 0;
}