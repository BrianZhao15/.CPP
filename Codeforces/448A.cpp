#include <iostream>
using namespace std;

void solve() {
    int n, b1, b2, b3, a1, a2, a3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;

    if(n>=(b1+b2+9+b3)/10+(a1+a2+a3+4)/5) {
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