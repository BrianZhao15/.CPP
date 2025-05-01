#include <iostream>
using namespace std;

void solve() {
    string sequence;
    cin >> sequence;

    int Q=0, QA=0, QAQ=0;
    for(int i=0; i<sequence.size(); ++i) {
        if(sequence[i]=='Q') {
            ++Q;
            
            QAQ+=QA;
        }
        else if(sequence[i]=='A') {
            QA+=Q;
        }
    }

    cout << QAQ;
}

int main() {
    solve();
    return 0;
}