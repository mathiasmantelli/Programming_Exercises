#include <stdio.h>
#include <iostream>
#include <math.h> // necessário para raiz
 
using namespace std;

#define NMAX 20// valor máximo para o valor máximo
 
int main() {
    int aux, vet[NMAX];
    int i,j;
    j = 0;
    for(i = 0; i < NMAX; i++) cin >> vet[i];
 
    for(i = NMAX -1; i >= 0; i--){
      cout <<"N["<<j<<"]"<<" = "<<vet[i]<<endl;
      j++;
    }
    return 0;
}

