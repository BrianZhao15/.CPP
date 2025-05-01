#include <iostream>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int LR=0, UD=0;

    if(s.size()%2) {
        cout << -1;
        exit(0);
    }

    for(int i=0; i<s.size(); ++i) {
        if(s[i]=='L') {
            --LR;
        }
        if(s[i]=='R') {
            ++LR;
        }
        if(s[i]=='U') {
            ++UD;
        }
        if(s[i]=='D') {
            --UD;
        }
    }

    cout << (abs(LR)+abs(UD))/2;
}

int main() {
    solve();
    return 0;
}