#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define int long long

void solve(){

    int a,b,c,d;
    int op = 0;
    cin>>a>>b>>c>>d;
    if(b>a){
        op++;
    }
    if(c>a){
        op++;
    }
    if(d>a){
        op++;
    }
    cout<<op<<"\n";
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