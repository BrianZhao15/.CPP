#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int c, n, b, a;
    cin >> n >> a >> b >> c;

    if(n==1) {
        cout << 0;

        return;
    }

    cout << min(b,a)+(n-2)*min(c,min(b,a));
}

int main() {
    solve();
    return 0;
}