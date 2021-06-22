#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string st;
        int n,a=0,b=0,ct=0;
        cin>>n>>st;
        for(int i=0;i<n;i++)
        {
            if(st[i]=='0')
            {
                a+=1;
            }
            else{
                b+=1;
            }
            if(b>=a)
            {
                ct=1;
                break;
            }
        }
        if(ct==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
        
    }
    return 0;
}
