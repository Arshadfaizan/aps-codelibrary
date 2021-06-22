#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
  ll tc;
  std::cin >> tc;
  while (tc--)
  {
  ll n;
      cin >> n;
      vector<pair<ll, ll>> x;
      vector<pair<ll, ll>> y;
      multiset<ll> X;
      multiset<ll> Y;
      ll lnp0 = 0;
      ll lnp1 = 0;
      ll lnmax = 0;
      ll lnmin = LONG_MAX;
      ll area = LONG_MAX;
      ll r0 = 0;
      ll r1 = 0;
      ll rmax = 0;
      ll rmin = LONG_MAX;
      for (ll i = 0; i < n; ++i)
      {
          ll a, b;
          std::cin>>a>>b;
          x.push_back({a, b});
          y.push_back({b, a});
          X.insert(a);
          Y.insert(b);
      }
      sort(x.begin(), x.end());
      sort(y.begin(), y.end());

      for (ll i = 0; i < n - 1; ++i)
      {
          rmax = max(rmax, y[i].second);
          rmin = min(rmin, y[i].second);
          r0 = rmax - rmin;
          auto it = X.find(y[i].second);
          X.erase(it);
          r1 = *X.rbegin() - *X.begin();
          ll Ar_new = (y[i].first - y[0].first) * r0 +
                        (y[n - 1].first - y[i + 1].first) * r1;
          area = min(area, Ar_new);
      }
      for (ll i = 0; i < n - 1; ++i)
      {

          lnmax = max(lnmax, x[i].second);
          lnmin = min(lnmin, x[i].second);
          lnp0 = lnmax - lnmin;
          auto it = Y.find(x[i].second);
          Y.erase(it);
          lnp1 = *Y.rbegin() - *Y.begin();
          ll Ar_new = (x[i].first - x[0].first) * lnp0 +
                        (x[n - 1].first - x[i + 1].first) * lnp1;
          area = min(area, Ar_new);
      }

      if (area== LONG_MAX)
          area = 0;
      std::cout << area << endl;
  }
	return 0;
}
