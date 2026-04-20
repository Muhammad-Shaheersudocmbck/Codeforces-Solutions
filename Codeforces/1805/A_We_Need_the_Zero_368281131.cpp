#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a;
    cin>>a;
    vector<int> el(a);
    for(int i=0;i<a;i++){
        cin>>el[i];
    }

    int xors = 0;
    for(int i=0;i<a;i++){
        xors = xors^el[i];
    }
    if (xors ==0){
        cout<<0<<"\n";
    }
    else if(a%2==1){
        cout<<xors<<"\n";
    }
    else{
        cout<<-1<<"\n";
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