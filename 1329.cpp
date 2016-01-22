#include<iostream>
#include <stdlib.h>
using namespace std; 

int main(){
	int T, n0, n1,n;
	while((cin >> T) && T != 0){ 
		n0 = n1 = 0;
		while(T--){
			cin >> n; 
			(n) ? n1++ : n0++;
		}
		cout<<"Mary won "<<n0<<" times and John won "<<n1<<" times"<<endl;
	}
	return 0; 
}