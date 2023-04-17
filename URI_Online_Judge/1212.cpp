#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ans = 0;
    string a, b;
 
    while(cin>>a>>b){
			
			if(a == "0" && b == "0") break;
		
			ans = 0;
			int lenMax = max(a.size(), b.size());	
			int lenMin = min(a.size(), b.size());	
		
			if(a.size() < b.size()) swap(a, b);
				
			for(int i = 0; i < (lenMax - lenMin);i++) b = '0' + b;
		
			int carry = 0, d1, d2;
		
			for(int i = lenMax - 1; i >= 0; i--){
				d1 = a[i] - '0';
				d2 = b[i] - '0';
				
				if(d1 + d2 + carry > 9){
					ans++;
					carry = 1;
				}else carry = 0;
			}
		
			 
			 if(ans == 0) printf("No carry operation.\n");
			 if(ans == 1) printf("1 carry operation.\n");
			 if(ans > 1) printf("%d carry operations.\n", ans);
    }
	
    return 0;
}