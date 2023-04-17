#include <bits/stdc++.h>
#include <sstream>

using namespace std;

int main(){
	long long int a,b;
	stringstream sttr;
	string sum;
	while(cin >> a && cin >> b && a && b){
		sttr << (a+b);
		sum = sttr.str();
				
		for(int i = 0; i <= sum.size();i++){
			if(sum[i] != '0'){
				cout<<sum[i];
			}
		}
		sttr.str("");
		sum.clear();
		cout<<endl;
		

		
	}
	return 0;
}