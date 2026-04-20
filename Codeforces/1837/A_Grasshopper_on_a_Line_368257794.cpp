#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int a,b;
    cin>>a>>b;
    if (a%b!=0){
        cout<<1<<"\n";
        cout<<a<<"\n";
    }
    else{
        int x = (b*((int)(a/b)));
        int y = a-(x-1);
        cout<<2<<"\n";
        cout<<x-1<<" "<<y<<"\n";
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