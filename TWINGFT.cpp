#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--)
    {
      long long n,k;
      cin>>n>>k;
      long long a[n];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
       }
      sort(a+0,a+n,greater<>());
      long long int q=0,p=0,s1=0,s2=0,d=0;;
      for(int i=0;i<n;i++){
        if(q<k){
            s1+=a[2*i];
            q++;
            }if(p<=k){
                if(p<k-1){
                    s2+=a[2*i+1];
                }if(p==k-1){
                    s2+=a[2*i+1]+a[2*i+2];
                    break;

                }
                p++;

            }
        }
            d=max(s1,s2);
            cout<<d<<endl;

    }
    return 0;
}
