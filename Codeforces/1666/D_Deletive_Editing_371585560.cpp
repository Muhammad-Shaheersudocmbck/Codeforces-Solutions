#include <bits/stdc++.h>
using namespace std;

int main(){
  int tc = 1;
  cin>>tc;
  while(tc--){
    string ans = "";
    unordered_map<char,int> f;
    string a,b;
    cin>>a>>b;
    // cout<<a<<b<<endl;
    for (auto i : b) {
      f[i]++;
    }
    
    for (int i = a.size()-1; i >= 0; i--) {
      if(f[a[i]]>0){
        f[a[i]]--;
        ans = ans+a[i];
        
      }
    }
    reverse(ans.begin(), ans.end());
    
    if(ans==b){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
    
    
    
  }
}