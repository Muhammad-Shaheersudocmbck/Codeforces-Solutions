#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define int ll
#define all(x) x.begin(), x.end()

int used = 0;
int a,b;

int idk(int num, int target, int size){
    int l = 2, r = (size-used)+1;
    int ans = -1;
    while(l<=r){
        int mid = l+(r-l)/2;
        if((__int128)(num*mid)>target){
            ans = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return ans;

}

void solve(){
    
    int ans = 0;
    cin>>a>>b;
    std::vector<int> v(a);
    for (int i = 0; i < a; ++i)
    {
        cin>>v[i];
    }
    sort(all(v));
    for (int i = v.size()-1; i >=0; i--)
    {   
        if(v[i]>b){
            ans++;
            // cout<<v[i]<<"\n";
        }
        else if(idk(v[i], b, i)!=-1){
            ans++;
            used+=(idk(v[i],b,i)-1);
            // cout<<idk(v[i],b,i+1)<<"\n";
        }
    }
    cout<<ans<<"\n";

}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin>>tc;
    while(tc--){
        solve();
    }
}