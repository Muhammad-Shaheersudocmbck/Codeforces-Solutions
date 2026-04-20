#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define int long long

int a,b;

bool good(int mid){
    
    if(((((__int128)mid*((__int128)mid+1))/2)-b)<a){
        return true;
    }
    else{
        return false;
    }

}

__int128 idk(){
    int l = 0, r = 1e18;
    __int128 ans = 0;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(good(mid)){
            l = mid+1;
            ans = ((((__int128)mid*((__int128)mid+1))/2)-b);
        }
        else{
            r = mid-1;
        }
    }
    return ans;
}

void print(__int128 x) {
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    if (x > 9) print(x / 10);
    putchar(x % 10 + '0');
}
void solve(){

    cin>>a>>b;
    __int128 anss = idk();
    print(anss);
    putchar('\n');

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