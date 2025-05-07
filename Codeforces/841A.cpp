#include <iostream>
#include <map>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    map<char, int> giveaway;

    for(int i=0; i<n; ++i) {
        ++giveaway[s[i]];
    }

    for(int i=0; i<n; ++i) {
        if(k<giveaway[s[i]]) {
            cout << "NO";
            return;
        }
    }

    cout << "YES";
}

int main() {
    solve();
    return 0;
}