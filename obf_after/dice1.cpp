
#include <bits/stdc++.h>
 using namespace std;
 
 
#define ReplacementFor_rep(ReplacementFor_i, ReplacementFor_from, ReplacementFor_to) for (int ReplacementFor_i = ReplacementFor_from; ReplacementFor_i < int(ReplacementFor_to); ++ReplacementFor_i)
 
#define ReplacementFor_trav(a, x) for (auto& a : x)
 
#define all(x) x.begin(), x.end()
 
#define ReplacementFor_sz(x) (int)(x).size()
 typedef long long ReplacementFor_ll;
 typedef pair<int, int> ReplacementFor_pii;
 typedef vector<int> ReplacementFor_vi;
 
 typedef ReplacementFor_ll ReplacementFor_Res;
 
 struct ReplacementFor_Solver {
 	int N;
 	vector<array<int, 6>> ReplacementFor_v;
 
 	int ReplacementFor_matched = 0;
 	int ReplacementFor_len = 0;
 	ReplacementFor_vi ReplacementFor_lmatch, ReplacementFor_rmatch;
 	vector<ReplacementFor_vi> ReplacementFor_g;
 	vector<bool> ReplacementFor_seen;
 
 	void read() {
 		ReplacementFor_g.resize(1000001);
 		cin >> N;
 		ReplacementFor_v.resize(N);
 		ReplacementFor_rep(ReplacementFor_i,0,N) {
 			ReplacementFor_rep(ReplacementFor_j,0,6) {
 				cin >> ReplacementFor_v[ReplacementFor_i][ReplacementFor_j];
 				ReplacementFor_g[ReplacementFor_v[ReplacementFor_i][ReplacementFor_j]].push_back(ReplacementFor_i);
 			}
 		}
 		ReplacementFor_lmatch.assign(1000001, -1);
 		ReplacementFor_rmatch.assign(N, -1);
 	}
 
 	bool find(int ReplacementFor_j, const vector<ReplacementFor_vi>& ReplacementFor_g) {
 		if (ReplacementFor_rmatch[ReplacementFor_j] == -1) return 1;
 		ReplacementFor_seen[ReplacementFor_j] = 1;
 		int ReplacementFor_old = ReplacementFor_rmatch[ReplacementFor_j];
 		ReplacementFor_trav(ReplacementFor_e, ReplacementFor_g[ReplacementFor_old])
 			if (!ReplacementFor_seen[ReplacementFor_e] && find(ReplacementFor_e, ReplacementFor_g)) {
 				ReplacementFor_lmatch[ReplacementFor_old] = ReplacementFor_e;
 				ReplacementFor_rmatch[ReplacementFor_e] = ReplacementFor_old;
 				return 1;
 			}
 		return 0;
 	}
 
 	














 
 	void ReplacementFor_extend(int ReplacementFor_i) {
 		ReplacementFor_seen.assign(N, 0);
 		ReplacementFor_trav(ReplacementFor_j,ReplacementFor_g[ReplacementFor_i])
 			if (find(ReplacementFor_j, ReplacementFor_g)) {
 				ReplacementFor_lmatch[ReplacementFor_i] = ReplacementFor_j;
 				ReplacementFor_rmatch[ReplacementFor_j] = ReplacementFor_i;
 				++ReplacementFor_matched;
 				break;
 			}
 	}
 
 	void ReplacementFor_reduce(int x) {
 		if (ReplacementFor_lmatch[x] == -1) return;
 		int ReplacementFor_r = ReplacementFor_lmatch[x];
 		ReplacementFor_rmatch[ReplacementFor_r] = -1;
 		--ReplacementFor_matched;
 
 		ReplacementFor_seen.assign(N, 0);
 		for (int ReplacementFor_i = x+ReplacementFor_len-1; ReplacementFor_i >= x+1; --ReplacementFor_i) {
 			ReplacementFor_trav(ReplacementFor_j,ReplacementFor_g[ReplacementFor_i])
 				if (ReplacementFor_lmatch[ReplacementFor_i] == -1 && find(ReplacementFor_j, ReplacementFor_g)) {
 					ReplacementFor_lmatch[ReplacementFor_i] = ReplacementFor_j;
 					ReplacementFor_rmatch[ReplacementFor_j] = ReplacementFor_i;
 					++ReplacementFor_matched;
 					return;
 				}
 		}
 	}
 
 	ReplacementFor_Res ReplacementFor_solve() {
 		int ReplacementFor_i = 0, ReplacementFor_j = 0;
 		int ReplacementFor_res = 1;
 		while (ReplacementFor_i < 1000001) {
 			while (ReplacementFor_j < 1000001) {
 				int ReplacementFor_old = ReplacementFor_j++;
 				ReplacementFor_extend(ReplacementFor_old);
 				ReplacementFor_len = ReplacementFor_j - ReplacementFor_i;
 				if (ReplacementFor_matched == ReplacementFor_len)
 					ReplacementFor_res = max(ReplacementFor_res, ReplacementFor_j - ReplacementFor_i);
 				else break;
 			}
 			while (ReplacementFor_i < ReplacementFor_j) {
 				int ReplacementFor_old = ReplacementFor_i++;
 				ReplacementFor_reduce(ReplacementFor_old);
 				ReplacementFor_len = ReplacementFor_j - ReplacementFor_i;
 				if (ReplacementFor_matched == ReplacementFor_len) break;
 			}
 		}
 		return ReplacementFor_res;
 	}
 };
 
 void ReplacementFor_readSolved(vector<string>& s, const char* ReplacementFor_fname) {
 	ifstream ReplacementFor_fin(ReplacementFor_fname);
 	string line;
 	while (getline(ReplacementFor_fin, line)) {
 		if (line.empty()) continue;
 		ReplacementFor_assert(line.substr(0, 6) == "Case #");
 		istringstream ReplacementFor_iss(line.substr(6));
 		int ReplacementFor_cs;
 		char ReplacementFor_sep;
 		string val;
 		ReplacementFor_iss >> ReplacementFor_cs >> ReplacementFor_sep >> val;
 		s[ReplacementFor_cs-1] = val;
 		{ cerr << "Case #" << ReplacementFor_cs << ": " << val << endl; }
 	}
 }
 
 void ReplacementFor_printsol(ostream& cout, ReplacementFor_Res x) {
 	cout << x << endl;
 }
 
 int main() {
 	cin.sync_with_stdio(false);
 	cin.exceptions(cin.failbit | cin.eofbit | cin.badbit);
 	cin.tie(0);
 	int T;
 	cin >> T;
 	vector<ReplacementFor_Solver> ReplacementFor_vec(T);
 	vector<ReplacementFor_Res> ReplacementFor_sol(T);
 	vector<string> ReplacementFor_oldsol(T);
 	
 	ReplacementFor_rep(ReplacementFor_i,0,T) ReplacementFor_vec[ReplacementFor_i].read();
 
#pragma omp parallel for
 	ReplacementFor_rep(ReplacementFor_i,0,T) {
 		if (ReplacementFor_oldsol[ReplacementFor_i].empty()) {
 			ReplacementFor_sol[ReplacementFor_i] = ReplacementFor_vec[ReplacementFor_i].ReplacementFor_solve();
 
#pragma omp critical
 			{ cerr << "Case #" << ReplacementFor_i+1 << ": "; ReplacementFor_printsol(cerr, ReplacementFor_sol[ReplacementFor_i]); }
 		}
 	}
 
 	ReplacementFor_rep(ReplacementFor_i,0,T) {
 		cout << "Case #" << ReplacementFor_i+1 << ": ";
 		if (ReplacementFor_oldsol[ReplacementFor_i].empty()) {
 			ReplacementFor_printsol(cout, ReplacementFor_sol[ReplacementFor_i]);
 		} else {
 			cout << ReplacementFor_oldsol[ReplacementFor_i] << endl;
 		}
 	}
 }

