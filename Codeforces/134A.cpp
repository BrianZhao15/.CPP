#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int long a[200001], n, t=0;
    cin >> n;

    for(int long i=0; i<n; ++i) {
        cin >> a[i];

        t+=a[i];
    }

    vector<int long> idxs;

    for(int long i=0; i<n; ++i) {
        if(a[i]*n==t) {
            idxs.push_back(i);
        }
    }

    cout << idxs.size() << "\n";

    for(int long i=0; i<idxs.size(); ++i) {
        cout << idxs[i]+1 << " ";
    }
}

int main() {
    solve();
    return 0;
}