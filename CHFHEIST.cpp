#include<bits/stdc++.h>
using namespace std;
long long int solve(int D,int d,int p,int q)
{
	/*int sum=0;
	sum=((d/2)*(2*q+(d-1)*q));
	cout<<sum+p;*/
	long long int sum=0,k=1,a;
    a=D/d;
    sum=d*(a*p+q*(a*(a-1)/2));
    sum=sum+(D%d)*(p+a*q);
    return sum;
        
    //return sum;
	//sum=sum+(D-z)*(q*k)+p;
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	long long int TC,D,d,p,q,a; 
	std::cin>>TC;
    while (TC--)
    {
        std::cin>>D>>d>>p>>q;
        a=solve(D,d,p,q);
        std::cout<<a<<endl;
    }

}
