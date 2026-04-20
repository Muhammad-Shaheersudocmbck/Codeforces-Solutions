#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3","unroll-loops")
#pragma GCC target("avx,avx2,fma")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

void solve(){
    
    int a;
    cin>>a;
    // vector<int> el(a);
    // for(int i=0;i<a;i++){
    //     cin>>el[i];
    // }
    vector<int>el;
    for(int i=1;i<=a;i++){
        el.push_back(i);
    }
    sort(el.begin(),el.end(),greater<int>());
    if(a==2){
        cout<<2<<" "<<1<<endl;
    }
    else{
        for(auto &x:el){
        cout<<x<<" ";   
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