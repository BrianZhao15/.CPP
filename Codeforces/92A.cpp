#include <iostream>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    m%=n*(n+1)/2;

    for(int i=1; i<=n; ++i) {
        if (m<i) {
            break;
        }

        m -= i;
    }

    cout << m;
}

int main() {
    solve();
    return 0;
}