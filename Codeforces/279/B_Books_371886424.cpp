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
 
int idk(const std::vector<int> &v,int idx, int target){
    int l = idx, r = v.size()-1,ans = -1;
    while(l<=r){
        int mid = l+(r-l)/2;
        if((v[mid]-v[idx-1])<=target){
            l = mid+1;
            ans = mid;
        }
        else{
            r = mid-1;
        }
    }
    return ans;
}

int idk1(const std::vector<int> &v,int idx, int target){
    int l = idx, r = v.size()-1,ans = -1;
    while(l<=r){
        int mid = l+(r-l)/2;
        if((v[mid])<=target){
            l = mid+1;
            ans = mid;
        }
        else{
            r = mid-1;
        }
    }
    return ans;
}

void solve(){
    
    int a,b;
    cin>>a>>b;
    std::vector<int> v(a);
    for (int i = 0; i < a; ++i)
    {
        cin>>v[i];
    }

    vector<int> prefix = {v[0]};
    for (int i = 1; i < a; ++i)
    {
        prefix.pb(prefix[i-1]+v[i]);
    }

    int ans = idk1(prefix, 0, b)+1;
    // cout<<ans<<endl;
    for (int i = 1; i < a; ++i)
    {
    ans = max((idk(prefix, i, b)-i)+1, ans);
    // cout<<ans<<endl;

    }

    cout<<ans<<endl;

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