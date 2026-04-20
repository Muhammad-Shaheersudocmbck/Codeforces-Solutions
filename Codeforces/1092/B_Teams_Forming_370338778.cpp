#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pb push_back
const int MOD = 1e9+7;

void solve(){
    
    int a;
    cin>>a;
    int op = 0;
    vector<int> el(a);
    for (int i = 0; i < a; ++i)
    {
        cin>>el[i];
    }

    sort(el.begin(), el.end());

    for (int i = 0; i < a-1; i+=2)
    {
        op = op+(el[i+1]-el[i]);
    }
    cout<<op<<"\n";

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