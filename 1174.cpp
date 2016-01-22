#include <stdio.h>
#include <iostream>
#include <math.h> // necessário para raiz
 
using namespace std;

#define NMAX 10// valor máximo para o valor máximo
 
int main() {
    double vet[NMAX];
    int vet2[NMAX];
    int i, aux;
    aux = 0;
    for(i = 0; i < NMAX; i++){
      cin >> vet[i];
      if(vet[i] <= 10){
	vet2[aux] = i;
	aux++;
      }
    }
    for(i = 0; i < aux;i++){
      printf("A[%d] = %.1f\n",vet2[i],vet[vet2[i]]);
    }
    return 0;
}