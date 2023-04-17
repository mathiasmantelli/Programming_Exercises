#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k,num,ant,pico,vale;
	vector<int> sinais;
	cin>>n>>k;
	n--;
	cin>>num;
	ant = num;
	pico = vale = 0;
	while(n--){
		cin>>num;
		if(num > ant){
			sinais.push_back(1);
		}else{
			sinais.push_back(0);
		}
		ant = num;
	}
	for(int i = 0; i < sinais.size();i++){
		if(sinais[i] == 1 && sinais[i+1] == 0) pico++;
		if(sinais[i] == 0 && sinais[i+1] == 1) vale++;
	}
	if(pico == k && vale == k-1){
		cout<<"beautiful"<<endl;
	}else{
		cout<<"ugly"<<endl;
	}
	return 0;	
}