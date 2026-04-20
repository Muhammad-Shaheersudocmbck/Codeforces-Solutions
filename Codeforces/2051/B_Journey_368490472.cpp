#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3","unroll-loops")
#pragma GCC target("avx,avx2,fma")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

void solve(){
  
  int n,a,b,c;
  cin>>n>>a>>b>>c;
  int l = a+b+c;
  int x = n%l;
  int days = (int)(n/l)*3;
  int travelled = 0;
  if(x>0){
    while (travelled<x){
      if(days%3==0){
        travelled = travelled+a;
      
    }
    else if (days%3==1){
      travelled = travelled +b;
    }
    else{
      travelled = travelled+c;
    }
    days++;
  }

}
cout<<days<<endl;
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