#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define int long long

void solve(){

    std::vector<int> v;
    for (int i = 0; i < 3; ++i)
    {
        int num;
        cin>>num;
        v.pb(num);
    }
    sort(v.begin(), v.end());
    cout<<v[1]<<"\n";
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin>>tc;
    while(tc--){
        solve();
    }
}