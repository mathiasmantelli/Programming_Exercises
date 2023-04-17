#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include <string.h>

using namespace std; 

#define tam 12.0

int main(){
 double valor,temp = 0;
 string operacao, teste("S"); 
 int i,j, x;
 x = 0;
 
 cin >> operacao; 
  for(i = 0; i < tam; i++){
    for(j = 0; j < tam; j++){
      cin >> valor;
      if((j < i) && (j > (tam - i - 1)) && (i > (tam/2) - 1 )){
		x++;
		temp += valor;
      }
    }
  }

 
 if(operacao == teste){ //SOMA
   printf("%.1f\n",temp); 
 }else{ 
   printf("%.1f\n",temp/x); 
 }
 return 0;  
} 