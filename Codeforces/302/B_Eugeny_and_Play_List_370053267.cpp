#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pb push_back
const int MOD = 1e9+7;
vector<int> a;
vector<int> b;


bool goodboy(__int128 val,int target){
    if (target<=b[val] && target>b[val-1]){
        return true;
    }
    else{
        return false;
    }
}

int idk(int target){
    int l = 0;int r = b.size()-1;
    int ans = 0;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(b[mid]>=target){
            r = mid-1;
            ans = mid;
        }
        else{
            l = mid+1;
        }
    }
    return ans;

}

void solve(){
    int n,m;
    cin>>n>>m;

    for (int i = 0; i < n; ++i)
    {
        int l,b;
        cin>>l>>b;
        a.pb(l*b);
    }
    b.pb(a[0]);
    for (int i = 1; i < a.size(); i++)
    {
        b.pb(b[b.size()-1]+a[i]);
    }
    for (int i = 0; i < m; ++i)
    {
        int num;
        cin>>num;
        cout<<idk(num)+1<<"\n";
    }

}

signed main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long tc = 1;
    // cin>>tc;
    while (tc--){
        solve();
    }
    return 0;
}