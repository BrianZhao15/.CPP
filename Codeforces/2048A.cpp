#include <iostream>
using namespace std;

void solve() {
    int x;
    cin >> x;

    if(x%33==0) {
        cout << "YES" << "\n";
    }
    else {
        cout << "NO" << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        solve();
    }
    
    return 0;
}