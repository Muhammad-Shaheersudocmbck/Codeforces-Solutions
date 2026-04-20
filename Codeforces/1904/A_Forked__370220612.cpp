#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pb push_back
const int MOD = 1e9+7;

void solve(){
    int a,b,c,d,e,f;
    cin>>a>>b;
    cin>>c>>d;
    cin>>e>>f;

    set<pair<int, int>> queen;
    set<pair<int, int>> king;

    queen.insert({e+a,f+b});
    queen.insert({e+b,f+a});
    queen.insert({e-a,f-b});
    queen.insert({e-b,f-a});
    queen.insert({e+a,f-b});
    queen.insert({e+b,f-a}); 
    queen.insert({e-a,f+b});
    queen.insert({e-b,f+a});

    king.insert({c+a,d+b});
    king.insert({c+b,d+a});
    king.insert({c-a,d-b});
    king.insert({c-b,d-a});
    king.insert({c+a,d-b});
    king.insert({c+b,d-a}); 
    king.insert({c-a,d+b});
    king.insert({c-b,d+a});

    int cnt = 0;
    for(auto x : queen){
        if(king.count(x)) cnt++;
    }

    cout<<cnt<<"\n";
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