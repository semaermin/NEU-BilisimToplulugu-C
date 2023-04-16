#include <stdio.h>
#include <stdlib.h>


void fibonacciMaker(int * fib , int size){
    int firstDigit = 1;
    int secondDigit = 1;
    int temp;

    for (int i = 0; i < size; i++)
    {
        *(fib+i) = firstDigit;
        *(fib+i+1) = secondDigit;
        temp = firstDigit + secondDigit;
        firstDigit = secondDigit;
        secondDigit = temp;
    }
    
}

int main(){
    int fibArrSize;
    printf("Kac elemanlik bir fibonacci dizisi olacagini giriniz:");
    scanf("%d",&fibArrSize);

    int fibArr[fibArrSize];
    int *fibPoint = fibArr;

    fibonacciMaker(fibPoint, fibArrSize);

    for (int i = 0; i < fibArrSize; i++)
    {
        printf("Dizinin %d.Elemani => %d\n",i+1,*(fibPoint+i));
    }
    
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char sentence[100] = "Mehmet VE Ahmet VE Ali VE Ayse VE Sena";
    char *findingStr = "VE";
    char *point = sentence;
    int count = 0;

    int boyut = strlen(sentence);

    for (int i = 0; i < boyut; i++)
    {
        if (*(point+i) == *(findingStr) && *(point+i+1) == *(findingStr+1))
            count++;
    }
    printf("%d",count);
}