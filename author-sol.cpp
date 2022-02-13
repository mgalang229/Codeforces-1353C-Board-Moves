#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// the answer goes like this:
		// note: the last expression is ((n - 1) / 2) ^ 2 * 8 due to this pattern:
		// 2(16) = 2(2 * 8) = 2 * 2 * 8 = (2 ^ 2) * 8
		// 3(34) = 3(3 * 8) = 3 * 3 * 8 = (3 ^ 2) * 8
		// ...
		// ((n - 1) / 2) ((n - 1) / 2) * 8 = (((n - 1) / 2) ^ 2) * 8
	
		// = 1(8) + 2(16)	+ 3(24) + ...  + ((n - 1) / 2) ^ 2 * 8
		// = 8 (1 + 4 + 9 + ... + ((n - 1) / 2) ^ 2)
		// calculate the sum of squares from 1 to (n - 1) / 2
		// and multiply the final answer with 8
		long long ans = 0;
		for (int i = 1; i <= n / 2; i++) {
			ans += (i * 1LL * i);
		}
		cout << ans * 8 << '\n';
	}
	return 0;
}
