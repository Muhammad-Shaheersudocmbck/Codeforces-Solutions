#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define int long long

void solve(){

    string a;
    cin>>a;
    std::vector<int> ans;
    for (int i = 0; i < a.size(); ++i)
    {
        if(a[i]=='.'){
            ans.pb(0);
        }
        else if(a[i]=='-' && a[i+1]=='.'){
            ans.pb(1);
            i+=1;
        }
        else{
            ans.pb(2);
            i+=1;
        }
    }
    for(auto i:ans){
        cout<<i;
    }
    cout<<"\n";

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