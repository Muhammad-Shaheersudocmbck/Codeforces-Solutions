#include <bits/stdc++.h>
using namespace std;

void solve(){
    bool n = false;
    int a,b,c;
    vector<int> el;
    cin>>a>>b>>c;
    int sum = 0;
    vector<int> thething;
    for (int i = 1; i <= b; i++) {
      if (i!=c){
        el.push_back(i);
      }
    }
    if (b>=1 && c!=1){
      cout<<"YES"<<endl;
      cout<<a<<endl;
      for (int i = 0; i < a; i++) {
        cout<<1<<' ';
      }
      cout<<"\n";
      return;
    }
    else if(b>1){
      
      while(sum!=a){
        if ((a-sum)<=b && (a-sum)!=c){
          thething.push_back(a-sum);
          sum = sum+(a-sum);
        }
        else if(el[0]<=(a-sum)){
          thething.push_back(el[0]);
          sum = sum+el[0];
        }
        else{
          break;
        }
      }
      
    }
    
    if(sum==a){
      cout<<"YES\n";
      cout<<thething.size()<<"\n";
      for (int i = 0; i < thething.size(); i++) {
        cout<<thething[i]<<" ";
      }
      cout<<"\n";
    }
    else if(sum!=a){
      cout<<"NO\n";
    }
    
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--) solve();
}