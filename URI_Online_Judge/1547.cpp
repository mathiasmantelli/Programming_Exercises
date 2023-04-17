#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n,qt, s, valor, vet[10],i,menor,flag;
	cin>>n;
	while(n--){
		cin>>qt>>s;
		menor = 0;
		for(i = 0; i < qt;i++){
			cin>>valor;
			if(valor == s){
				cout<<i+1<<endl;
				break;
			}else{
				if(menor > fabs(valor - s)){
					menor = fabs(valor - s);
					flag = i + 1; 
				}
			}
		}
		cout<<i<<endl;
	}
	return 0; 	
}