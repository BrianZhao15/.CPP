#include <iostream>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int res=0;
    string target="hello";

    for(int i=0; i<s.size(); ++i) {
        if(s[i]=="hello"[res]){
            ++res;
        }
    }

    if(res==5) {
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