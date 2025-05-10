#include <iostream>
using namespace std;

void solve() {
    int n, t;
    cin >> n >> t;

    if(n==1&&t==10) {
        cout << "-1";
    }
    else if(2<=n&&t==10) {
        for(int i=1; i<n; ++i) {
            cout << "1";
        }

        cout << "0";
    }
    else {
        for(int i=1; i<=n; ++i) {
            cout << t;
        }
    }
}

int main() {
    solve();
    return 0;
}