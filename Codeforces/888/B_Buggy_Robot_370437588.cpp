#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pb push_back
const int MOD = 1e9+7;

void solve(){
    
    int a;
    cin>>a;
    string b;
    cin>>b;
    int x = 0, y =0;
    int ans = 0;
    int l=0,r=0,u=0,d=0;
    for (int i = 0; i < a; ++i)
    {
        
        if(b[i]=='L') l++;
        else if (b[i] == 'R') r++;
        else if (b[i] == 'U') u++;
        else if (b[i] == 'D') d++;

    }
    ans = 2*min(l,r)+2*min(u,d);
    cout<<ans<<"\n";
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