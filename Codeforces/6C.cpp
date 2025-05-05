#include <iostream>
#include <vector>
#include <algorithm>

void solve() {
    int long n, b, a, t=0, B=0, A=0;
    std:: cin >> n;

    std:: vector<int long> time(n,0);

    for(int i=0; i<n; ++i) {
        std:: cin >> time[i];

        t+=time[i];
    }
    
    b=0,a=0;

    for(int j=n-1; j>=0; --j){
        if(2*(b+time[j])<=t) {
            b+=time[j];

            ++B;
        }
        else {
            break;
        }
    }

    for(int k=0; k<n; ++k){
        if(2*(a+time[k])<=t) {
            a+=time[k];

            ++A;
        }
        else {
            break;
        }
    }

    if(n>B+A) {
        b<a?++B:++A;
    }

    std:: cout << A << " " << B;
}

int main() {
    solve();
    return 0;
}