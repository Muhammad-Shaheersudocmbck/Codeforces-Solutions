#include <bits/stdc++.h>
using namespace std;

void solve(){
  int a;
  int duped = 0;
  cin>>a;
  std::vector<int> v(a);
  int maxs = 0;
  int ans = 0;
  unordered_map <int, int> f;
  for (int i = 0; i < a; i++) {
    int num;
    cin>>num;
    f[num]++;
    v[i]=num;
  }
  
  for (auto& [key,val]: f) {
    maxs = max(maxs,val);
  }
  
  if(maxs==a){
    cout<<0<<endl;
  }
  else{
    while(maxs<a){
      ans++;
      // cout<<maxs<<" "<<maxs*2<<endl;
      if(maxs*2<=a){  
        // duped++;
        
        ans+=maxs;
        maxs = maxs*2;
        
      }
      else{
        ans+= a-maxs;
        // ans++;
        maxs = a;
      }
    }
    cout<<ans<<endl;
  }
  
}

int main(){
  int tc = 1;
  cin>>tc;
  while(tc--){
    solve();
  }
}