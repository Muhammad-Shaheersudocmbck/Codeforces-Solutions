#include <bits/stdc++.h>
using namespace std;

void solve(){
    int m,n,x,y;
    cin>>m>>n>>x>>y;
    int moves = 0;
    if (n<=y){
        while (n!=y){
            n++;
            m++;
            moves++;
        }
        if (m>=x){
            moves = moves+(m-x);
            cout<<moves<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
        
    }
    else{
        cout<<-1<<"\n";
    }
    

}

int main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while (tc--){
        solve();
    }
    return 0;
}