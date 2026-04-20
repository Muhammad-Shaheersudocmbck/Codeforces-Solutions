#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define int long long

void solve(){
    
    int a,b;
    cin>>a>>b;
    int i = 0;
    
    while(b>=i){
        
        
        b-=i;
        if(i==a){
            i = 0;
        }
        i++;
    }

    cout<<b<<"\n";

}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin>>tc;
    while(tc--){
        solve();
    }
}