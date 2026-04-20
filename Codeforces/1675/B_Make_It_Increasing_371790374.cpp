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
    
  int a;
  cin>>a;
  int m = 0;
  bool res = false;
  std::vector<int> e(a);
  for (int i = 0; i < a; i++) {
    cin>>e[i];
  }
  for (int i = a-2; i >=0; i--) {
    // cout<<e[i]<<endl;
    
    while(e[i]>=e[i+1]){
      if(e[i]<=0){
        cout<<-1<<endl;
        res = true;
        break;
      }
      // cout<<e[i]/2<<endl;
      e[i] = e[i]/2;
      m++;
      // cout<<e[i]<<endl;
      
      
    }
    // cout<<e[i]<<endl;
    if (res){
      break;
    }
    
  }
  if(!res){
    cout<<m<<endl;
  }
    
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