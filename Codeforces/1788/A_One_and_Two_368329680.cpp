#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a;
    cin >> a;
    vector<int> el(a);
    for (int i = 0; i < a; i++) {
        cin >> el[i];
    }

    int counts = count(el.begin(),el.end(),2);
    if (counts%2!=0){
        cout<<-1<<"\n";
    }
    else{
        int need = counts/2;
        int got = 0;
        
        for(int i=0;i<a-1;i++){
          if (el[i]==2) got++;
          if (got==need){
              cout << i+1 << "\n";
              return;
          }
          
        }

           
        
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
