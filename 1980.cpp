#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int vet[16];
	vet[0] = 1;
	vet[1] = 1;
	vet[2] = 2;
	vet[3] = 6;
	vet[4] = 24;
	vet[5] = 120;
	vet[6] = 720;
	vet[7] = 5040;
	vet[8] = 40320;
	vet[9] = 362880;
	vet[10] = 3628800;
	vet[11] = 39916800;
	vet[12] = 479001600;
	vet[13] = 6227020800;
	vet[14] = 87178291200;
	vet[15] = 1307674368000;
	
	string input;
	
	cin>>input;
	while(input != "0"){
		cout<<vet[input.size()]<<endl;
		cin>>input;
	}
	return 0;
}