#include <bits/stdc++.h>

using namespace std;

int main(){
	int first[5],second[5];
	bool flag;
	for(int i = 0; i < 5; i++) cin>>first[i];
	flag = false;
	for(int i = 0; i < 5; i++){
		cin>>second[i];
		if(first[i] == 1 && second[i] == 1 || first[i] == 0 && second[i] == 0) flag = true;
	}	
	if(flag){
		cout<<"N"<<endl;
	}else{
		cout<<"Y"<<endl;
	}
	
	return 0;	
}