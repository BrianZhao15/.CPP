#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int stairways = 1;
    vector<int> pronounced (n), steps;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        pronounced.push_back(a);
        
        if (a == 1 && i != 0) {
            stairways += 1;

            if (pronounced.size() >= 2) {
                steps.push_back(pronounced[pronounced.size() - 2]);
            }
        }
        if (a == 1 && i == (n - 1)) {
            steps.push_back(1);
        }
        else if (a != 1 && i == (n - 1)) {
            steps.push_back(a);
        }
    }

    cout << stairways << "\n";

    for (int j = 0; j < stairways - 1; j++) {
        cout << steps[j] << " ";
    }

    cout << steps[steps.size() - 1];
}

int main() {
    solve();
    return 0;
}