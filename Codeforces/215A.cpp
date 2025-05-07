#include <iostream>
using namespace std;

void solve() {
    int n, b, a[51], m, maximum=0, count=1;
    cin >> n;

    for(int i=0; i<n; ++i) {
        cin >> a[i];
    }

    cin >> m;

    for (int i=0; i<m; ++i) {
        cin >> b;

        for(int j=0, p; j<n; ++j) {
            if(b%a[j]==0) {
                p=b/a[j];

                if(maximum<p) {
                    maximum=p;

                    count=1;
                }

                else if (maximum==p) {
                    ++count;
                }

                break;
            }
        }
    }

    cout << count;
}

int main() {
    solve();
    return 0;
}