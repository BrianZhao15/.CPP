#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int long long d=0;

    for(int i=9; n>0; i*=10) {
        d+=n;
        n-=i;
    }

    cout << d;
}

int main() {
    solve();
    return 0;
}