// Problem: A. Jellyfish and Undertale
// Contest: Codeforces - Codeforces Round 901 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1875/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pb push_back

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3","unroll-loops")
#pragma GCC target("avx,avx2,fma")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

void solve() {

	int a,b,c;
    cin>>a>>b>>c;
    vector<int> tools(c);
    int secs = 0;
    for (int i = 0; i < c; ++i)
    {
    	int num;
    	cin>>num;
        secs = secs +min(a-1,num);
    }
    
    cout<<secs+b<<"\n";

  

}
signed main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long tc = 1;
    cin >> tc;
    while (tc--){
        solve();
    }
    return 0;
}