#include <iostream>
using namespace std;

void solve() {
    int long long n, l, p, k, m;
    cin >> n >> m >> k;

    p=0;
    
    for(int i=1; i<=n; ++i) {
        for(int j=1; j<=m; ++j) {
            ++p;

            if(p==k) {
                cout << i << " " << j << " ";

                if(k%2==0) {
                    cout << "R";
                }
                else {
                    cout << "L";
                }
            }

            ++p;

            if(p==k) {
                cout << i << " " << j << " ";

                if(k%2==0) {
                    cout << "R";
                }
                else {
                    cout << "L";
                }
            } 
        }
    }
}

int main() {
    solve();
    return 0;
}