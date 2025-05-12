#include <iostream>
using namespace std;

void solve() {
    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;

    if(s*v1+2*t1<s*v2+2*t2) {
        cout << "First";
    }
    else if(s*v1+2*t1>s*v2+2*t2) {
        cout << "Second";
    }
    else {
        cout << "Friendship";
    }
}

int main() {
    solve();
    return 0;
}