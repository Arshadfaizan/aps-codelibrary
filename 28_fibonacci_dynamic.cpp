#include<iostream>
using namespace std;
 
int fibonacci(int n)
{
    int F[n+1];
 
    F[0]=0;
    F[1]=1;
 
    for(int i=2;i<=n;i++)
        F[i]=F[i-1]+F[i-2];
 
    return F[n];
}
 
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
 
    cout<<"Required fibonacci number is ";
    cout<<fibonacci(n);
 
    cout<<endl;
    return 0;
}
