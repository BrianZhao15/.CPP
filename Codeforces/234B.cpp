#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n, k, a;
    cin >> n >> k;

    vector<pair <int, int>> ll;

    for(int i=1; i<=n; ++i) {
        cin >> a;
        ll.push_back(make_pair(a,i));
    }

    sort(ll.begin(),ll.end());
    reverse(ll.begin(),ll.end());
    
    cout << ll[k-1].first << "\n";

    for(int i=k-1; i>=0; --i) {
        cout << ll[i].second << " ";
    }
}

int main() {
    solve();
    return 0;
}