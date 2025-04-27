#include <iostream>
using namespace std;

void solve() {
    int l, p, q;
    cin >> l >> p >> q;

    cout << (double)p*l/(p+q);
}

int main() {
    solve();
    return 0;
}