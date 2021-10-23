#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	cin >> s;
	// It suffices to find the length of largest prefix which contains only 1's
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			cnt++;
		} else {
			break;
		}
	}
	cout << min(cnt + 1, n) << '\n';
	return 0;
}
