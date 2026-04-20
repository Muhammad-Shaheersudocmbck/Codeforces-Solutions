/*

███████╗██╗  ██╗ █████╗ ██╗  ██╗███████╗███████╗██████╗ 
██╔════╝██║  ██║██╔══██╗██║  ██║██╔════╝██╔════╝██╔══██╗
███████╗███████║███████║███████║█████╗  █████╗  ██████╔╝
╚════██║██╔══██║██╔══██║██╔══██║██╔══╝  ██╔══╝  ██╔══██╗
███████║██║  ██║██║  ██║██║  ██║███████╗███████╗██║  ██║
╚══════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚══════╝╚══════╝╚═╝  ╚═╝
                                                                   
*/

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define int ll
#define all(x) x.begin(), x.end()
#define endl '\n'
#define print(a) for(auto &i:a){cout << i << ' ';} cout << endl;

int idk(const vector<int> &arr, int num, int x, int y, const std::vector<int> &used){
    int l =  0; int r=arr.size()-1;int ans = -1;
    while(l<=r){
        int mid = l+(r-l)/2;
        bool bin = binary_search(used.begin(), used.end(),mid);
        if((arr[mid]-x)<=(num) and (arr[mid]+y)>=(num) and bin==false){
            ans = mid;
            r = mid-1;
        }
        else if((arr[mid]-x)>(num)){
            r = mid-1;
        }
        else{
            l = mid+1;
        }

    }
    return ans;
}

void solve(){
    
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int anss = 0;
    vector<int> x;
    vector<int> y;
    std::vector<int> v(a);
    std::vector<int> bb;
    std::vector<int> used;
    for (int i = 0; i < a; ++i)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < b; ++i)
    {
        int num;
        cin>>num;
        int an = idk(v,num, c,d, used);
        // cout<<num<<" "<<an<<endl;
        if(an>=0 ){
            anss++;
            used.pb(an);
            x.pb(an+1);
            y.pb(i+1);
        }
    }
    cout<<anss<<endl;
    for (int i = 0; i < x.size(); ++i)
    {
        cout<<x[i]<<" "<<y[i]<<endl;
    }



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