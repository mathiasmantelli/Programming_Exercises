#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include <string.h>

using namespace std; 

#define tam 12.0

int main(){
 double valor,temp = 0;
 string operacao, teste("S"); 
 int c,i,j, x;
 cin >> c; 
 cin >> operacao; 
 
 if(operacao == teste){ //SOMA
  
  for(i = 0; i < tam; i++){
    for(j = 0; j < tam; j++){
      cin >> valor;
      if(j == c){
	temp += valor;

      }
    }
  }
  printf("%.1f\n",temp); 
 }else{ 

   for(i = 0; i < tam; i++){
    for(j = 0; j < tam; j++){
      cin >> valor;
      if(j == c){
	temp += valor;
      }
    }
  }
 printf("%.1f\n",temp/tam); 
 }
 return 0;  
} 