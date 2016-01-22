#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
 
int main() {
    double a,b,c,aux;
    a = b = c = 0; 
    cin >> a >> b >> c;
    if(b > a){ 
      aux = b; 
      b = a; 
      a = aux;
    }
    if(c > a){ 
      aux = c; 
      c = a; 
      a = aux;
    }
    if( c > b){ 
      aux = c; 
      c = b; 
      b = aux;
    }
    if (a >= b + c){
       cout << "NAO FORMA TRIANGULO" << endl;      
    } else {
    
        if (pow(a, 2) == pow(b, 2) + pow(c, 2)){
           cout << "TRIANGULO RETANGULO" << endl;       
        } else if (pow(a, 2) > pow(b, 2) + pow(c, 2)){
           cout << "TRIANGULO OBTUSANGULO" << endl;       
        } else if (pow(a, 2) < pow(b, 2) + pow(c, 2)){
           cout << "TRIANGULO ACUTANGULO" << endl;       
        }     
    
        if (a == b && b == c && c == a){
            cout << "TRIANGULO EQUILATERO" << endl;       
        } else if (a == b || a == c || b == c){
            cout << "TRIANGULO ISOSCELES" << endl;   
        } 
    }    
      
    
    return 0;
}