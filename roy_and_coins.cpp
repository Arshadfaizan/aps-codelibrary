#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>

#include <ext/pb_ds/tree_policy.hpp>

using namespace std;


 

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define endl "\n"

#define Max(x,y,z) max(x,max(y,z))

#define Min(x,y,z) min(x,min(y,z))

#define fr(i,s,e) for(i=s;i<e;i++)

#define rf(i,s,e) for(i=s-1;i>=e;i--)

#define pb push_back

#define mp make_pair

#define F first

#define S second

#define mod 1000000007

typedef long long ll;

typedef unsigned int uint;

typedef unsigned long long ull;

typedef pair<int, int> pii;

typedef pair<long long, long long> pll;

typedef vector<int> vi;

typedef vector<long long> vll;

typedef vector<pair<long long,long long> > vpll;



 

#define PI 3.141592653589793

#define MOD 1000000007


 

int main()

{

    IOS;

    ll n;

    cin>>n;

    ll a[n+2]={0};

    ll m;

    cin>>m;

    while(m--)

    {

        ll x,y;

        cin>>x>>y;

        a[x]++;

        a[y+1]--;

        

    }

    ll b[n];

    for(ll i=1;i<=n;i++)

    {

        a[i]+=a[i-1];

        b[i-1]=a[i];

    }   

    sort(b,b+n);

    ll q;

    cin>>q;

    while(q--)

    {

        ll p;

        cin>>p;

        ll s=lower_bound(b,b+n,p)-&b[0];

        cout<<n-s<<endl;

    }

}
