#include <iostream>
#include <math.h>
using namespace std;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    if (ceil((double)y/100*n)-x == abs(ceil((double)y/100*n)-x)) {cout << ceil((double)y/100*n)-x;} else {cout << 0;}
}

int main() {
    solve();
    return 0;
}