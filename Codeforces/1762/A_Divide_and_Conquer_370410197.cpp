#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pb push_back
const int MOD = 1e9+7;

void solve(){
    
    int a;
    cin>>a;
    std::vector<int> umm(a);
    std::deque<int> v(a);
    for (int i = 0; i < a; ++i)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    if(accumulate(v.begin(), v.end(), 0)%2==0){

        cout<<"0\n";
    }
    else{
        int mins;
        for (int i = 0; i < a; ++i)
        {
            int par = 0;
            if (v[i]%2!=0){
                par = 1;
            }

            while ((v[i]%2)==par){
                v[i] = v[i]/2;
                umm[i] = umm[i]+1;
            }
            if(i==0){
                mins = umm[0];
            }  
            else{
                mins = min(mins, umm[i]);
            }

        }

        cout<<mins<<"\n";
    }

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc = 1;
    cin>>tc;
    while (tc--){
        solve();
    }
    return 0;
}