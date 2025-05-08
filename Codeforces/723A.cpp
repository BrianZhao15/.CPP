#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int coordinates[3];
    cin >> coordinates[0] >> coordinates[1] >> coordinates[2];

    sort(coordinates,coordinates+3);

    cout << coordinates[2]-coordinates[0];
}

int main() {
    solve();
    return 0;
}