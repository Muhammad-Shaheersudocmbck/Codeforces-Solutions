#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")
#pragma idGCC optimize("O3","unroll-loops")
#pragma GCC target("avx,avx2,fma")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

void solve(){
  
  long long n,c,k;
  cin>>n>>c>>k;
  vector<int> monsters(n);
  for (int i = 0; i < n; i++) {
    cin>>monsters[i];
  }
  sort(monsters.begin(),monsters.end());
  for (auto i : monsters) {
    if(i>c){
      break;
    }
    else{
      if(i<c && (c-i)<=k){
        long long x = c;
        c = c*2;
        k = k-(x-i);
      }
      else if(i<c && (c-i)>k){
        long long l = c;
        c = c+(k+i);
        k = 0;
      }
      else if (i==c){
        c = c*2;
      }
      else if(i<c){
        c = c+i;
      }
      }
    }
  cout<<c<<"\n";
  
}

int main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while (tc--){
        solve();
    }
    return 0;
}