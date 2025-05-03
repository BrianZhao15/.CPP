#include <iostream>
#include <math.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << floor((c*(a-b)+b-1)/b);
}

int main() {
    solve();
    return 0;
}