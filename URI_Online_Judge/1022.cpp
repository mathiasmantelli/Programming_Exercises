#include <iostream>
#include <string.h>

using namespace std; 

int main(){ 
	int n, N1, D1, N2, D2,cont; 
	double NR,DR,NF,DF; 
	string c1, c2, teste("+"); 
	bool flag; 
	cin >> n; 
	while(n--){ 
		
		cont = 0; 
		flag = false;
		cin >> N1 >> c1 >> D1 >> c2 >> N2 >> c1 >> D2; 
		if(c2 == teste){
			NR = (N1 * D2 + N2 * D1);
			DR = (D1*D2);
			while(cont <= NR && cont <= DR){
				if(((int)NR%cont == 0) && ((int)DR%cont == 0)){
					NF = NR/cont; 
					DF = DR/cont;
					flag = true;
				}
				cont++;
			}
			if(flag){
				cout<<NR<<"/"<<DR<<" = "<<NF<<"/"<<DF<<endl;
			}else{
				cout<<NR<<"/"<<DR<<" = "<<NR<<"/"<<DR<<endl;
			}
		}
			
	}
	return 0; 
}