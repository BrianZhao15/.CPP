#include <iostream>
using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;

    if ((y==x+1)||(x>y)&&(x-y+1)%9==0) {cout << "YES" << "\n";}
    else {cout << "NO" << "\n";}
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}