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

bool check(const vector<int> &arr,int mid,int maxval){

    __int128 ans = 0;
    for(auto i : arr){
        if((__int128)(mid-i)>0){
            ans= (__int128)(ans+(mid-i));
        }
    }
    if(ans<=maxval){
        return true;
    }
    else{
        return false;
    }

}

int idk(const vector<int> &arr, int num){

    int l = 0; int r = 2*1e18;
    int ans = -1;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(check(arr,mid,num)){
            ans = mid;
            l = mid+1;
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
    vector<int> v(a);
    for (int i = 0; i < a; ++i)
    {
        cin>>v[i];
    }
    sort(all(v));
    cout<<idk(v,b)<<endl;

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