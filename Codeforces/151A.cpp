#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    cout << min(p/np,min(c*d,k*l/nl))/n;
}

int main() {
    solve();
    return 0;
}