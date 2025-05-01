#include <iostream>
using namespace std;

void solve() {
    int n, P, V, T, res=0;
    cin >> n;

    while(n--) {
        cin >> P >> V >> T;

        if (P+V+T>=2) {
            ++res;
        }
    }

    cout << res;
}

int main() {
    solve();
    return 0;
}