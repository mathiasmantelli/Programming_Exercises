#include <iostream>
#include <math.h>

using namespace std; 

int main(){
	int n;
	long long int b;
	bool flag; 
	cin>>n;
	while(n--){
		cin>>b;
		flag = true;
		if((b%2) == 0 && b != 2){
			flag = false;
		}else{
			for(int i = 2; i < (int)sqrt(b);i++){
				if(b%i == 0){
					flag = false;
					break;
				}
			}
		}
	(flag) ? cout<<"Prime"<<endl:cout<<"Not Prime"<<endl;
	}
	return 0; 	
}