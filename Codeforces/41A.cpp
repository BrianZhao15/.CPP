#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;

    reverse(s.begin(),s.end());

    if(s==t) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}

int main() {
    solve();
    return 0;
}