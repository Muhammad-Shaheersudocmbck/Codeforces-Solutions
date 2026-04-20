#include <bits/stdc++.h>
using namespace std;

void solve(){
    string a;
    getline(cin, a);
    vector<int> el(26,0);
    int odd = 0;
    int even = 0;
    for(int i =0;i<a.size();i++){
        el[(int)a[i]-97] = el[(int)a[i]-97]+1;
    }
    for(int i=0;i<el.size();i++){
        if (el[i] %2==0 && el[i]!=0){
            even++;
        }
        else if(el[i]!=0){
            odd++;
        }
    }
    if((odd-1)%2==0 || odd==0){
        cout<<"First"<<endl;
    }
    else{
        cout<<"Second"<<endl;
    }

}

int main(){
    int tc = 1;
    // cin >> tc;
    while (tc--){
        solve();
    }
    return 0;
}