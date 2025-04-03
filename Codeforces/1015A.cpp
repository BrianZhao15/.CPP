#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> points;

    for (int p = 1; p < m + 1; p++) {
        points.push_back(p);
    }    

    while (n--) {
        int l, r;
        cin >> l >> r;

        if (l != r) {
            for (int i = min(l, r) - 1; i < max(l, r); i++) {
                points.at(i) = 0;
            }
        }
        else {
            points.at(l - 1) = 0;    
        }
    }

    int k = 0;

    for (int e = 0; e < m; e++) {
        if (points[e] != 0) {
            k++;
        }
    }

    cout << k << "\n";

    for (int j = 0; j < m; j++) {
        if (points[j] != 0) {
            cout << points[j] << " ";
        }
    }

    if (k == m) {cout << 0;}
}

int main() {
    solve();
    return 0;
}