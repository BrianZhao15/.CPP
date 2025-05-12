#include <iostream>
using namespace std;

void solve() {
    int n, b, a;
    cin >> n;

    while(n--) {
        string s;
        cin >> s >> a >> b;
        
        if(b>a&&a>=2400) {
            cout << "YES";

            return;
        }
    }

    cout << "NO";
}

int main() {
    solve();
    return 0;
}