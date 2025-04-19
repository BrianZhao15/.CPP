#include <iostream>
using namespace std;

void solve() {
    int N, K, C, P=0, COUNT=0;
    cin >> N >> K >> C;

    int HOLIDAYS[366]={0};

    for(int i=0; i<C; ++i) {
        int H;
        cin >> H;

        HOLIDAYS[H]++;
    }

    for(int j=1; j<=N; ++j) {
        if(HOLIDAYS[j]!=0) {
            P++;
            COUNT=0;
        }
        else {
            COUNT++;

            if(COUNT==K) {
                P++;
                COUNT=0;
            }
        }
    }

    cout << P;
}   

int main() {
    solve();
    return 0;
}