#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
 
int main() {
    int n,x,y,i,total;
    cin >> n; 
    while(n--){
      cin >> x >> y;
      total = 0;   
      for(i = 0; i < y; i++){
	if(x % 2 == 0){
	  x += 1; 
	} 
	total += x;
	x += 2; 
      }
      printf("%d\n",total); 
    }
    

    return 0;
}