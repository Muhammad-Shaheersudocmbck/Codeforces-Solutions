#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;

    if ((a+b)%3==0 && (-(a/4))<=b && b<=(a/2)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   

    
}

int main(){
    int tc;
    cin>>tc;
    for (int i = 0; i<tc;i++){
        solve();
    }    
    return 0;
}