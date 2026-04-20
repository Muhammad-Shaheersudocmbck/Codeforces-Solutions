#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pb push_back
const int MOD = 1e9+7;

void solve(){
    
    int a,b;
    cin>>a>>b;
    std::vector<int> v;
    for (int i = 0; i < b; ++i)
    {
        int num;
        cin>>num;
        v.pb(num%a);
        if(count(v.begin(), v.end(), v[v.size()-1])>1 ){
            cout<<i+1<<"\n";
            return;
        }
    }
    cout<<-1<<"\n";

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