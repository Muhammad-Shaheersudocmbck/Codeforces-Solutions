#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define int long long

void solve(){

    int a,b;
    cin>>a>>b;
    int fash = 0;
    int day = 0;
    while(min(a,b)!=0){
        a--;
        b--;
        fash++;
    }
    if(max(a,b)==a){
        while(a>0 and a-1 !=0){
            a-=2;
            day++;
        }
    }
    else{
        while(b>0 and b-1 !=0){
            b-=2;
            day++;
        }
    }
    cout<<fash<<" "<<day<<"\n";
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