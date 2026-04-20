#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pb push_back
const int MOD = 1e9+7;
int w,b;
bool goodboy(__int128 val){
    __int128 vals = ((val*(val+1))/2);
    // cout<<vals<<" "<<w+b<<"\n";
    return vals<=(w+b);
}

int idk(){
    int l = 1,r = 1e9;
    int ans = 0;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(goodboy((__int128)mid)){
            // cout<<"FOUND "<<mid<<"\n";
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

    cin>>w>>b;
    cout<<idk()<<"\n";

}

signed main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long tc = 1;
    cin>>tc;
    cin.ignore();
    while (tc--){
        solve();
    }
    return 0;
}