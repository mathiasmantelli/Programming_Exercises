#include <iostream>
#include <string>

using namespace std;

int main(){
	string frase,vet[200];
	vet[45]="0";//-
	vet[48]="9";//0
	vet[49]="`";//1
	vet[50]="1";//2
	vet[51]="2";//3
	vet[52]="3";//4
	vet[53]="4";//5
	vet[54]="5";//6
	vet[55]="6";//7
	vet[56]="7";//8
	vet[57]="8";//9
	vet[61]="-";//=
	
	
	
	getline(cin,frase);
	for(int i = 0; i < frase.length();i++){
		cout<<(int)frase[i]<<" ";
	}
	cout<<endl;
	
	
	return 0;
}