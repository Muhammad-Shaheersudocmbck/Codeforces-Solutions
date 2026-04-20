#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3","unroll-loops")
#pragma GCC target("avx,avx2,fma")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

void solve(){
    int a;
    cin>>a;
    vector<int> el(a);
    vector<int> lens;
    for(int i=0;i<a;i++){
        cin>>el[i];
    }
    if (a==1){
        for(auto i:el){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else{
        for(int i=0;i<a;i++){
            cout<<2<<" ";
        }
        cout<<endl;
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