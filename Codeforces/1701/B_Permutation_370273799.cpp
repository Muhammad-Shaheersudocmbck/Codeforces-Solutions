#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pb push_back
const int MOD = 1e9+7;

void solve(){
    
    int a;
    cin>>a;

    vector<int> v;
    vector<int> vis(a+1, 0);

    cout<<2<<"\n";
    for (int i = 1; i <= a; ++i)
    {   
        if(vis[i]) continue; 

        int x = i;
        while(x <= a){
            v.pb(x);
            vis[x] = 1;
            x *= 2;
        }
    }

    for(auto i :v){
        cout<<i<<" ";
    }
    cout<<endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc = 1;
    cin>>tc;
    while (tc--){
        solve();
    }
    return 0;
}