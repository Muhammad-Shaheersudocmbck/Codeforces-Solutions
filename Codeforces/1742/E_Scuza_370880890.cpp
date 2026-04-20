#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define int ll
#define all(x) x.begin(), x.end()
#define endl '\n'

void solve(){
    int a, b;
    cin >> a >> b;
    
    std::vector<int> steps(a);
    for (int i = 0; i < a; i++) {
        cin >> steps[i];
    }
    std::vector<int> pref = {steps[0]}; 
    vector<int> el; 
    el.pb(steps[0]);   
    for (int i = 1; i < a; ++i) {
        pref.pb(pref[i - 1] + steps[i]);
        el.pb(max(steps[i], el[i-1]));
    }
   
    // for(int i:el){cout<<i<<" ";}
    // cout<<endl;
    // for(int i:pref){cout<<i<<" ";} cout<<endl;


    for (int i = 0; i < b; ++i) {
        int num;
        cin >> num;
        
        int l = 0; int r = el.size()-1;int ans = -1;
        while(l<=r){
            int mid = l+((r-l)/2);
            if(el[mid]<=num){
                ans = mid;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }

        if(ans==-1){
            cout<<0<<" ";
        }
        else{
            cout<<pref[ans]<<" ";
        }
    }
    cout<<endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin>>tc;
    while(tc--){
        solve();
    }
}