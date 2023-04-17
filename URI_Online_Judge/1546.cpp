#include <iostream>

using namespace std;

int main(){
	int n, k, valor; 
	cin>>n; 
	while(n--){
		cin>>k;
		while(k--){
			cin>>valor;
			if(valor == 1)cout<<"Rolien"<<endl;
			if(valor == 2)cout<<"Naej"<<endl;
			if(valor == 3)cout<<"Elehcim"<<endl;
			if(valor == 4)cout<<"Odranoel"<<endl;
		}
	}
	return 0; 	
}