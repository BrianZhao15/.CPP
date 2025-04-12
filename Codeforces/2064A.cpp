#include <iostream>
using namespace std;

void solve() {
    int a = 0;

    int n;
    cin >> n;

    string s;
    cin >> s;

    if (s[0] == '1') {
        a++;
    }

    for (int i=0; i<n-1; i++) {
        if (s[i] != s[i+1]) {
            a++;
        }
    }

    cout << a << "\n";
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }

    return 0;
}