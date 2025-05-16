#include <iostream>
using namespace std;

void solve() {
    int nB, nA, k, m, b[100000], a[100000];
    cin >> nA >> nB >> k >> m;

    for(int i=0; i<nA; ++i) {
        cin >> a[i];
    }

    for(int i=0; i<nB; ++i) {
        cin >> b[i];
    }

    if(b[nB-m]>a[k-1]) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}

int main() {
    solve();
    return 0;
}