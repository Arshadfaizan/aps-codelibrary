#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
 
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    ll tc;
    std::cin>>tc;
    while(tc--){
        ll n;
        std::cin>>n;
        string s;
        std::cin>>s;
        ll a_0=0,a_1=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='1'){
                a_1++;
            }
            else{
                a_0++;
            }
        }
        vector<ll> fat;
        for(ll i=1;i<=sqrt(n);i++){
            if(n%i==0){
                if(n/i==i){
                    fat.push_back(i);
                }
                else{
                    fat.push_back(n/i);
                    fat.push_back(i);
                }
            }
        }
        ll x = 1e9;
        for(auto fact:fat){
            vector<ll> ars(fact);
            for(ll i=0;i<fact;i++){
                for(ll j=i;j<n;j+=fact){
                    if(s[j]=='1'){
                        ars[i]++;
                    }
                }
            }
            ll out=n/fact;
            for(ll i=0;i<fact;i++){
                ll conv=out-ars[i];
                conv+=(a_1-ars[i]);
                x=min(x,conv);
            }
     
        }
        cout<<x<<endl;
        }
    }




