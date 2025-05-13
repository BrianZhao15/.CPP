#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void solve() {
    int a, b=0;
    cin >> a;

    string s;

    while(true) {
        ++a,++b;

        stringstream touristream;

        touristream << to_string(a);
        touristream >> s;

        if(s.find('8')!=-1) {
            cout << b;

            return;
        }
    }
}

int main() {
    solve();
    return 0;
}