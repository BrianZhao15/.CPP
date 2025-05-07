#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    string d, e, c, s;
    cin >> d >> e >> c;

    s=d+e;

    sort(c.begin(), c.end());
    sort(s.begin(), s.end());

    if(c==s) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}

int main() {
    solve();
    return 0;
}