#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a; 
    cin >> a;
    int ans = 0;
    
    for (int length = 1; length <= 10; ++length) {  
        for (int digit = 1; digit <= 9; ++digit) {  
            long long val = digit;
            for (int i = 1; i < length; ++i) val *= 10; 
            
            if (val <= a) ans++;
        }
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--) solve();

    return 0;
}
