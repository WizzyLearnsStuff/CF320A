#include<iostream>

using namespace std;

int main() {
	char expect = '1';

	char inp;
	int c4 = 0;
	while (cin >> inp) {
		if (inp != expect && inp != '1') {
			cout << "NO";
			return 0;
		}
		if (inp == '1') { expect = '4'; c4 = 0; }
		else if (inp == '4') {
			c4++;
			expect = c4 < 2 ? '4' : '1'; 
		}
	}
	cout << "YES";
}
