#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pb push_back
const int MOD = 1e9+7;

std::vector<int> a2(2);
std::vector<int> b2(2);

void solve(){
    
    int a,b,c;
    cin>>a>>b>>c;

    int mins = (b*(b+1))/2;
    int maxs = 0;
    for (int i = a; i >(a-b); i--)
    {
        maxs+=i;
    }
    if(c<=maxs && c>=mins){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
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