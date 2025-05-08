#include <iostream>
using namespace std;

void solve() {
    unsigned int long long n, k, r;
    cin >> n >> k;

    r=n/k;

    if(r%2) {
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