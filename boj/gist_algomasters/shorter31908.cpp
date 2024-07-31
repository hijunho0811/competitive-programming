#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	unordered_map<string, vector<string>> um;

	for (string p, s; cin >> p >> s;) {
		if (s != "-")
			um[s].emplace_back(p);
	}

	int count = 0;

	for (const auto& p : um) {
		if (p.second.size() == 2)
			++count;
	}

	cout << count << '\n';

	if (count) {
		for (const auto& p : um) {
			if (p.second.size() == 2)
				cout << p.second[0] << ' ' << p.second[1] << '\n';
		}
	}
}