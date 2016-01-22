#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
 
int main() {
    double valor,n100, n50, n20, n10, n5, n2, m1, m05, m025, m01, m005, m001;
    valor = n100 = n50 = n20 = n10 = n5 = n2 = m1 = m05 = m025 = m01 = m005 = m001 = .0;
    cin >> valor;
    
    while(valor >= 100.00){
      valor -= 100.00; 
      n100++;
    }
    while(valor >= 50.00){
      valor -= 50.00; 
      n50++;
    }
    while(valor >= 20.00){
      valor -= 20.00; 
      n20++;
    }
    while(valor >= 10.00){
      valor -= 10.00; 
      n10++;
    }
    while(valor >= 5.00){
      valor -= 5.00; 
      n5++;
    }
    while(valor >= 2.00){
      valor -= 2.00; 
      n2++;
    }
    while(valor >= 1.00){
      valor -= 1.00; 
      m1++;
    }
    while(valor >= .50){
      valor -= 0.50; 
      m05++;
    }
    while(valor >= 0.25){
      valor -= 0.25; 
      m025++;
    }
    while(valor >= 0.1){
      valor -= 0.1; 
      m01++;
    }
    while(valor >= 0.05){
      valor -= 0.05; 
      m005++;
    }
    while(valor >= 0.01){
      valor -= 0.01; 
      m001++;
    }
    
    cout << "NOTAS:"<<endl;
    cout << n100 <<" nota(s) de R$ 100.00"<<endl;
    cout << n50 <<" nota(s) de R$ 50.00"<<endl;
    cout << n20 <<" nota(s) de R$ 20.00"<<endl;
    cout << n10 <<" nota(s) de R$ 10.00"<<endl;
    cout << n5 <<" nota(s) de R$ 5.00"<<endl;
    cout << n2 <<" nota(s) de R$ 2.00"<<endl;
    cout << "MOEDAS:"<<endl;
    cout << m1 <<" moeda(s) de R$ 1.00"<<endl;
    cout << m05 <<" moeda(s) de R$ 0.50"<<endl;
    cout << m025 <<" moeda(s) de R$ 0.25"<<endl;
    cout << m01 <<" moeda(s) de R$ 0.10"<<endl;
    cout << m005 <<" moeda(s) de R$ 0.05"<<endl;
    cout << m001 <<" moeda(s) de R$ 0.01"<<endl;
    
    return 0;
}