#include<iostream>
#include <stdlib.h>
using namespace std; 

int main(){
	int T, n0, n1,n,b;
	while((cin >> T) && T != 0){
		n0 = n1 = 0;
		while(T--){
			cin >> b >> n; 
			if(b > n){
				n0++;
			}else{
				if(b < n) n1++;
			}
		}
		cout<<n0<<" "<<n1<<endl;
	}
	return 0; 
}