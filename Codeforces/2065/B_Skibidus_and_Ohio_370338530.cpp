#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pb push_back
const int MOD = 1e9+7;

void solve(){
    
    string a;
    cin>>a;
    for (int i = a.size()-1; i >0 ; i--)
    {
        if(a[i]==a[i-1]){
            cout<<1<<"\n";
            return;
        }
    }
    cout<<a.size()<<"\n";

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