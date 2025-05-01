#include <iostream>
using namespace std;

void solve() {
    int n, l, p;
    cin >> n;

    l=0,p=0;

    while(n>l+p) {
        p++;
        l+=p;
        n-=l;
    }

    cout << p;
}

int main() {
    solve();
    return 0;
}