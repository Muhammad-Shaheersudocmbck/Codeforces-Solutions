#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pb push_back
const int MOD = 1e9+7;

void solve(){
    
    int a,b,c;
    cin>>a>>b>>c;
    std::vector<int> v(a);
    for (int i = 0; i < a; ++i)
    {
        cin>>v[i];
    }

    sort(v.begin(), v.end());
    cout<<abs(v[c-1]- v[c])<<"\n";

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc = 1;
    // cin>>tc;
    while (tc--){
        solve();
    }
    return 0;
}

// Code all sorting algo
// (3 ops) heaps
// Heap Sort