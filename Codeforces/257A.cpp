#include <algorithm>
#include <iostream>
#include <functional>
using namespace std;

void solve() {
    int a[50], p=0, k, m, n;
    cin >> n >> m >> k;

    for(int i=0; i<n; ++i) {
        cin >> a[i];
    }  

    sort(a,a+n,greater<int>());

    for(int i=0; k<m&&i<n; ++i) {
        ++p;

        k+=a[i]-1;
    }

    if(m<=k) {
        cout << p;
    }
    else {
        cout << -1;
    }
}

int main() {
    solve();
    return 0;
}