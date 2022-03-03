#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

vector<ll> memo;

ll fibo(int n) {
	if (0 <= memo[n]) {
		return memo[n];
	}

	memo[n] = fibo(n - 1) + fibo(n - 2);

	return memo[n];
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	memo = vector<ll>(n + 2, -1);
	memo[0] = 0;
	memo[1] = 1;

	cout << 2 * (fibo(n) + fibo(n + 1));

	return 0;
}