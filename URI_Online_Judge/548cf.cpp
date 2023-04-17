#include <iostream>

using namespace std; 

bool M[500][500];
int vet[500],n,m,q,v1,v2, cont1, cont2,maior;

int main(){
  memset(M,0,sizeof(M));
  memset(vet,0,sizeof(vet));
  cin>>n>>m>>q; 
  maior = 0;
  for(int i = 0; i < n; i++){
    cont1 = cont2 =  0;
    for(int j = 0; j < m; j++){
      cin>>M[i][j]; 
      if(M[i][j]){
	if(j+1 == m){
	  cont1++;
	  if(cont1 > cont2){
	    cont2 = cont1;
	  }
	  cont1 = 0;
	}else{
	  cont1++;
	}
	}else{
	  if(cont1 > cont2){
	    cont2 = cont1;
	    cont1 = 0;
	  } 
	}
    }
    vet[i] = cont2; 
    (vet[i] > vet[maior]) ? maior = i : maior = maior;
  }
  while(q--){
    cin>>v1>>v2; 
    v1--; 
    v2--; 
    (M[v1][v2] == 0) ? 1 : 0;
    
    for(int i = 0; i < n; i++){ 
      for(int j = 1; j < m; j++){
	
      }
    }
  }
  return 0; 
}