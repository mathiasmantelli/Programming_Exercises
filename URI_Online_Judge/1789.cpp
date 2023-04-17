#include <iostream>

using namespace std; 

int main(){
	int n,t,maior; 
	while(cin >> n){ 
		maior = 0; 
		while(n--){
			cin >> t; 
			if(t > maior) maior = t; 
		}
		if(maior < 10) cout<<"1"<<endl; 
		if(maior >= 10 && maior < 20) cout<<"2"<<endl; 
		if(maior >= 20) cout<<"3"<<endl; 
	}
	return 0; 
}