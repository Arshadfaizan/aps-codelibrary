#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define max 100000
void sr( long long int n ,long long int m)
{
    long long int a[n] , a1[m];
    int i=0,j=0,k=0;
    for (i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
        cin>>a1[i];
    vector<int>arr(n);
    arr[0] = 0 ;
    int beg=-1,end=-1;
    for(i=1;i<n;i++){
       if(a[i]!=0)
        arr[i]=0;
       else
        arr[i]=max;
   }
   for(i=0;i<n;i++)
   {
       if(a[i]==1)
           end=i;
       if(end!=-1)
       {
           if(a[i]==0)
            arr[i]=min(arr[i],i-end);
       }
   }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==2)
            beg=i;
        if(beg!=-1)
        {
            if(a[i]==0)
                arr[i] =min(arr[i],beg-i);
        }
    }
    for(i=0;i<m;i++)
    {
        j=a1[i]-1;
        if(arr[j]!=max)
            cout<<arr[j]<<" ";
        else
            cout<<-1<<" ";
    }
   
}
int main()
{

	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	long long int TC,n,m,a; 
	std::cin>>TC;
    while (TC--)
    {
        std::cin>>n>>m;
        sr(n,m);
        std::cout<<endl;
    }

}
