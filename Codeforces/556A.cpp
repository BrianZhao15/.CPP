#include <iostream>
#include <math.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int o=0,z=0;

    for(char c:s) {
        if(c=='1') {
            ++o;
        }
        else {
            ++z;
        }
    }

    cout << abs(o-z);
}   

int main() {
    solve();
    return 0;
}