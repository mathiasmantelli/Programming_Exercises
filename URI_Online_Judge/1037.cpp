#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
 
int main() {
    double valor,n100, n50, n20, n10, n5, n2, m1, m05, m025, m01, m005, m001;
    valor = n100 = n50 = n20 = n10 = n5 = n2 = m1 = m05 = m025 = m01 = m005 = m001 = .0;
    cin >> valor;
    if(valor >= 0 && valor <= 100){
    if(valor >= 0 && valor <= 25){
      cout<<"Intervalo [0,25]"<<endl;
    }
    if(valor > 25 && valor <= 50){
      cout<<"Intervalo (25,50]"<<endl;
    }
    if(valor > 50 && valor <= 75){
      cout<<"Intervalo (50,75]"<<endl;
    }
    if(valor > 75 && valor <= 100){
      cout<<"Intervalo (75,100]"<<endl;
    }
    }else{
      cout<<"Fora de intervalo"<<endl;
    }
    return 0;
}