#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int n, seq[101];
    cin >> n;

    bool ok=false;

    for(int i=0; i<n; ++i) {
        cin >> seq[i];
    }

    sort(seq,seq+n);

    for(int i=1; i<n; ++i) {
        if(seq[i]>seq[i-1]) {
            ok=true;
            cout << seq[i];

            break;
        }
    }

    if(ok==false) {
        cout << "NO";
    }
}

int main() {
    solve();
    return 0;
}