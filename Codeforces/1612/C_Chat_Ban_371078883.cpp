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

int sums(int mid, int a){
    if(mid <= a){
        return (mid * (mid + 1)) / 2;
    } else {
        int up = (a * (a + 1)) / 2;
        int downs = mid - a;
        int down = (downs * (2*a - downs - 1)) / 2;
        return up + down;
    }
}
int idk(int num,int a){
    int l = 0,r = (2*(a))-1, ans = 0;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(sums(mid, a)>=num){
            // cout<<sums(mid,a)<<" "<<mid<<endl;
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
    
    int a,b;
    cin>>a>>b;
    
    int up = (a * (a + 1)) / 2;
    int downs = a-1;
    int down = (downs * (2*a - downs - 1)) / 2;
    if(((a*(a+1))/2)+(down)<=b){
        cout<<2*a-1<<endl;
    }
    else{
        cout<<idk(b,a)<<endl;
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