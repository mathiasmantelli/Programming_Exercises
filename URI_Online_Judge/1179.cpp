#include <iostream>
#include <string.h>

using namespace std; 

#define tam 5

int main(){
  int contp, conti, par[tam], impar[tam], n, i,t; 
  t = 15; 
  contp = conti = 0;
  while(t--){
   cin >> n; 
   if(n % 2 == 0){ 
     if(contp == tam){
       for(int i = 0; i < tam;i++) cout << "par["<<i<<"] = "<<par[i]<<endl;
       memset(par, 0, sizeof(par));
       contp = 0;
     }
     par[contp] = n; 
     contp++;
   }else{
     if(conti == tam){
       for(int i = 0; i < tam;i++) cout << "impar["<<i<<"] = "<<impar[i]<<endl;
       memset(impar, 0, sizeof(impar));
       conti = 0;
     }
     impar[conti] = n; 
     conti++;
  }
 }
 if(conti > 0) for(i = 0; i < conti; i++)cout << "impar["<<i<<"] = "<<impar[i]<<endl;
 if(contp > 0) for(i = 0; i < contp; i++)cout << "par["<<i<<"] = "<<par[i]<<endl;
 
  
 return 0;  
}