#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pb push_back
const int MOD = 1e9+7;
int a,b;

double idk(int target, const vector<vector<double>> &ppl, const vector<int> &x, const vector<int> &y){
    int l = 0;int r = ppl.size()-1;
    double ans = 0;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(ppl[mid][1]+b>=target){
            r = mid-1;
            ans = ppl[mid][0];
        }
        else{
            l = mid+1;
        }
    }
    return ans;

}

void solve(){
    vector<vector<double>> ppl;
    vector<int> x;
    vector<int> y;
    cin>>a>>b;
    int sums = 0;
    for (int i = 0; i < a; ++i)
    {
        int c,d,e;
        cin>>c>>d>>e;
        sums +=e;
        c = abs(c);
        d = abs(d);
        vector<double> el = {sqrt((c*c)+(d*d)),e};
        ppl.pb(el);

    }
    sort(ppl.begin(), ppl.end(), [](const vector<double>& a, const vector<double>& b) {
    return a[0] < b[0]; 
    });

    for (int i = 1; i < a; ++i)
    {
        ppl[i][1] = ppl[i-1][1]+ppl[i][1];
    }
    if((sums+b)<1000000){
        cout<<-1<<"\n";
    }
    else{
        cout<<fixed<<setprecision(7)<<idk(1000000,ppl,x,y)<<"\n";
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