#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a;
    cin >> a;

    vector<int> el(a);
    for (int i = 0; i < a; i++) cin >> el[i];

    int ones = count(el.begin(), el.end(), 1);
    int twos = count(el.begin(), el.end(), 2);
    int threes = count(el.begin(), el.end(), 3);
    int fours = count(el.begin(), el.end(), 4);

    int taxis = 0;

    taxis += fours;

    taxis += threes;
    ones = max(0, ones - threes);
    
    taxis += twos / 2;
    if (twos % 2) {
        taxis += 1;
        ones = max(0, ones - 2);
    }

    taxis += (ones + 3) / 4;

    cout << taxis << endl;
}

int main(){
    int tc = 1;
    // cin >> tc;
    while (tc--){
        solve();
    }
    return 0;
}