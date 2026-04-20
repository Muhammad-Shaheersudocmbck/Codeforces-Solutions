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
// #pragma GCC optimize("O3","unroll-loops")
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#define pb push_back
#define ll long long
#define int ll
#define all(x) x.begin(), x.end()
#define endl '\n'
#define print(a) for(auto &i:a){cout << i << ' ';} cout << endl;

int room(const vector<int> &arr, int num, int q){
    if(num==0){
        return q;
    }
    else{
        return q-arr[num-1];
    }
}

int idk(const vector<int> &v, int num){
    int l = 0, r = v.size()-1;
    int ans = -1;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(v[mid]>=num){
            ans = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return ans;
}

void solve(){
    
    int a,b;
    cin>>a>>b;
    std::vector<int> v(a);
    std::vector<int> vb(b);
    vector<int> x;
    vector<int> y;
    for (int i = 0; i < a; ++i)
    {
        cin>>v[i];
    }
    
    std::vector<int> prefix = {v[0]};
    for (int i = 1; i < a; ++i)
    {
        prefix.pb(prefix[i-1]+v[i]);
    }

    for (int i = 0; i < b; ++i)
    {
        int num;
        cin>>num;
        int a = idk(prefix, num);
        x.pb(a+1);
        y.pb(room(prefix,a,num));

    }
    for (int i = 0; i < x.size(); ++i)
    {
        cout<<x[i]<<" "<<y[i]<<endl;
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