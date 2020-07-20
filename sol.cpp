#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int x, y;
	cin >> x >> y;
	if(x - y > 0) cout << x - y;
	else cout << 0;
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	//test_case();
	return 0;
}
