#include <iostream>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    if(a==0&&b==0) {
        cout << "NO";
    }
    else {
        if(a==b||abs(a-b)==1) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
}

int main() {
    solve();
    return 0;
}