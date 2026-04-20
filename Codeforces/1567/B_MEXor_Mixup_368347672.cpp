#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int a,b;
    cin>>a>>b;
    vector<int> el;
    int ans = 0;
    int xors = 0;
    
    if ((a-1) % 4 == 0) {
        xors =  a-1;
    } else if ((a-1) % 4 == 1) {
        xors =  1;
    } else if ((a-1) % 4 == 2) {
        xors =  (a-1) + 1;
    } else {
        xors =  0;
    }


    ans = a;
    if (xors == b) {
      
        cout << ans  << endl; 
    } else {

        if ((xors ^ b)  != a) {
            cout << ans + 1 << endl; 
        } else {
            cout << ans + 2 << endl; 
        }
    }
    
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