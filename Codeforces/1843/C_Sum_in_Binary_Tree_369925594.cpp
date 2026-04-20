#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pb push_back
const int MOD = 1e9+7;

void solve(){
    
   int a;
   cin>>a;
   int sums = 0;
   while(a>=1){
    sums +=a;
    a = a/2;
    
   } 
   cout<<sums<<"\n";


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