#include <iostream>
using namespace std;

void solve() {
    int res, n, a[1000], h;
    cin >> n >> h;

    res=0;

    for(int i=0; i<n; ++i) {
        cin >> a[i];

        if(a[i]>h) {
            res+=2;
        }
        else {
            ++res;
        }
    }

    cout << res;
}

int main() {
    solve();
    return 0;
}