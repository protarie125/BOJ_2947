#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

vi input;

bool check() {
	for (auto i = 0; i < 5; ++i) {
		if (input[i] != i + 1) {
			return false;
		}
	}

	return true;
}

void printVec() {
	for (const auto& x : input) {
		cout << x << ' ';
	}
	cout << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	input = vi(5);
	for (auto&& x : input) {
		cin >> x;
	}

	while (!check()) {
		for (auto i = 0; i < 4; ++i) {
			if (input[i + 1] < input[i]) {
				const auto temp = input[i];
				input[i] = input[i + 1];
				input[i + 1] = temp;
				printVec();
			}
		}
	}

	return 0;
}