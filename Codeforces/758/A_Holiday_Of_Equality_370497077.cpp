#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define int long long

void solve(){

    int a;
    cin>>a;
    int op = 0;
    std::vector<int> v(a);
    for (int i = 0; i < a; ++i)
    {
        cin>>v[i];
    }
    int maxx = *max_element(v.begin(), v.end());
    for (int i = 0; i < a; ++i)
    {
        

        op = op+(maxx-v[i]);
    }
    cout<<op<<"\n";

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