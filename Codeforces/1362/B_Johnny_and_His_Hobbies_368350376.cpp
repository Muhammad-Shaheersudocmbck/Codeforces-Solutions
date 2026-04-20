#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a;
    cin>>a;
    vector<int> el(a);
    bool OMG = false;
    for(int i=0;i<a;i++){
        cin>>el[i];
    }
    for(int i=1;i<1025;i++){
        vector<int> ex;
        for(int j=0;j<el.size();j++){
            ex.push_back(el[j]^i);
        }
        sort(ex.begin(),ex.end());
        sort(el.begin(),el.end());
        if(ex==el){
            OMG = true;
            cout<<i<<endl;
            break;
        }
        if(OMG){
            break;
        }
    }
    if(OMG==false){
        cout<<-1<<endl;
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