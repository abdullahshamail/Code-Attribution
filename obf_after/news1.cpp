
#include <bits/stdc++.h>
 using namespace std;
 
 
#define ReplacementFor_rep(ReplacementFor_i, ReplacementFor_from, ReplacementFor_to) for (int ReplacementFor_i = ReplacementFor_from; ReplacementFor_i < int(ReplacementFor_to); ++ReplacementFor_i)
 
#define ReplacementFor_trav(a, x) for (auto& a : x)
 
#define all(x) x.begin(), x.end()
 
#define ReplacementFor_sz(x) (int)(x).size()
 typedef long long ReplacementFor_ll;
 typedef pair<int, int> ReplacementFor_pii;
 typedef vector<int> ReplacementFor_vi;
 
 ReplacementFor_vi ReplacementFor_seen;
 ReplacementFor_vi ReplacementFor_seenn;
 ReplacementFor_vi ReplacementFor_activeedges;
 ReplacementFor_vi ReplacementFor_co;
 ReplacementFor_vi ReplacementFor_down;
 ReplacementFor_vi ReplacementFor_depth;
 vector<vector<ReplacementFor_pii>> ReplacementFor_ed;
 
 void ReplacementFor_dfs(int at, int ReplacementFor_par, int ReplacementFor_dep) {
 	if (ReplacementFor_par != -1) {
 		ReplacementFor_seen[ReplacementFor_par] = 1;
 		ReplacementFor_down[ReplacementFor_par] = at;
 		ReplacementFor_activeedges.push_back(ReplacementFor_par);
 	}
 
 	if (ReplacementFor_seenn[at]) {
 		ReplacementFor_assert(ReplacementFor_depth[at] != -1);
 		int k = ReplacementFor_dep - ReplacementFor_depth[at];
 		ReplacementFor_assert(k <= ReplacementFor_sz(ReplacementFor_activeedges));
 		ReplacementFor_rep(ReplacementFor_i,0,k) {
 			int ReplacementFor_ed = ReplacementFor_activeedges[ReplacementFor_sz(ReplacementFor_activeedges)-1 - ReplacementFor_i];
 			ReplacementFor_co[ReplacementFor_ed]++;
 		}
 		ReplacementFor_activeedges.pop_back();
 		return;
 	}
 
 	ReplacementFor_seenn[at] = 1;
 	ReplacementFor_depth[at] = ReplacementFor_dep;
 
 	ReplacementFor_trav(ReplacementFor_pa, ReplacementFor_ed[at]) if (!ReplacementFor_seen[ReplacementFor_pa.second]) {
 		ReplacementFor_dfs(ReplacementFor_pa.first, ReplacementFor_pa.second, ReplacementFor_dep+1);
 	}
 	if (ReplacementFor_par != -1) {
 		ReplacementFor_activeedges.pop_back();
 	}
 	ReplacementFor_depth[at] = -1;
 }
 
 



























































 
 void ReplacementFor_solve() {
 	int N, ReplacementFor_E;
 	cin >> N >> ReplacementFor_E;
 	ReplacementFor_ed.clear();
 	ReplacementFor_ed.resize(N);
 	ReplacementFor_seen.assign(ReplacementFor_E, 0);
 	ReplacementFor_seenn.assign(N, 0);
 	ReplacementFor_depth.assign(N, -1);
 	ReplacementFor_assert(ReplacementFor_activeedges.empty());
 	ReplacementFor_co.assign(ReplacementFor_E, 0);
 	ReplacementFor_down.assign(ReplacementFor_E, -1);
 	vector<ReplacementFor_pii> ReplacementFor_eds;
 	ReplacementFor_rep(ReplacementFor_i,0,ReplacementFor_E) {
 		int a, b;
 		cin >> a >> b;
 		--a, --b;
 		ReplacementFor_ed[a].emplace_back(b, ReplacementFor_i);
 		ReplacementFor_ed[b].emplace_back(a, ReplacementFor_i);
 		ReplacementFor_eds.emplace_back(a, b);
 	}
 
 	ReplacementFor_rep(ReplacementFor_i,0,N) {
 		if (!ReplacementFor_seenn[ReplacementFor_i]) {
 			ReplacementFor_dfs(ReplacementFor_i, -1, 0);
 		}
 	}
 
 	bool fail = 0;
 	ReplacementFor_rep(ReplacementFor_i,0,ReplacementFor_E) if (ReplacementFor_co[ReplacementFor_i] == 0) fail = 1;
 	if (fail) {
 		cout << "IMPOSSIBLE" << endl;
 	} else {
 		ReplacementFor_rep(ReplacementFor_i,0,ReplacementFor_E) {
 			int c = ReplacementFor_co[ReplacementFor_i];
 			if (ReplacementFor_down[ReplacementFor_i] != ReplacementFor_eds[ReplacementFor_i].second) c *= -1;
 			cout << c << ((char)(0x1a8a+1356-0x1fb6));
 		}
 		cout << endl;
 	}
 }
 
 int main() {
 	cin.sync_with_stdio(false);
 	cin.exceptions(cin.failbit | cin.eofbit | cin.badbit);
 	cin.tie(0);
 	int T;
 	cin >> T;
 	ReplacementFor_rep(ReplacementFor_i,0,T) {
 		cout << "Case #" << ReplacementFor_i+1 << ": ";
 		ReplacementFor_solve();
 	}
 }

