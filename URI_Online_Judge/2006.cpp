#include <bits/stdc++.h>

using namespace std;

int main(){
	int t,aux,total;
	cin>>t; 
	total = 0;
	for(int i = 0; i < 5; i++){
		cin>>aux;
		(aux==t)?total++:aux--;
	}
	cout<<total<<endl;
	return 0;	
}