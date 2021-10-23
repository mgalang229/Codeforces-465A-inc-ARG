#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	cin >> s;
	string save = s;
	for (int i = 0; i < n; i++) {
		// Break the loop once we encounter a 0 (since it will not modify the next bit anymore).
		// However, if the current bit is 1, then we need to set it to 0 and modify the next bit.
		if (s[i] == '0') {
			s[i] = '1';
			break;
		} else { 
			s[i] = '0';
		}
	}
	// Count the no. of the bits that were changed.
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cnt += (s[i] != save[i]);
	}
	cout << cnt << '\n';
	return 0;
}
