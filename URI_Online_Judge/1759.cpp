#include <iostream>

using namespace std; 

int main(){ 
	long long int t,i; 
	cin >> t; 
	for(i = 0; i < t; i++){ 
		if(i == t - 1){ 
			cout<<"Ho!"<<endl; 
		}else{
			cout<<"Ho "; 
		}
	}
	return 0; 	
}