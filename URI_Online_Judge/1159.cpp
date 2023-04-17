#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
 
int main() {
    int n,x,y,i,total;
    cin >> n; 
    while(n != 0){
      total = 0;   
      for(i = 0; i < 5; i++){
	if(n % 2 != 0){
	  n += 1; 
	} 
	total += n;
	n += 2; 
      }
      printf("%d\n",total); 
      cin >> n;
    }
    

    return 0;
}