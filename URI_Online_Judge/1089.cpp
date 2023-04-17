#include<bits/stdc++.h>
using namespace std;

int vet[10005];


int modulo(int x1, int x2, bool sentido){
	if( x1 > x2 && sentido == 1) return 1;
	if( x1 > x2 && sentido == 0) return 0;
	if( x1 < x2 && sentido == 1) return 0;
	if( x1 < x2 && sentido == 0) return 1;
}

int main()
{
	int n,ans;
	bool sent;
	while(cin>>n && n){
		for(int i = 0; i < n; i++) cin>>vet[i];
		if(n == 2){
			cout<<"2"<<endl;
		}else{
			ans = 0;
			sent = (vet[1] > vet[0])? 1 : 0;
			for(int i = 2; i < n;i++){
				ans += modulo(vet[i-1],vet[i],sent);
				sent = (vet[i] > vet[i-1])? 1 : 0;
			}

			ans += modulo (vet[n-1],vet[0],sent);
			sent = (vet[n-1] > vet[0])? 0 : 1;
			ans += modulo (vet[0],vet[1],sent);
			cout<<ans<<endl;
		}
	}
    return 0;
}