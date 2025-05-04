#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int n, left=0, right=0;
    cin >> n;

    for(int i=0, l, r; i<n; ++i) {
        cin >> l >> r;

        left+=l;
        right+=r;
    }

    cout << min(n-left,left)+min(n-right,right);
}

int main() {
    solve();
    return 0;
}