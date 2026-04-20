#include <bits/stdc++.h>
using namespace std;

// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("O3","unroll-loops")
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

void solve(){
	int a;
    cin>>a;
    bool initiate = false;
    vector<int> el(a);
    for (int i = 0; i < a; ++i)
    {
        cin>>el[i];
    }
    
    for (int i = 0; i < a-1; ++i)
    {
        for (int j = i+1; j < a; j++)
        {
            if(gcd(el[i],el[j])<=2){
                initiate = true;
                break;
            }
        }
        if(initiate){
            break;
            
        }
    }
    if(initiate){
        cout<<"yEs\n";
    }
    else{
        cout<<"nO\n";
    }
        
}

signed main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while (tc--){
        solve();
    }
    return 0;
}