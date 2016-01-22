#include <iostream>
#include <stdlib.h>

using namespace std; 

int main(){ 
	int n, time1, time2,tg1, tg2, p1, p2,dif1, dif2,ca1, ca2; 
	string c; 
	cin>>n; 
	while(n--){ 
		tg1 = tg2 = p1 = p2 = dif1 = dif2 = ca1 = ca2 = 0; 
		for(int i = 0; i < 2; i++){
			if(i == 0){
				cin >> time1;
				cin >> c;
				cin >>time2;
				ca2 = time2; 
			}else{
				cin >> time2;
				cin >> c;
				cin >>time1;
				ca1 = time1;
			}
			tg1 += time1; 
			tg2 += time2; 
			
			if(time1 > time2) p1 += 3; 
			if(time2 > time1) p2 += 3; 
			if(time1 == time2){
					p1 += 1; 
					p2 += 1; 
			}
			
		}
		if(p1 > p2)cout<<"Time 1"<<endl; 
		if(p2 > p1)cout<<"Time 2"<<endl;
		if(p1 == p2){
			dif1 = tg1 - tg2; 
			dif2 = tg2 - tg1; 
			if(dif1 > dif2) cout<<"Time 1"<<endl;
			if(dif2 > dif1) cout<<"Time 2"<<endl; 
			if(dif1 == dif2){
				if(ca1 > ca2) cout<<"Time 1"<<endl;
				if(ca2 > ca1) cout<<"Time 2"<<endl;
				if(ca1 == ca2) cout<<"Penaltis"<<endl;
			}
		}
	}
	return 0; 
}