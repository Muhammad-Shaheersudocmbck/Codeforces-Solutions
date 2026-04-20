#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a;
    cin>>a;
    deque<int> el(a);
    for(int i=0;i<a;i++){
        cin>>el[i];
    }
    int negative =0;
    int positive = 0;
    for(int i=0;i<a;i++){
        if (el[i]==-1){
            negative++;
        }
        else{
            positive++;
        }
    }
    int n = 0;
    sort(el.begin(),el.end());
    int product = accumulate(el.begin(), el.end(), 0);
    while (product<0){
        el.pop_front();
        el.push_back(1);
        n++;
        product = accumulate(el.begin(), el.end(), 0);

    }
    if(accumulate(el.begin(),el.end(),1,multiplies<int>())<0){
        n++;
    }
    cout<<n<<"\n";
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