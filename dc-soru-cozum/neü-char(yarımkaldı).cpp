#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
    

int main(){
setlocale(LC_ALL,"turkish");
      
      char sentence [100] ="mehmet VE ahmet VE ali VE ayþe VE sena";
      char *finingStr = "VE";
      char *point = sentence;
      int count =0;
      
      for(int i=0;i< strlen(sentence);i++){
      	if(*(point+i)== * (*findingStr)&& *(point+i+1)==*(finingStr+1)){
      		/*code*/
		  }
	  }
}
return 0;
}


