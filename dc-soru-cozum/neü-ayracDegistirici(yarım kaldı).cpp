#include <stdio.h>
#include <locale.h>
using namespace std;

    int strUzunluk(char *string){
    	int i=0;
    	while (*(string+i) !='\0'){
    		i++;
		}
		return i;
	}
	
	void ayracDegistirici(char *string, char ayrac, char yeniAyrac){
		for (int i=0;i<strUzunluk(string);i++){
			if(*(string+i) != ayrac)
			*(string+i)=yeniAyrac;
		}
	}
    

int main(){
	    char dizi[100] = "Python-C-C++-Java-Go-Swift-Javascript";/* yazý sonunda '\0' var.*/
	    char *pdizi = dizi;
	    
	    ayracDegistirici(pdizi ,'-',',');
	    printf(%s,pdizi);
        printf("%d",strUzunluk("sema ermin"));

return 0;
}


