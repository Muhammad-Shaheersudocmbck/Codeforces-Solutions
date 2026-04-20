#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3","unroll-loops")
#pragma GCC target("avx,avx2,fma")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

void solve(){
    int a;
    cin>>a;
    vector<int> el;
    int xors = 0;
    for(int i=1;i<=a-3;i++){
        el.push_back(i);
        xors = xors^i;
    }
    el.push_back(pow(2,29));
    el.push_back(pow(2,30));
    

    xors ^= (1 << 29);
    xors ^= (1 << 30);
    el.push_back(xors);
    for(auto i:el){
        cout<<i<<" "; 
    }
    cout<<"\n";
    

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