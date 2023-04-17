#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
 
int main() {
    double valor, imp1, imp2, imp3, total,aux;
    cin >> valor;
    imp1 = imp2 = imp3 = total = aux = 0; 
    if(valor >= 0 && valor <= 2000){
      printf("Isento\n");
    }else{
    if(valor >= 2000.01){
      if(valor <= 3000){
	aux = valor - 2000.;
      }else{
	aux = 1000;
      }
      total += aux * 0.08;
    }
    if(valor >= 3000.01){
      
      if(valor <= 4500){
	aux = valor - 3000.0;
      }else{
	aux = 1500;
      }
      total += aux * 0.18;
    }
    if(valor >= 4500.01){
      aux = valor - 4500.0;
      total += aux * 0.28;
    }
    
    printf("R$ %.2f\n",total); 
    }
    return 0;
}