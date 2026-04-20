#include <bits/stdc++.h>
using namespace std;

// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("O3","unroll-loops")
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

void solve(){
 	
	int a;
    cin>>a;
    vector<int> in(a);
    vector<int> ans(a);
    for (int i = 0; i < a; ++i)
    {
        cin>>in[i];
    }

    auto minmax = minmax_element(in.begin(),in.end());
    int sumneed = *minmax.first+*minmax.second;

    for (int i = 0; i < a; ++i)
    {
        ans[i] = sumneed-in[i];
    }
    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<"\n";

}

int main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long tc = 1;
    cin >> tc;
    while (tc--){
        solve();
    }
    return 0;
}