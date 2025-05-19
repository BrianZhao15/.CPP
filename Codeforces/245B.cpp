#include <iostream>
#include <string>
using namespace std;

void solve() {
    string s;
    cin >> s;

    if(s[0]=='h') {
        s.insert(4,"://");

        for(int i=7; i<s.length()-1; ++i) {
            if(s[i]=='r'&&s[i+1]=='u') {
                if(i==7) {
                    continue;
                }

                s.insert(i,".");

                if(s[i+3]) {
                    s.insert(i+3,"/");
                }

                break;
            }
        }
    }
    else if(s[0]=='f') {
        s.insert(3,"://");

        for(int i=6; i<s.length()-1; ++i) {
            if(s[i]=='r'&&s[i+1]=='u') {
                if(i==6) {
                    continue;
                }

                s.insert(i,".");

                if(s[i+3]) {
                    s.insert(i+3,"/");
                }

                break;
            }
        }
    }

    cout << s;
}

int main() {
    solve();
    return 0;
}