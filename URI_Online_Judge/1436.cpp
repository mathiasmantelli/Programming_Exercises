#include <bits/stdc++.h>

using namespace std;

int main(){
	int t,value;
	cin>>t;
	for(int k = 0; k < t;k++){
		cin>>value;
		float vet[value];
			
		for(int i = 0; i < value;i++){
			cin>>vet[i];
		}
		cout<<"Case "<<k+1<<": "<<vet[((value+1)/2)-1]<<endl;
	}
	
	return 0;	
}