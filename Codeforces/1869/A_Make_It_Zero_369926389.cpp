#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pb push_back
const int MOD = 1e9+7;

void solve(){
    
   int a;
   cin>>a;
   vector<int> el(a);
   for (int i = 0; i < a; ++i)
   {
       cin>>el[i];
   }

    if(a%2==0){
        cout<<2<<"\n";
        cout<<1<<" "<<a<<"\n";
        cout<<1<<" "<<a<<"\n";
    }   
    else{
        cout<<4<<"\n";
        cout<<1<<" "<<a-1<<"\n";
        cout<<1<<" "<<a-1<<"\n";
        cout<<a-1<<" "<<a<<"\n";
        cout<<a-1<<" "<<a<<"\n";
    }


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