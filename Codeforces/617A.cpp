#include <iostream>
using namespace std;

void solve() {
    int x, s=0, advances[]={1,2,3,4,5};
    cin >> x;

    for(int i=4; i>=0; --i) {
        s+=x/advances[i];
        x%=advances[i];
    }

    cout << s;
}

int main() {
    solve();
    return 0;
}