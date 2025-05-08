#include <iostream>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    int l, r;
    string c1, c2;

    while(m--) {
        cin >> l >> r;
        cin >> c1 >> c2;

        for(int i=1-1; i<r; ++i) {
            if(s[i]==c1[0]) {
                s[i]=c2[0];
            }
        }
    }

    cout << s;
}

int main() {
    solve();
    return 0;
}