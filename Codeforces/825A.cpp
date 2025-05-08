#include <iostream>
using namespace std;

void solve() {
    int d;
    long n;
    string s;

    cin >> n >> s;

    d=0;

    for(int i=0; i<n; ++i) {
        if(s[i]=='1') {
            ++d;
        }
        else {
            cout << d;
            d=0;
        }
    }

    cout << d;
}

int main() {
    solve();
    return 0;
}