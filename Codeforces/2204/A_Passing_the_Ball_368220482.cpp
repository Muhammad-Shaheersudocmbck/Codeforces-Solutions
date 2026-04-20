#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int a;
    cin>>a;
    string b;
    cin.ignore();
    getline(cin, b);
    int x =0;
    for(int i=0;i<b.size();i++){
        x++;
        if( b[i]=='L'){cout<<x<<endl;break;}
    }

}

int main(){
    int tc = 1;
    cin >> tc;
    while (tc--){
        solve();
    }
    return 0;
}