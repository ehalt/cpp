
// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_1_D


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define doura() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define sesh '\n';

void uttor() {
	int n, q;
	if (!(cin >> n >> q)) return;

	vector<vector<long long>> arr(n);

	while (q--) {
		int op, t;
		cin >> op >> t;

		if(op == 0) {
			ll x;
			cin >> x;
			arr[t].push_back(x);
		}
		else if(op == 1) {
			for (int i = 0; i < arr[t].size(); i++) {
				cout << arr[t][i] << (i == arr[t].size() - 1 ? "" : " ");
			}
			cout << sesh;
		}
		else if(op == 2) {
			arr[t].clear();
		}
	}
}

int main() {
	doura();
	
	uttor();

	return 0;
}
