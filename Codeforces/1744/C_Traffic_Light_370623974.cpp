#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define int int

int idk(int i, const vector<int> &arr){
    int l = 0,r = arr.size()-1;
    int ans = 0;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(i<arr[mid]){
            r = mid-1;
            ans = arr[mid]-i;
        }
        else{
            l = mid+1;
        }
    }
    return ans; 
}

void solve(){
    
    int a;
    char b;
    cin>>a>>b;
    string c;
    cin>>c;

    std::vector<int> g;
    vector<int> t;
    vector<int> anss;
    for(int i = 0; i<a; i++){
        if(c[i]=='g'){
            g.pb(i);
        }
        else if(c[i] == b){
            t.pb(i);
        }
    }
    if(c.size()>1){
        g.pb((c.size())+g[0]);
    }
    if(b=='g'){
        cout<<0<<"\n";
    }
    else{
        for(auto i:t){
            // anss.pb(lower_bound(g.begin(), g.end(), i));
            int alr = *lower_bound(g.begin(), g.end(), i);
            anss.pb(alr-i);
        }
        cout<<*max_element(anss.begin(), anss.end())<<endl;
    }
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