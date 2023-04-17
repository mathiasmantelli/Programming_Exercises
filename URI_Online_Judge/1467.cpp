#include <iostream>

using namespace std; 

int main(){ 
	bool a,b,c; 
	while(cin >> a >> b >> c){ 
		if(a == b && a == c){
			cout<<"*"<<endl; 
		}else{
			if(a != b && a != c && b == c) cout<<"A"<<endl;
			if(b != a && b != c && a == c) cout<<"B"<<endl;
			if(c != b && c != a && b == a) cout<<"C"<<endl;
		}
	}
	return 0; 
}