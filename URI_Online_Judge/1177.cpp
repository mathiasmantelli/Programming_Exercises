#include <iostream>

using namespace std; 

int main(){
  int t, n,i, aux; 
  i = aux = 0; 
  n = 1000;
  cin >> t;
  while(n--){
    if(aux == t) aux = 0;
    cout <<"N["<<i++<<"] = "<<aux++<<endl;
  }
 return 0;  
}