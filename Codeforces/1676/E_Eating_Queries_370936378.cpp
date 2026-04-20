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

int idk(const vector<int> &arr, int num){

    int l = 0; int r = arr.size()-1;
    int ans = -1;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(arr[mid]>=num){
            ans = mid+1;
            r = mid-1;
        }
        else{
            l = mid+1;
        }

    }
    return ans;

}

void solve(){

    int a,b;
    cin>>a>>b;
    vector<int> el(a);
    for(int i=0;i<a;i++){
        cin>>el[i];
        
    }
    sort(all(el), greater<int>());
    vector<long long> pre = {el[0]};
    for(int i = 1; i < a; i++) pre.pb(pre[i-1]+el[i]); 

    for(int i=0;i<b;i++){
        int num;
        cin>>num;
        cout<<idk(pre,num)<<endl;

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