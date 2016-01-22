#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

#define tam 101

int main(){
  int n,k,valor,vet[tam],maior;
  
  while(cin >> n >> k && n != 0 && k != 0){
    maior = 0;
    memset(vet,0,sizeof(vet));
    while(n--){
      cin >> valor;
      vet[valor] += 1;
    }
    for(int i = 0; i < tam;i++){
      if(vet[i] >=k) {
	
	maior++;
      }
    }
    cout<<maior<<endl;
  }
  return 0;
}