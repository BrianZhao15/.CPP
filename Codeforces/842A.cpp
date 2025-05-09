#include <iostream>
using namespace std;

void solve() {
    int long long l, r, x, y, k;
    cin >> l >> r >> x >> y >> k;

    bool ok=false;

    for(int long long b=x, a; b<=y; ++b) {
        a=b*k;

        if(l<=a&&a<=r) {
            ok=true;

            break;
        }
    }

    if(ok) {
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