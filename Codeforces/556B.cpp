#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int a, i=1, t;
    cin >> t;

    a=(n-t)%n;

    for(; i<n; ++i) {
        cin >> t;

        if ((n+t-a*(2*(i%2)-1))%n!=i) {
            break;
        }
    }

    cout << (n<=i?"Yes":"No");
}

int main() {
    solve();
    return 0;
}