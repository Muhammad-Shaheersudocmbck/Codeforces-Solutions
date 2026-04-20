#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define pb push_back

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3","unroll-loops")
#pragma GCC target("avx,avx2,fma")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

void solve(){
 	
	int a,b,c;
    cin>>a>>b>>c;

    if((b+c+2)<=a || (a==b && a==c && b==c) ) {
        cout<<"yEs\n";
    }else{
        cout<<"nO\n";
    }
}

signed main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long tc = 1;
    cin >> tc;
    while (tc--){
        solve();
    }
    return 0;
}