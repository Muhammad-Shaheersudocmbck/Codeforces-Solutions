#include <bits/stdc++.h>
using namespace std;

void solve() {
  
  int a;
  cin>>a;
  vector<int> el(a);
  for (int i = 0; i < a; i++) {
    cin>>el[i];
  }
  bool OMG = true;
  sort(el.begin(),el.end(),greater<int>());
  int first = el[0];
  for (int i = 1; i < a; ++i) {
        if (el[i] != first) {
            OMG =  false;
        }
  }
  if (OMG){
    cout<<"NO"<<endl;
  }
  else{
    cout<<"YES"<<endl;
    for (int i = 1; i < a; i++) {
      if(accumulate(el.begin(),el.begin()+i,0)==el[i]){
        swap(el[i],el[a-1]);
      }
    }
    for (auto j : el) {
      cout<<j<<" ";
    }
    cout<<endl;
    
  }
  
  
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
