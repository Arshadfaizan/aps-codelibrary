#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t,a,b,a1,b1,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>a1>>b1;
        x=a1/a;
        y=b1/b;
        cout<<x+y<<endl;
    }
	return 0;
}
