#include <iostream>
using namespace std;

void solve() {
    char matrix[3][4];

    for(int i=1; i<=3; ++i) {
        for(int j=1; j<4; ++j) {
            cin >> matrix[i][j];
        }
    }

    if(matrix[1][1]==matrix[3][3]&&matrix[1][2]==matrix[3][2]&&matrix[1][3]==matrix[3][1]&&matrix[2][1]==matrix[2][3]) {
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