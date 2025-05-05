#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int n, b, a;
    cin >> n >> a >> b;

    cout << min(b+1,n-a);
}

int main() {
    solve();
    return 0;
}