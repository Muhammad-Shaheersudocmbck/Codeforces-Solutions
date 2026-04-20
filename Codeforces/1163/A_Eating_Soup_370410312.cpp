#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int a,b;
  cin>>a>>b;
  
  std::vector<int> el(a);
  if(b==0){
    cout<<1<<"\n";
  }
  else if(a>=b*2){
    cout<<b<<"\n";
  }
  else{
    cout<<a%b<<"\n";
  }
  
  return 0;
}