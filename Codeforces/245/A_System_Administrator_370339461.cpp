#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pb push_back
const int MOD = 1e9+7;

std::vector<int> a2(2);
std::vector<int> b2(2);

void solve(){
    
    int a;
    cin>>a;
    for (int i = 0; i < a; ++i)
    {
        int a1,b1,c1;
        cin>>a1>>b1>>c1;
        if(a1==1){
            a2[0] = a2[0]+b1;
            a2[1] = a2[1]+c1;
        }
        else{
            b2[0] = b2[0]+b1;
            b2[1] = b2[1]+c1;
        }
    }
    if(a2[0]>=((a2[1]+a2[0])/2)){
        cout<<"LIVE\n";
    }
    else{
        cout<<"DEAD\n";
    }
    if(b2[0]>=((b2[1]+b2[0])/2)){
        cout<<"LIVE\n";
    }
    else{
        cout<<"DEAD\n";
    }
    

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