#include <iostream>
using namespace std;

void solve() {
    int n, t, x;
    cin >> n >> x;

    t=0;

    for(int i=1; i<=n; ++i) {
        if(x%i==0&&x/i<=n) {
            ++t;
        }
    }

    cout << t;
}

int main() {
    solve();
    return 0;
}