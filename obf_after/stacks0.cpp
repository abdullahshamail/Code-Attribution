
#include <bits/stdc++.h>
 using namespace std;
 
 
#define ReplacementFor_rep(ReplacementFor_i, ReplacementFor_from, ReplacementFor_to) for (int ReplacementFor_i = ReplacementFor_from; ReplacementFor_i < int(ReplacementFor_to); ++ReplacementFor_i)
 
#define ReplacementFor_trav(a, x) for (auto& a : x)
 
#define all(x) x.begin(), x.end()
 
#define ReplacementFor_sz(x) (int)(x).size()
 typedef long long ReplacementFor_ll;
 typedef pair<int, int> ReplacementFor_pii;
 typedef vector<int> ReplacementFor_vi;
 
 vector<vector<ReplacementFor_pii>> ReplacementFor_sts2;
 vector<vector<ReplacementFor_pii>> ReplacementFor_sts;
 
 map<vector<vector<ReplacementFor_pii>>, int> ReplacementFor_mem;
 
 bool ReplacementFor_rec(vector<vector<ReplacementFor_pii>> ReplacementFor_sts) {
 	int& out = ReplacementFor_mem[ReplacementFor_sts];
 	if (out != 0) return (out == 2);
 
 	bool fail = false;
 	ReplacementFor_rep(ReplacementFor_i,0,ReplacementFor_sz(ReplacementFor_sts)) {
 		if (ReplacementFor_sts[ReplacementFor_i].size() > 1) fail = true;
 	}
 	if (!fail) {
 		out = 2;
 		return true;
 	}
 
 	int empty = -1;
 	ReplacementFor_rep(ReplacementFor_i,0,ReplacementFor_sz(ReplacementFor_sts)) {
 		if (ReplacementFor_sts[ReplacementFor_i].size() == 0) empty = ReplacementFor_i;
 	}
 
 	if (empty != -1) {
 		ReplacementFor_rep(ReplacementFor_i,0,ReplacementFor_sz(ReplacementFor_sts)) {
 			if (ReplacementFor_sts[ReplacementFor_i].size() > 1) {
 				ReplacementFor_pii x = ReplacementFor_sts[ReplacementFor_i].back();
 				ReplacementFor_sts[ReplacementFor_i].pop_back();
 				ReplacementFor_sts[empty].push_back(x);
 				if (ReplacementFor_rec(ReplacementFor_sts)) {
 					out = 2;
 					return true;
 				}
 				ReplacementFor_sts[empty].pop_back();
 				ReplacementFor_sts[ReplacementFor_i].push_back(x);
 			}
 		}
 	}
 
 	ReplacementFor_rep(ReplacementFor_i,0,ReplacementFor_sz(ReplacementFor_sts)) {
 		ReplacementFor_rep(ReplacementFor_j,0,ReplacementFor_sz(ReplacementFor_sts)) if (ReplacementFor_i != ReplacementFor_j) {
 			if (!ReplacementFor_sts[ReplacementFor_i].empty() && !ReplacementFor_sts[ReplacementFor_j].empty() && ReplacementFor_sts[ReplacementFor_i].back().second == ReplacementFor_sts[ReplacementFor_j].back().second) {
 				if (ReplacementFor_sts[ReplacementFor_i].back().first < ReplacementFor_sts[ReplacementFor_j].back().first) {
 					ReplacementFor_pii x = ReplacementFor_sts[ReplacementFor_i].back();
 					ReplacementFor_sts[ReplacementFor_i].pop_back();
 					if (ReplacementFor_rec(ReplacementFor_sts)) {
 						out = 2;
 						return true;
 					}
 					ReplacementFor_sts[ReplacementFor_i].push_back(x);
 				}
 			}
 		}
 	}
 
 	out = 1;
 	return false;
 }
 
 void ReplacementFor_solve() {
 	int N, C;
 	cin >> N >> C;
 
 	ReplacementFor_sts.clear();
 	ReplacementFor_rep(ReplacementFor_i,0,N) {
 		int ReplacementFor_ind;
 		cin >> ReplacementFor_ind;
 		ReplacementFor_sts.push_back(ReplacementFor_sts2[ReplacementFor_ind]);
 	}
 
 	if (ReplacementFor_rec(ReplacementFor_sts)) {
 		cout << "POSSIBLE" << endl;
 	} else {
 		cout << "IMPOSSIBLE" << endl;
 	}
 }
 
 int main() {
 	cin.sync_with_stdio(false);
 	cin.exceptions(cin.failbit | cin.eofbit | cin.badbit);
 	cin.tie(0);
 	int P;
 	cin >> P;
 	ReplacementFor_rep(ReplacementFor_i,0,P) {
 		int C;
 		cin >> C;
 		vector<ReplacementFor_pii> ReplacementFor_st(C);
 		ReplacementFor_rep(ReplacementFor_j,0,C)
 			cin >> ReplacementFor_st[ReplacementFor_j].first >> ReplacementFor_st[ReplacementFor_j].second; 
 		reverse(all(ReplacementFor_st));
 		ReplacementFor_sts2.push_back(ReplacementFor_st);
 	}
 
 	int T;
 	cin >> T;
 	ReplacementFor_rep(ReplacementFor_i,0,T) {
 		cout << "Case #" << ReplacementFor_i+1 << ": ";
 		ReplacementFor_solve();
 	}
 }

