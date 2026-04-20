#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pb push_back
const int MOD = 1e9+7;

void solve(){
    
    string a;
    cin>>a;
    int ones = count(a.begin(), a.end(), '1');
    int zeroes = count(a.begin(), a.end(), '0');
    if(min(ones, zeroes)%2==0){
        cout<<"nEt\n";
    }
    else{
        cout<<"dA\n";
    }

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc = 1;
    cin>>tc;
    while (tc--){
        solve();
    }
    return 0;
}