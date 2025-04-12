#include <iostream>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    if (n%2!=0) {
        cout << n;

        for (int i=1; i<n; i++) {
            cout << " " << i;
        }

        cout << "\n";
    }
    else {cout << -1 << "\n";}
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}