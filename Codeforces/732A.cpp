#include <iostream>
using namespace std;

void solve() {
    int k, d, r;
    cin >> k >> r;

    for(int i=1; i<=9; ++i) {
        if((i*k)%10==0||(i*k)%10==r) {
            d=i;

            break;
        }
    }

    cout << d;
}

int main() {
    solve();
    return 0;
}