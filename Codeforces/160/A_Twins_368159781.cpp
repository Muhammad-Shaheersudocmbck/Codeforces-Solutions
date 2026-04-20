#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<int> el;
    int a;
    int mine = 0;
    cin >>a;
    while(a--){
        int num;
        cin>>num;
        el.push_back(num);
    }
    std::sort(el.begin(), el.end(), std::greater<int>());
    int i =0;
    while(mine<=accumulate(el.begin(), el.end(),0)){
        mine = mine+el[i];
        el[i] = 0;
        i++;
    }
    cout<<i<<endl;

}

int main(){
    int tc = 1;
    // cin >> tc;
    while (tc--){
        solve();
    }
    return 0;
}