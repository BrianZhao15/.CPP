#include <iostream>
#include <cstring>
using namespace std;

void solve() {
    long maximum=0;
    long count=1;
    char s[101];

    cin.getline(s,sizeof(s));
    
    strcat(s,"A");

    for(int i=0; i<strlen(s); ++i) {
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y') {
            if(maximum<count) {
                maximum=count;

                count=1;
            }
            else {
                count=1;
            }
        }
        else {
            ++count;
        }
    }

    cout << maximum;
}

int main() {
    solve();
    return 0;
}