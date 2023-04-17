#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n != 0){
		int vet[n],time;
		
		for(int i = 0; i < n; i++)cin>>vet[i];
		if(n > 1){
			time = 10;
			for(int i = 1; i < n; i++){
				if(vet[i] < vet[i-1]+10){
					time += ((vet[i]+10) - (vet[i-1]+10));
				}else{
					time += 10;		
				}
			}//END-FOR
			cout<<time<<endl;
		}else{
			cout<<"10"<<endl;
		}
		cin>>n;	
	}//END-WHILE
	
	return 0;
	
}