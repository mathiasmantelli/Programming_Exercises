#include <stdio.h>
#include <iostream>
#include <math.h> // necessário para raiz
 
using namespace std;

#define NMAX 100// valor máximo para o valor máximo
 
int main() {
    double vet[NMAX],n;
    int i;
    cin >> n;
    vet[0] = n;
    for(i = 1; i < NMAX; i++) vet[i] = vet[i-1]/2.0;
    for(i = 0; i < NMAX;i++) printf("N[%d] = %.4f\n",i,vet[i]);
    
    return 0;
}