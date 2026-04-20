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

void solve(){
    
    int a,b;
    cin>>a>>b;
    std::vector<int> v(a);
    for (int i = 0; i < a; ++i)
    {
        cin>>v[i];
    }
    int prev = v[0];
    int curr = 1;
    for(int i = 1; i<a; i++){
        if(curr>=b){
            cout<<"NO"<<endl;
            return;
        }
        if(v[i] == prev){
            curr++;
            prev = v[i];
        }
        else{
            curr = 1;
            prev = v[i];
        } if(curr>=b){
            cout<<"NO"<<endl;
            return;
        }

    }
    cout<<"YES"<<endl;

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