#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a;
    cin>>a;
    cin.ignore();
    string b;
    getline(cin, b);
    int x =0;
    int y = a-1;
    bool OMG = true;
    while (x<y){
        if(b[x]=='1' && b[y]=='1'){
            OMG = false;
            break;
        }
        if(b[x]=='0' && b[y]=='0'){
            OMG = false;
            break;
        }
        x++;
        y--;
        
    }
    cout<<b.substr(x,y-x+1).size()<<"\n";
    

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