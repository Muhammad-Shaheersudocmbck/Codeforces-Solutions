/*
 
███████╗██╗  ██╗ █████╗ ██╗  ██╗███████╗███████╗██████╗ 
██╔════╝██║  ██║██╔══██╗██║  ██║██╔════╝██╔════╝██╔══██╗
███████╗███████║███████║███████║█████╗  █████╗  ██████╔╝
╚════██║██╔══██║██╔══██║██╔══██║██╔══╝  ██╔══╝  ██╔══██╗
███████║██║  ██║██║  ██║██║  ██║███████╗███████╗██║  ██║
╚══════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚══════╝╚══════╝╚═╝  ╚═╝
                                                                   
*/
 
#include <bits/stdc++.h>
using namespace std;
 
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("O3","unroll-loops")=
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
 
#define pb push_back
#define ll long long
#define int ll
#define all(x) x.begin(), x.end()
#define endl '\n'
#define print(a) for(auto &i:a){cout << i << ' ';} cout << endl;
 
void solve(){
    
    int a;cin>>a;
    vector<int> v(a);
    vector<int> odd;
    vector<int> even;
    int oddsum = 0;
    int evensum = 0;
    int odds = 0;int evens = 0;
    for (int i = 0; i < a; i++) {
        cin>>v[i];
        if(v[i]%2!=0){
            odds++;
            odd.pb(v[i]);
            oddsum += v[i];
        }
        else{
            evens++;
            even.pb(v[i]);
            evensum+=v[i];
        }
    }
    sort(all(odd));
    vector<long long> prefix;
    if(odd.size()>0){
        prefix = {odd[0]};
        for(int i = 1; i < odd.size(); i++) prefix.pb(prefix[i-1] + odd[i]);
        }// for (auto &x : prefix) {
    //     cout<<x<<endl;
    // }
    if(odds%2!=0){
        cout<<oddsum+evensum<<endl;
    }
    else if(odds==0){
        cout<<0<<endl;
    }
    else{
        cout<<evensum+(prefix[prefix.size()-1]-prefix[0])<<endl;
    }

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