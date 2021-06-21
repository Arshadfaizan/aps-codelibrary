#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define flash ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
int euler[4000002];int ans[4000002];
void pre()
{
    euler[0]=0;
    for(ll i=1;i<=4000001;i++)
    euler[i]=i;
    for(ll j=2;j<=4000001;j++)
    {
    if(euler[j]==j)
    {
        for(ll k=j;k<=4000001;k+=j)
        euler[k]-=euler[k]/j;
    }
    }
    for(ll j=1;j<=4000001;j++)
    {
        for(ll k=j;k<=4000001;k+=j)
        {
            ans[k]+=j*euler[k/j];
        }
    }
 
}
int main()
{
    pre();
    flash
    ll t;
    cin>>t;
    while(t--)
    {
     ll k=0;
     cin>>k;
     ll boom=ans[4*k+1]-1-4*k;
     boom=boom/2;
     boom-=ans[4*k+1];
     boom=boom*-1;
     boom--;
     cout<<boom<<"\n";
    }
}
