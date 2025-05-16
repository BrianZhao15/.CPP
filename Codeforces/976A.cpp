#include <iostream>
using namespace std;

void solve() {
    int o,n,z;
    string s;
    cin >> n >> s;

    o=0,z=0;

    for(int i=0; i<n; ++i) {
        if(s[i]=='1') {
            ++o;
        }
        else {
            ++z;
        }
    }

    if(o==1) {
        cout << s;
    }
    else {
        if(o) {
            cout << 1;
        }

        while(z--) {
            cout << 0;
        }
    }
}

int main() {
    solve();
    return 0;
}