#include <bits/stdc++.h>
#include <iostream>
#include <math.h>

 
using namespace std;
  
int main() {
    double g1, g2;
    long int t,pa, pb, anos, aux1,aux2; 

    bool flag; 
    cin >> t; 
    aux1 = 0;
    aux2 = 0;
    while(t--){
      anos = 0;
      flag = false;
      cin>>pa>>pb;
      cin>>g1>>g2; 
 
      while (pa <= pb){
          aux1 = pa * (g1/100);
          aux2 = pb * (g2/100);
          pa += aux1;
          pb += aux2;
          anos++;

        if(anos > 100){ 
          printf("Mais de 1 seculo.\n");
          flag = true;
          break;
        }
      } //FIM WHILE
      if(!flag) printf("%ld anos.\n",anos);
    } //FIM 
    return 0;
}
/*
#include<stdio.h>

int main(){
   
   long int i,T=1,PA,PB,ANOS=0,SEC=0,CA=0,CB=0;
   double G1,G2;
   scanf("%ld",&T);
   if(T>=1 || T<=3000){
      for(i=1;i<=T;i++){
         scanf("%ld %ld %lf %lf",&PA,&PB,&G1,&G2);
         
            while(PA<=PB){
               CA=(PA*(G1/100));
               CB=(PB*(G2/100));
               PA+=CA;
               PB+=CB;            
               ANOS++;
               if(ANOS>100){
                  SEC=1;
                  break;
               }         
            }
         
            if(SEC==0)
               printf("%ld anos.\n",ANOS);
            else{
               printf("Mais de 1 seculo.\n");
               SEC=0;
            }
            ANOS=0;
      }
   }  
   return 0;
   
}*/
