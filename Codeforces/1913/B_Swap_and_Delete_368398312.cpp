#include <bits/stdc++.h>
using namespace std;

void solve(){
    
  string a;
  cin>>a;
  int ones = 0;
  int zeroes = 0;

  for (int i = 0; i < a.size(); i++) {
    if (a[i] == '0') zeroes++;
    else ones++;
  }

  int used = 0;

  for (int i = 0; i < a.size(); i++) {
    if (a[i] =='1' && zeroes>0){
      zeroes--;
      used++;
    }
    else if (a[i] == '0' && ones>0){
      ones--;
      used++;
    }
    else{
      cout << a.size() - used << endl;
      return;
    }
  }

  cout << 0 << endl;
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