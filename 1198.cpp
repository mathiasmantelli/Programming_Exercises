#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std; 

int main(){
 long long int t1, t2;
 while((scanf("%lld %lld", &t1, &t2)) != EOF){
   if(t1 >= t2) cout<<t1-t2<<endl;
   if(t1 < t2) cout<<-1*(t1-t2)<<endl;
 }
 return 0;  
}