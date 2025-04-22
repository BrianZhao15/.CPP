#include <iostream>
using namespace std;

void solve() {
    int n, skp=2;
    cin >> n;

    for(int i=2; i<=n; ++i) {
        cout << skp << " ";

        skp+=i;

        if(n<skp) {
            skp-=n;
        }
    }
}   

int main() {
    solve();
    return 0;
}