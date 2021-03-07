#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int k;
	cin >> k;
	int highest = INT_MIN;
	// If all ranks are 25 or less, then the answer is 0, since it's possible that all 
	// of the top 25 accepted the invitation. Otherwise, notice that the highest invited 
	// rank is initially 25, and increases by 1 every time a contestant declines. Therefore 
	// the answer is simply the highest rank minus 25.
	for (int i = 0; i < k; i++) {
		int r;
		cin >> r;
		highest = max(highest, r);
	}
	cout << (highest <= 25 ? 0 : highest - 25) << '\n';
	return 0;
}
