#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    vector<int> h (n);

    for(int i=0; i<n; ++i) {
        cin >> h[i];
    }

    sort(h.begin(),h.end());

    cout << (int)(h[b]-h[b-1]);
}

int main() {
    solve();
    return 0;
}