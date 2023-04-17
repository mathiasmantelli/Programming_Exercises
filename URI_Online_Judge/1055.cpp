#include <bits/stdc++.h>
#define MAX 55
using namespace std;

int num[MAX];

int main(){
	int n,quant,soma,soma2,meio,fim,comeco,cas,fim2,comeco2;
	bool flag;
	cin>>n;
	cas = 1;
	while(n--){
		vector<int> vtr,vtr2;
		cin>>quant;
		meio = (quant % 2 == 0)? floor(quant/2) - 1:floor(quant/2) + 1;
		for(int i = 0; i < quant; i++) cin>>num[i];
		sort(num,num+quant);
		
		
		if(quant % 2 == 0){
			int j = 1;
			for(int i = meio; i >= 0; i--){
				vtr.push_back(num[i]);
				vtr.push_back(num[quant - j]);
				j++;
			}
		}else{
			vtr.push_back(num[0]);//INSERINDO O MAIOR NO MEIO
			vtr.push_back(num[quant-1]);
			vtr.push_back(num[1]);
			
			comeco = 2;
			fim = quant - 2;
			flag = true; //BEGING BY THE LEFT
						  
			while(fim >= comeco){
				if(flag){
					vtr.insert(vtr.begin(),num[fim--]);
					vtr.insert(vtr.begin(),num[comeco++]);
					
					flag = false;
				}else{
					vtr.push_back(num[fim--]);
					vtr.push_back(num[comeco++]);

					flag = true;
				}
			}
		
			vtr2.push_back(num[quant-1]);
			vtr2.push_back(num[0]);
			vtr2.push_back(num[quant-2]);

			comeco2 = 1;
			fim2 = quant - 3;
			flag = true;

			while(fim2 >= comeco2){
				if(flag){					
					vtr2.insert(vtr2.begin(),num[comeco2++]);
					vtr2.insert(vtr2.begin(),num[fim2--]);

					flag = false;
				}else{
					vtr2.push_back(num[comeco2++]);
					vtr2.push_back(num[fim2--]);

					flag = true;
				}
			}
		}
		soma = soma2 = 0;
		for(int i = 1; i < quant;i++){
			soma += abs(vtr[i] - vtr[i-1]);
			if(quant%2 != 0) soma2 += abs(vtr2[i] - vtr2[i-1]);
			
		}

		cout<<"Case "<<cas<<": "<<max(soma,soma2)<<endl;
		cas++;
	}//FIM-WHILE
	return 0; 
}