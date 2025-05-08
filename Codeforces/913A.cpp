#include <iostream>
#include <math.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    int value=pow(2,n);

    cout << m%value;
}

int main() {
    solve();
    return 0;
}