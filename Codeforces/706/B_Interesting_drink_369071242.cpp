#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define pb push_back

// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("O3","unroll-loops")
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

bool goodboy(int shop, int coins){
    if (coins>=shop){
        return true;
    }
    else{
        return false;
    }
}

int idk(const vector<int> &shops,int coins){
    int l = 0;int r = shops.size()-1;
    int ans = -1;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(goodboy(shops[mid],coins)){
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
 	
	int a;
    cin>>a;
    vector<int> shops(a);
    for (int i = 0; i < a; ++i)
    {
        cin>>shops[i];
    }
    sort(shops.begin(),shops.end());
    int b;
    cin>>b;
    for (int i = 0; i < b; ++i)
    {
        int num;
        cin>>num;
        cout<<idk(shops, num)+1<<"\n";
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