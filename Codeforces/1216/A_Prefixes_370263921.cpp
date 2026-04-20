#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pb push_back
const int MOD = 1e9+7;

void solve(){
    
    int a;
    cin>>a;
    string b;
    cin>>b;
    int op = 0;
    for (int i = 1; i < a; i+=2)
    {
        if(b[i]==b[i-1]){
            op++;
            if(b[i]=='a'){
                b[i] = 'b';
            }
            else{
                b[i] = 'a';
            }
        }

    }
    cout<<op<<"\n";
    cout<<b<<"\n";

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc = 1;
    // cin>>tc;
    while (tc--){
        solve();
    }
    return 0;
}

// Code all sorting algo
// (3 ops) heaps
// Heap Sort