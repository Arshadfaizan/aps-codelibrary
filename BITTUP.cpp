#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
ll Bitwise_tupple(ll n,ll m)
{
    if(m==0)
        return 0;
    if(m==1)
        return n;
    if(m%2==0)
       {
        ll tp= Bitwise_tupple(n,m/2);
        return (tp*tp)%1000000007;
       }
    else
       {
        ll tp= Bitwise_tupple(n,((m-1)/2));
        return ((n*tp)%1000000007*tp)%1000000007;
       }
}
void solve()
{
    ll nt=0,n=0,m=0;
    cin>>n>>m;
    nt=Bitwise_tupple(2,n)-1;
    std::cout<<Bitwise_tupple(nt,m)<<endl;
 
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    ll t ;
    t = 1 ;
    std::cin>>t;
    while(t--)
        solve();
	return 0;
}
