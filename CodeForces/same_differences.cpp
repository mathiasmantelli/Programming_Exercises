#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;
        map<ll,ll> mp;
        ll maxi = 0;
        for (ll i = 0; i < n; i++) {
            ll x;
            cin>>x;
            maxi += mp[x-i];
            mp[x-i]++;
        }
        cout<<maxi<<"\n";
    }
}
