#include <bits/stdc++.h>
#define ll long long;
using namespace std;
int ToCheckPowerofX(int n, int x)
{
	while (n > 0) {
		int rem = n % x;
		if (rem >= 2) {
			return 0;
		}
		n = n / x;
	}

	return 1;
}

int main()
{
	std::ios::sync_with_stdio(false);
            std::cin.tie(NULL);
            std::cout.tie(NULL);
	ll tc,N,X;
	std::Cin>>tc;
While(tc--)
{
		Cin>>N>>x;
		if (ToCheckPowerofX(N, X)) {
			std::cout << "Yes";
		}
		else {
			std::cout << "No";
		}
	}

	return 0;
}
