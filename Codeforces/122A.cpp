#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int luckyNums[]={4,44,47,74,77,444,447,474,477,744,747,774,777};

    bool lucky=false;
    
    for(int i=0; i<13; ++i) {
        if(n%luckyNums[i]==0) {
            lucky=true;
        }
    }

    if(lucky) {
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