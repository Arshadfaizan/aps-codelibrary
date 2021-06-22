#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, sum = 0, x, q;
	vector <int> v;
	cin >> n;
	assert(n >= 1 && n <= 100000);
	for ( int i = 0; i < n; i++ ) {
		cin >> x;
		sum += x;
		v.push_back(sum);
		assert(x >= 1 && x <= 10);
	}
	assert(sum >= 1 && sum <= 1000000);
	cin >> q;
	assert(q >= 1 && q <= 100000);
	while ( q-- ) {
		cin >> x;
		assert(x >= 1 && x <= sum);
		int pos = lower_bound(v.begin(), v.end(), x) - v.begin();
		cout << pos + 1 << endl;
	}
	return 0;
}
