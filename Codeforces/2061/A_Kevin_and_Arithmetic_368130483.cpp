#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int len;
    cin >> len;

    vector<int> l;
    int num;

    for (int i = 0; i < len; i++){
        cin >> num;
        l.push_back(num);
    }

    int even = 0, odd = 0;

    for (int i = 0; i < l.size(); i++){
        if (l[i] % 2 == 0){
            even++;
        } else {
            odd++;
        }
    }

    if (even > 0){
        cout << odd + 1 << endl;
    } else {
        cout << odd-1 << endl;
    }
}

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        solve();
    }
    return 0;
}