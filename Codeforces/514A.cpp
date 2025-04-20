#include <iostream>
#include <string>
using namespace std;

void solve() {
    int long long x;
    cin >> x;

    string n=to_string(x);

    for (int i=0; i<n.size(); ++i) {
        if (9-(n[i]-'0')<n[i]-'0'&&!(i==0&&9-(n[i]-'0')==0)) {
            n[i]=9-(n[i]-'0')+'0';
        }
    }

    cout << n;
}

int main() {
    solve();
    return 0;
}