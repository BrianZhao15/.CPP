#include <iostream>
#include <math.h>
using namespace std;

void solve() {
    int Y, W;
    cin >> Y >> W;

    if (7-max(Y,W)==6) {
        cout << "1/1";
    }
    else if (7-max(Y,W)==4) {
        cout << "2/3";
    }
    else if (7-max(Y,W)==3) {
        cout << "1/2";
    }
    else if (7-max(Y,W)==2) {
        cout << "1/3";
    }
    else {
        cout << 7-max(Y,W) << "/" << 6;
    }
}

int main() {
    solve();
    return 0;
}