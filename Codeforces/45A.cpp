#include <iostream>
using namespace std;

void solve() {
	string m;
	cin >> m;

    int l;
    cin >> l;

    string months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};

    int month;
	for(int i=0; i<12; ++i) {
		if(m==months[i]) {
			month=i;
			break;
		}
	}

	cout << months[(month+l)%12];
}

int main() {
	solve();
    return 0;
}