#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define pb push_back

// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("O3","unroll-loops")
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

int idk(const vector<int> &piles,int juicyworm){
    int l = 0;int r = piles.size()-1;
    int ans = 0;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(piles[mid]>=juicyworm){
            r = mid-1;
            ans = mid;
        }
        else{
            l = mid+1;
        }
    }
    return ans;
}

vector<int> ps(const vector<int> &arr){
    int a = arr.size();
    vector<int> pss = {arr[0]};
    for (int i = 1; i < a; i++)
    {
        pss.pb(arr[i]+pss[i-1]);
    }
    return pss;
}

void solve(){
 	
	int a;
    cin>>a;
    vector<int> piles(a);
    for (int i = 0; i < a; ++i)
    {
        cin>>piles[i];
    }
    piles = ps(piles);
    int b;
    cin>>b;
    for (int i = 0; i < b; ++i)
    {
        int num;
        cin>>num;
        cout<<idk(piles, num)+1<<"\n";
    }
}

signed main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long tc = 1;
    // cin >> tc;
    while (tc--){
        solve();
    }
    return 0;
}