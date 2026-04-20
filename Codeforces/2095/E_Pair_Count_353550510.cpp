#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int a[300005];
 
ll power(ll x, int n, int p) {
	x %= p;
	ll res = 1;
	while (n) {
		if (n&1)res = (res*x)%p;
		x = (x*x)%p;
		n >>= 1;
	}
	return res;
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, p, k;
	cin >> n >> p >> k;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	if (k == 0) {
		cout << (*min_element(a+1,a+n+1) == 0 ? n-1 : 0) << '\n';
		return 0;
	}
	map<int,int> mp;
	ll ans = 0;
	for (int i = 1; i <= n; ++i) {
		if (a[i] == 0)continue;
		int x = power(a[i],3,p);
		int inv = power(x,p-2,p);
		ans += mp[(k*(ll)inv)%p];
		++mp[x];
	}
	cout << ans << '\n';
	return 0;
}