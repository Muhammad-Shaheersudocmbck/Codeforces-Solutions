#include <bits/stdc++.h>
using namespace std;

// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("O3","unroll-loops")
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

void solve(){
 	
	long long a,b;
    cin>>a>>b;
    if(b==1 || a==b || a%b==0 || (a-b)%2==0 || a%2==0){
        cout<<"YES"<<"\n";
    }
    else{
       cout<<"NO\n";
    }
}

int main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long tc = 1;
    cin >> tc;
    while (tc--){
        solve();
    }
    return 0;
}