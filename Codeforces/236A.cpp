#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int c=0;

    string s;
    cin >> s;

    sort(s.begin(),s.end());
    for(int i=1; i<=s.length(); ++i) {
        if(s[i-1]!=s[i]) {
            ++c;
        }
    }

    if(c%2==0) {
        cout<<"CHAT WITH HER!";
    }
    else {
        cout<<"IGNORE HIM!";
    }
}

int main() {
    solve();
    return 0;
}