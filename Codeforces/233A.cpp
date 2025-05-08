#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    if(n%2) {
        cout << -1;
    }
    else {
        cout << "2 1";

        for (int i=3; i<n; i+=2) {
            cout << " " << i + 1 << " " << i;
        }
    }
}

int main() {
    solve();
    return 0;
}