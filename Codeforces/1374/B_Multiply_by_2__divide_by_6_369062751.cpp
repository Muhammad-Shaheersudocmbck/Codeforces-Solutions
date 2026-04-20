#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define pb push_back

// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("O3","unroll-loops")
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

void solve(){
 	
	int a;
    cin>>a;
    int op = 0;
    bool stopit = true;
    while (a!=1){
        if(a%6==0){
            a = a/6;
            op++;
        }
        else if(a%3==0){
            a = a*2;
            op++;
        }
        else{
            cout<<-1<<endl;
            stopit = false;
            break;
        }
    }
    if(stopit){
        cout<<op<<endl;
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