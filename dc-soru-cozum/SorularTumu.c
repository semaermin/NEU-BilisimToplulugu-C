// Soru 1

#include <stdio.h>

void guncelle(int *a,int *b) {
    int toplam, fark;
    toplam = *a + *b;
    fark = *a - *b;
    if (dif < 0)
        dif *= -1;
    *a = toplam;
    *b = fark;     
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    guncelle(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

// Soru 2

#include <stdio.h>

void yerdegistir(int *a, int *b, int *c)
{
    int temp;

    temp = *b;

    *b = *a;
    *a = *c;
    *c = temp;
}

int main()
{
    int a,b,c;
    printf("Sirasiyla a, b, c tamsayilarini giriniz: ");
    scanf("%d %d %d",&a, &b, &c);

    printf("Cevirmeden onceki degerler:\n");
    printf(" a = %d \t b = %d \t c= %d \n",a,b,c);

    yerdegistir(&a , &b , &c);

    printf("Cevirmeden sonraki degerler:\n");
    printf(" a = %d \t b = %d \t c= %d \n",a,b,c);

    return 0;
}