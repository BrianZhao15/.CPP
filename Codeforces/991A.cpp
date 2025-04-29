#include <iostream>
#include <math.h>
using namespace std;

void solve() {
    int A, B, C, N;
    cin >> A >> B >> C >> N;

    if (A<C||B<C||A+B-C+1>N) {
        cout << -1 << "\n";
    } 
    else {
        cout << abs((A+B-C)-N) << "\n";
    }
}

int main() {
    solve();
    return 0;
}