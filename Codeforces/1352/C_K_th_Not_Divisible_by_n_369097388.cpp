#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pb push_back

// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("O3","unroll-loops")
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

bool goodboy(int n,int mid, int k){
    int OK= (((int)(mid/n))*(n-1))+(mid-(((int)(mid/n))*n));
    if (OK>= k && (mid%n)!=0){
        return true;
    }
    else{
        return false;
    }
}

int idk(int n, int k){
    int l = 1;int r = 1e18;
    int ans = 0;
    while(l<r){
        int mid = l+(r-l)/2;
        if (mid-mid/n == k and mid%n != 0) {
            ans = mid;
            break;
        } else if (mid-mid/n < k) {
            l = mid+1;
        } else {
            r = mid;
        }
    }
    return ans;
}


void solve() {

	int a,b;
    cin>>a>>b;
    cout<<idk(a,b)<<"\n";
    
}
signed main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long tc = 1;
    cin >> tc;
    while (tc--){
        solve();
    }
    return 0;
}