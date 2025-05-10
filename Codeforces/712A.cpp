#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> b (n), a (n);

    for(int i=0; i<n; ++i) {
        cin >> a[i];
    }

    b[n-1]=a[n-1];

    for(int i=n-2; i>=0; --i) {
        b[i]=a[i]+a[i+1];
    }

    for(int i=0; i<n; ++i) {
        cout << b[i] << " ";
    }
}

int main() {
    solve();
    return 0;
}