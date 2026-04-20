#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define int long long

void solve(){
    
    string a = "codeforces";
    string b;
    int op = 0;
    cin>>b;
    for (int i = 0; i < 10; ++i)
    {
        if(a[i]!=b[i]){
            op++;
        }
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