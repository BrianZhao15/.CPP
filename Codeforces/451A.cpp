#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    if (min(n,m)%2 != 0) {cout << "Akshat";}
    else {cout << "Malvika";}
}

int main() {
    solve();
    return 0;
}