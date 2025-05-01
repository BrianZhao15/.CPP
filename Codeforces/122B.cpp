#include <iostream>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int fours=0, sevens=0;

    for(int i=0; i<s.size(); ++i){
        if(s[i]=='4') {
            ++fours;
        }
        else if(s[i] =='7') {
            ++sevens;
        }
    }

    if(fours==0&&sevens==0) {
        cout << "-1";
    }
    else if(fours>=sevens) {
        cout << '4';
    }
    else {
        cout << '7';
    }
}

int main() {
    solve();
    return 0;
}