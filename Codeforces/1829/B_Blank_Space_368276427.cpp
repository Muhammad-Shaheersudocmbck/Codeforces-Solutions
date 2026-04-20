#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int a;
    cin>>a;
    vector<int> el(a);
    for(int i=0;i<a;i++){
        cin>>el[i];
    }
    int prev = el[0];
    vector<int> lengths;
    int rn = 1;
    if (count(el.begin(),el.end(),1)!=a){
        for(int i=1;i<a;i++){
            if (el[i-1]==0 && el[i]==0){
                rn++;
            }
            else{
                lengths.push_back(rn);
                rn = 1;
            }
        }
        lengths.push_back(rn);
        cout<<*max_element(lengths.begin(), lengths.end())<<"\n";
    }
    else{
        cout<<0<<"\n";
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