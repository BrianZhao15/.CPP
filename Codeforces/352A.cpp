#include <iostream>
using namespace std;

void solve() {
    int n, a, v=0, b=0;
    cin >> n;

    for(int i=0; i<n; ++i) {
        cin >> a;

        if(a==0) {
            ++b;
        }
        else if(a==5) {
            ++v;
        }
    }

    if(b==0) {
        cout << -1 << endl;
    }
    else if(v<9) {
        cout << 0 << endl;
    }
    else {
        v-=v%9;

        for (int i=0; i<v; ++i) {
            cout << 5;
        }

        for (int i=0; i<b; ++i) {
            cout << 0;
        }
    }
}

int main() {
    solve();
    return 0;
}