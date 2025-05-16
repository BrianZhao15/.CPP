#include <iostream>
using namespace std;

void solve() {
    int m, s, n;
    cin >> n >> m;

    s=0;

    if(m>n) {
        --s;
    }
    else {
        if(n%2==0) {
            s=n/2;
        }
        else {
            s=n/2+1;
        }

        while(s%m) {
            ++s;
        }
    }

    cout << s;
}

int main() {
    solve();
    return 0;
}