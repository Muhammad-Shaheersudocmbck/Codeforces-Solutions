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
 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3","unroll-loops")
#pragma GCC target("avx,avx2,fma")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
 
#define pb push_back
#define ll long long
#define int ll
#define all(x) x.begin(), x.end()
#define endl '\n'
#define print(a) for(auto &i:a){cout << i << ' ';} cout << endl;
 
void solve(){
    
  int a,b;
  cin>>a>>b;
  vector<int> anss;
  // int m = 0;
  std::vector<int>e(a);
  for (int i = 0; i < a; i++) {
    cin>>e[i];
  }
  sort(e.begin(), e.end());
  int ans = 1;
  for (int i = 0; i < a-1; i++) {
    if(abs(e[i]-e[i+1])<=b){
      ans++;
    }
    else{
      anss.pb(ans);
      ans = 1;
    }
  }
  anss.pb(ans);
  cout<<a-*max_element(all(anss))<<endl;
    
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