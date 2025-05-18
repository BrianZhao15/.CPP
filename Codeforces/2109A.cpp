#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a (n);

    for(int i=0, w; i<n; ++i) {
        cin >> w;

        a[i]=w;
    }

    if(accumulate(a.begin(),a.end(),0)==n) {
        cout << "YES" << "\n";

        return;
    }

    for(int i=0; i<n-1; ++i) {
        if(!a[i]&&!a[i+1]) {
            cout << "YES" << "\n";

            return;
        }
    }

    cout << "NO" << "\n";
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}