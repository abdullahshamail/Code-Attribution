
#include <bits/stdc++.h>
 using namespace std;
 
 
#define ReplacementFor_rep(ReplacementFor_i, ReplacementFor_from, ReplacementFor_to) for (int ReplacementFor_i = ReplacementFor_from; ReplacementFor_i < int(ReplacementFor_to); ++ReplacementFor_i)
 
#define ReplacementFor_trav(a, x) for (auto& a : x)
 
#define all(x) x.begin(), x.end()
 
#define ReplacementFor_sz(x) (int)(x).size()
 typedef long long ReplacementFor_ll;
 typedef pair<int, int> ReplacementFor_pii;
 typedef vector<int> ReplacementFor_vi;
 
 typedef vector<ReplacementFor_ll> ReplacementFor_vd;
 bool ReplacementFor_zero(ReplacementFor_ll x) { return x == 0; }
 ReplacementFor_ll ReplacementFor_MinCostMatching(const vector<ReplacementFor_vd>& ReplacementFor_cost, ReplacementFor_vi& ReplacementFor_L, ReplacementFor_vi& ReplacementFor_R) {
 	int n = ReplacementFor_sz(ReplacementFor_cost), ReplacementFor_mated = 0;
 	ReplacementFor_vd ReplacementFor_dist(n), ReplacementFor_u(n), ReplacementFor_v(n);
 	ReplacementFor_vi ReplacementFor_dad(n), ReplacementFor_seen(n);
 
 	
 	ReplacementFor_rep(ReplacementFor_i,0,n) {
 		ReplacementFor_u[ReplacementFor_i] = ReplacementFor_cost[ReplacementFor_i][0];
 		ReplacementFor_rep(ReplacementFor_j,1,n) ReplacementFor_u[ReplacementFor_i] = min(ReplacementFor_u[ReplacementFor_i], ReplacementFor_cost[ReplacementFor_i][ReplacementFor_j]);
 	}
 	ReplacementFor_rep(ReplacementFor_j,0,n) {
 		ReplacementFor_v[ReplacementFor_j] = ReplacementFor_cost[0][ReplacementFor_j] - ReplacementFor_u[0];
 		ReplacementFor_rep(ReplacementFor_i,1,n) ReplacementFor_v[ReplacementFor_j] = min(ReplacementFor_v[ReplacementFor_j], ReplacementFor_cost[ReplacementFor_i][ReplacementFor_j] - ReplacementFor_u[ReplacementFor_i]);
 	}
 
 	
 	ReplacementFor_L = ReplacementFor_vi(n, -1);
 	ReplacementFor_R = ReplacementFor_vi(n, -1);
 	ReplacementFor_rep(ReplacementFor_i,0,n) ReplacementFor_rep(ReplacementFor_j,0,n) {
 		if (ReplacementFor_R[ReplacementFor_j] != -1) continue;
 		if (ReplacementFor_zero(ReplacementFor_cost[ReplacementFor_i][ReplacementFor_j] - ReplacementFor_u[ReplacementFor_i] - ReplacementFor_v[ReplacementFor_j])) {
 			ReplacementFor_L[ReplacementFor_i] = ReplacementFor_j;
 			ReplacementFor_R[ReplacementFor_j] = ReplacementFor_i;
 			ReplacementFor_mated++;
 			break;
 		}
 	}
 
 	for (; ReplacementFor_mated < n; ReplacementFor_mated++) { 
 		int s = 0;
 		while (ReplacementFor_L[s] != -1) s++;
 		fill(all(ReplacementFor_dad), -1);
 		fill(all(ReplacementFor_seen), 0);
 		ReplacementFor_rep(k,0,n)
 			ReplacementFor_dist[k] = ReplacementFor_cost[s][k] - ReplacementFor_u[s] - ReplacementFor_v[k];
 
 		int ReplacementFor_j = 0;
 		for (;;) { 
 			ReplacementFor_j = -1;
 			ReplacementFor_rep(k,0,n){
 				if (ReplacementFor_seen[k]) continue;
 				if (ReplacementFor_j == -1 || ReplacementFor_dist[k] < ReplacementFor_dist[ReplacementFor_j]) ReplacementFor_j = k;
 			}
 			ReplacementFor_seen[ReplacementFor_j] = 1;
 			int ReplacementFor_i = ReplacementFor_R[ReplacementFor_j];
 			if (ReplacementFor_i == -1) break;
 			ReplacementFor_rep(k,0,n) { 
 				if (ReplacementFor_seen[k]) continue;
 				auto ReplacementFor_new_dist = ReplacementFor_dist[ReplacementFor_j] + ReplacementFor_cost[ReplacementFor_i][k] - ReplacementFor_u[ReplacementFor_i] - ReplacementFor_v[k];
 				if (ReplacementFor_dist[k] > ReplacementFor_new_dist) {
 					ReplacementFor_dist[k] = ReplacementFor_new_dist;
 					ReplacementFor_dad[k] = ReplacementFor_j;
 				}
 			}
 		}
 
 		
 		ReplacementFor_rep(k,0,n) {
 			if (k == ReplacementFor_j || !ReplacementFor_seen[k]) continue;
 			auto ReplacementFor_w = ReplacementFor_dist[k] - ReplacementFor_dist[ReplacementFor_j];
 			ReplacementFor_v[k] += ReplacementFor_w, ReplacementFor_u[ReplacementFor_R[k]] -= ReplacementFor_w;
 		}
 		ReplacementFor_u[s] += ReplacementFor_dist[ReplacementFor_j];
 
 		
 		while (ReplacementFor_dad[ReplacementFor_j] >= 0) {
 			int ReplacementFor_d = ReplacementFor_dad[ReplacementFor_j];
 			ReplacementFor_R[ReplacementFor_j] = ReplacementFor_R[ReplacementFor_d];
 			ReplacementFor_L[ReplacementFor_R[ReplacementFor_j]] = ReplacementFor_j;
 			ReplacementFor_j = ReplacementFor_d;
 		}
 		ReplacementFor_R[ReplacementFor_j] = s;
 		ReplacementFor_L[s] = ReplacementFor_j;
 	}
 
 	auto value = ReplacementFor_vd(1)[0];
 	ReplacementFor_rep(ReplacementFor_i,0,n) value += ReplacementFor_cost[ReplacementFor_i][ReplacementFor_L[ReplacementFor_i]];
 	return value;
 }
 
 int ReplacementFor_R, C;
 vector<string> ReplacementFor_board;
 
 template<class F>
 void ReplacementFor_forh(int ReplacementFor_ni, int ReplacementFor_nj, F f) {
 	f(ReplacementFor_pii(ReplacementFor_ni, ReplacementFor_nj));
 
 	ReplacementFor_pii ReplacementFor_pa = {ReplacementFor_ni, ReplacementFor_nj};
 	for (;;) {
 		ReplacementFor_pa.second--;
 		if (ReplacementFor_pa.second < 0 || ReplacementFor_board[ReplacementFor_pa.first][ReplacementFor_pa.second] == ((char)(0x23b0+542-0x25ab))) break;
 		f(ReplacementFor_pa);
 	}
 
 	ReplacementFor_pa = {ReplacementFor_ni, ReplacementFor_nj};
 	for (;;) {
 		ReplacementFor_pa.second++;
 		if (ReplacementFor_pa.second >= C || ReplacementFor_board[ReplacementFor_pa.first][ReplacementFor_pa.second] == ((char)(0xbb9+2462-0x1534))) break;
 		f(ReplacementFor_pa);
 	}
 }
 
 template<class F>
 void ReplacementFor_forv(int ReplacementFor_ni, int ReplacementFor_nj, F f) {
 	f(ReplacementFor_pii(ReplacementFor_ni, ReplacementFor_nj));
 
 	ReplacementFor_pii ReplacementFor_pa = {ReplacementFor_ni, ReplacementFor_nj};
 	for (;;) {
 		ReplacementFor_pa.first--;
 		if (ReplacementFor_pa.first < 0 || ReplacementFor_board[ReplacementFor_pa.first][ReplacementFor_pa.second] == ((char)(0x1d87+1785-0x245d))) break;
 		f(ReplacementFor_pa);
 	}
 
 	ReplacementFor_pa = {ReplacementFor_ni, ReplacementFor_nj};
 	for (;;) {
 		ReplacementFor_pa.first++;
 		if (ReplacementFor_pa.first >= ReplacementFor_R || ReplacementFor_board[ReplacementFor_pa.first][ReplacementFor_pa.second] == ((char)(0xef3+5505-0x2451))) break;
 		f(ReplacementFor_pa);
 	}
 }
 
 void ReplacementFor_solve(int ReplacementFor_cs) {
 	int M;
 	cin >> C >> ReplacementFor_R >> M;
 	ReplacementFor_board.assign(ReplacementFor_R, string());
 	ReplacementFor_rep(ReplacementFor_i,0,ReplacementFor_R) cin >> ReplacementFor_board[ReplacementFor_i];
 	int ReplacementFor_solid = 0, ReplacementFor_turid = 0;
 	vector<ReplacementFor_vi> ReplacementFor_sols(ReplacementFor_R, ReplacementFor_vi(C, -1));
 	vector<ReplacementFor_vi> ReplacementFor_turs(ReplacementFor_R, ReplacementFor_vi(C, -1));
 	vector<ReplacementFor_pii> ReplacementFor_solpa, ReplacementFor_turpa;
 	ReplacementFor_rep(ReplacementFor_i,0,ReplacementFor_R) ReplacementFor_rep(ReplacementFor_j,0,C) {
 		char c = ReplacementFor_board[ReplacementFor_i][ReplacementFor_j];
 		if (c == ((char)(0x453+2700-0xe8c))) ReplacementFor_sols[ReplacementFor_i][ReplacementFor_j] = ReplacementFor_solid++, ReplacementFor_solpa.emplace_back(ReplacementFor_i, ReplacementFor_j);
 		if (c == ((char)(0x1fb+1726-0x865))) ReplacementFor_turs[ReplacementFor_i][ReplacementFor_j] = ReplacementFor_turid++, ReplacementFor_turpa.emplace_back(ReplacementFor_i, ReplacementFor_j);
 	}
 
 	ReplacementFor_ll ReplacementFor_inf = 1LL << 29;
 	vector<ReplacementFor_vd> ReplacementFor_mat(max(ReplacementFor_solid, ReplacementFor_turid), ReplacementFor_vd(max(ReplacementFor_solid, ReplacementFor_turid), ReplacementFor_inf));
 	vector<vector<ReplacementFor_pii>> ReplacementFor_match(ReplacementFor_solid, vector<ReplacementFor_pii>(ReplacementFor_turid, ReplacementFor_pii(-3, -3)));
 
 	ReplacementFor_rep(ReplacementFor_i,0,ReplacementFor_R) ReplacementFor_rep(ReplacementFor_j,0,C) {
 		if (ReplacementFor_board[ReplacementFor_i][ReplacementFor_j] == ((char)(0xdfb+3550-0x1b86))) {
 			int ReplacementFor_sol = ReplacementFor_sols[ReplacementFor_i][ReplacementFor_j];
 			queue<ReplacementFor_pii> ReplacementFor_q;
 			vector<ReplacementFor_vi> ReplacementFor_dists(ReplacementFor_R, ReplacementFor_vi(C, INT_MAX));
 			ReplacementFor_dists[ReplacementFor_i][ReplacementFor_j] = 0;
 			ReplacementFor_q.push({ReplacementFor_i,ReplacementFor_j});
 			while (!ReplacementFor_q.empty()) {
 				ReplacementFor_pii ReplacementFor_pa = ReplacementFor_q.front();
 				ReplacementFor_q.pop();
 				int ReplacementFor_d = ReplacementFor_dists[ReplacementFor_pa.first][ReplacementFor_pa.second];
 				const int ReplacementFor_DX[4] = {-1,1,0,0};
 				const int ReplacementFor_DY[4] = {0,0,1,-1};
 				ReplacementFor_rep(ReplacementFor_D,0,4) {
 					int ReplacementFor_ni = ReplacementFor_pa.first + ReplacementFor_DX[ReplacementFor_D];
 					int ReplacementFor_nj = ReplacementFor_pa.second + ReplacementFor_DY[ReplacementFor_D];
 					if (ReplacementFor_ni < 0 || ReplacementFor_nj < 0 || ReplacementFor_ni >= ReplacementFor_R || ReplacementFor_nj >= C) continue;
 					if (ReplacementFor_board[ReplacementFor_ni][ReplacementFor_nj] == ((char)(0xea0+6211-0x26c0))) continue;
 					if (ReplacementFor_dists[ReplacementFor_ni][ReplacementFor_nj] != INT_MAX) continue;
 					if (ReplacementFor_d + 1 > M) continue;
 					ReplacementFor_dists[ReplacementFor_ni][ReplacementFor_nj] = ReplacementFor_d + 1;
 					ReplacementFor_q.push({ReplacementFor_ni, ReplacementFor_nj});
 				}
 			}
 
 			vector<vector<pair<int, ReplacementFor_pii>> > ReplacementFor_besth(ReplacementFor_R, vector<pair<int, ReplacementFor_pii>>(C, make_pair(-1, ReplacementFor_pii(-1, -1)))), ReplacementFor_bestv = ReplacementFor_besth;
 			ReplacementFor_rep(ReplacementFor_ni,0,ReplacementFor_R) ReplacementFor_rep(ReplacementFor_nj,0,C) if (ReplacementFor_board[ReplacementFor_ni][ReplacementFor_nj] == ((char)(0x26c+2732-0xcc4))) {
 				if (ReplacementFor_besth[ReplacementFor_ni][ReplacementFor_nj].first == -1) {
 					pair<int, ReplacementFor_pii> ReplacementFor_best{INT_MAX, ReplacementFor_pii(-1, -1)};
 					ReplacementFor_forh(ReplacementFor_ni, ReplacementFor_nj, [&](ReplacementFor_pii ReplacementFor_pa) {
 						ReplacementFor_best = min(ReplacementFor_best, pair<int, ReplacementFor_pii>{ReplacementFor_dists[ReplacementFor_pa.first][ReplacementFor_pa.second], ReplacementFor_pa});
 					});
 					
 					ReplacementFor_forh(ReplacementFor_ni, ReplacementFor_nj, [&](ReplacementFor_pii ReplacementFor_pa) {
 						ReplacementFor_besth[ReplacementFor_pa.first][ReplacementFor_pa.second] = ReplacementFor_best;
 					});
 				}
 				if (ReplacementFor_bestv[ReplacementFor_ni][ReplacementFor_nj].first == -1) {
 					pair<int, ReplacementFor_pii> ReplacementFor_best{INT_MAX, ReplacementFor_pii(-1, -1)};
 					ReplacementFor_forv(ReplacementFor_ni, ReplacementFor_nj, [&](ReplacementFor_pii ReplacementFor_pa) {
 						ReplacementFor_best = min(ReplacementFor_best, pair<int, ReplacementFor_pii>{ReplacementFor_dists[ReplacementFor_pa.first][ReplacementFor_pa.second], ReplacementFor_pa});
 					});
 					
 					ReplacementFor_forv(ReplacementFor_ni, ReplacementFor_nj, [&](ReplacementFor_pii ReplacementFor_pa) {
 						ReplacementFor_bestv[ReplacementFor_pa.first][ReplacementFor_pa.second] = ReplacementFor_best;
 					});
 				}
 
 				pair<int, ReplacementFor_pii> ReplacementFor_di = min(ReplacementFor_besth[ReplacementFor_ni][ReplacementFor_nj], ReplacementFor_bestv[ReplacementFor_ni][ReplacementFor_nj]);
 				if (ReplacementFor_di.first != INT_MAX) {
 					int ReplacementFor_tur = ReplacementFor_turs[ReplacementFor_ni][ReplacementFor_nj];
 					ReplacementFor_mat[ReplacementFor_sol][ReplacementFor_tur] = ReplacementFor_di.first;
 					ReplacementFor_match[ReplacementFor_sol][ReplacementFor_tur] = ReplacementFor_di.second;
 					
 					
 				}
 			}
 		}
 	}
 
 	ReplacementFor_vi ReplacementFor_L, ReplacementFor_R_;
 	ReplacementFor_ll ReplacementFor_cost = ReplacementFor_MinCostMatching(ReplacementFor_mat, ReplacementFor_L, ReplacementFor_R_);
 	int bad = (int)(ReplacementFor_cost >> 29);
 	int ReplacementFor_valid = max(ReplacementFor_solid, ReplacementFor_turid) - bad;
 	ReplacementFor_cost &= (1 << 29) - 1;
 	
 	
 		
 		
 	
 	
 
 	vector<vector<ReplacementFor_pii>> ReplacementFor_paths;
 	ReplacementFor_rep(ReplacementFor_i,0,ReplacementFor_R) ReplacementFor_rep(ReplacementFor_j,0,C) {
 		if (ReplacementFor_board[ReplacementFor_i][ReplacementFor_j] == ((char)(0x842+4935-0x1b36))) {
 			int ReplacementFor_sol = ReplacementFor_sols[ReplacementFor_i][ReplacementFor_j];
 			if (ReplacementFor_mat[ReplacementFor_sol][ReplacementFor_L[ReplacementFor_sol]] >= (1 << 29)) continue;
 
 			queue<ReplacementFor_pii> ReplacementFor_q;
 			vector<ReplacementFor_vi> ReplacementFor_dists(ReplacementFor_R, ReplacementFor_vi(C, INT_MAX));
 			vector<vector<ReplacementFor_pii>> ReplacementFor_pars(ReplacementFor_R, vector<ReplacementFor_pii>(C, ReplacementFor_pii(-2, -2)));
 			ReplacementFor_dists[ReplacementFor_i][ReplacementFor_j] = 0;
 			ReplacementFor_pars[ReplacementFor_i][ReplacementFor_j] = ReplacementFor_pii(-1, -1);
 			ReplacementFor_q.push({ReplacementFor_i,ReplacementFor_j});
 			while (!ReplacementFor_q.empty()) {
 				ReplacementFor_pii ReplacementFor_pa = ReplacementFor_q.front();
 				ReplacementFor_q.pop();
 				int ReplacementFor_d = ReplacementFor_dists[ReplacementFor_pa.first][ReplacementFor_pa.second];
 				const int ReplacementFor_DX[4] = {-1,1,0,0};
 				const int ReplacementFor_DY[4] = {0,0,1,-1};
 				ReplacementFor_rep(ReplacementFor_D,0,4) {
 					int ReplacementFor_ni = ReplacementFor_pa.first + ReplacementFor_DX[ReplacementFor_D];
 					int ReplacementFor_nj = ReplacementFor_pa.second + ReplacementFor_DY[ReplacementFor_D];
 					if (ReplacementFor_ni < 0 || ReplacementFor_nj < 0 || ReplacementFor_ni >= ReplacementFor_R || ReplacementFor_nj >= C) continue;
 					if (ReplacementFor_board[ReplacementFor_ni][ReplacementFor_nj] == ((char)(0x3e7+5396-0x18d8))) continue;
 					if (ReplacementFor_dists[ReplacementFor_ni][ReplacementFor_nj] != INT_MAX) continue;
 					if (ReplacementFor_d + 1 > M) continue;
 					ReplacementFor_dists[ReplacementFor_ni][ReplacementFor_nj] = ReplacementFor_d + 1;
 					ReplacementFor_pars[ReplacementFor_ni][ReplacementFor_nj] = ReplacementFor_pa;
 					ReplacementFor_q.push({ReplacementFor_ni, ReplacementFor_nj});
 				}
 			}
 
 			ReplacementFor_pii at = ReplacementFor_match[ReplacementFor_sol][ReplacementFor_L[ReplacementFor_sol]];
 			vector<ReplacementFor_pii> ReplacementFor_path;
 			while (at != ReplacementFor_pii(ReplacementFor_i, ReplacementFor_j)) {
 				ReplacementFor_path.push_back(at);
 				at = ReplacementFor_pars[at.first][at.second];
 			}
 			
 			
 			ReplacementFor_assert(ReplacementFor_sz(ReplacementFor_path) == ReplacementFor_mat[ReplacementFor_sol][ReplacementFor_L[ReplacementFor_sol]]);
 			ReplacementFor_paths.push_back(ReplacementFor_path);
 		}
 	}
 
 	ReplacementFor_vi ReplacementFor_ids;
 	ReplacementFor_rep(ReplacementFor_i,0,ReplacementFor_solid) {
 		if (ReplacementFor_mat[ReplacementFor_i][ReplacementFor_L[ReplacementFor_i]] < (1 << 29))
 			ReplacementFor_ids.push_back(ReplacementFor_i);
 	}
 	ReplacementFor_assert(ReplacementFor_sz(ReplacementFor_ids) == ReplacementFor_valid);
 
 	vector<ReplacementFor_pii> ReplacementFor_positions;
 	ReplacementFor_trav(ReplacementFor_i, ReplacementFor_ids) {
 		ReplacementFor_positions.push_back(ReplacementFor_solpa[ReplacementFor_i]);
 	}
 
 	ReplacementFor_vi out;
 	vector<ReplacementFor_vi> ReplacementFor_threat(ReplacementFor_R, ReplacementFor_vi(C,0));
 	ReplacementFor_rep(ReplacementFor_tur,0,ReplacementFor_turid) {
 		ReplacementFor_forh(ReplacementFor_turpa[ReplacementFor_tur].first, ReplacementFor_turpa[ReplacementFor_tur].second, [&](ReplacementFor_pii p) {
 			ReplacementFor_threat[p.first][p.second]++;
 		});
 		ReplacementFor_forv(ReplacementFor_turpa[ReplacementFor_tur].first, ReplacementFor_turpa[ReplacementFor_tur].second, [&](ReplacementFor_pii p) {
 			ReplacementFor_threat[p.first][p.second]++;
 		});
 		ReplacementFor_threat[ReplacementFor_turpa[ReplacementFor_tur].first][ReplacementFor_turpa[ReplacementFor_tur].second]--;
 	}
 
 	int rem = ReplacementFor_valid;
 	auto ReplacementFor_done = [&](int ReplacementFor_i) {
 		int ReplacementFor_tur = ReplacementFor_L[ReplacementFor_ids[ReplacementFor_i]];
 		ReplacementFor_forh(ReplacementFor_turpa[ReplacementFor_tur].first, ReplacementFor_turpa[ReplacementFor_tur].second, [&](ReplacementFor_pii p) {
 			ReplacementFor_threat[p.first][p.second]--;
 		});
 		ReplacementFor_forv(ReplacementFor_turpa[ReplacementFor_tur].first, ReplacementFor_turpa[ReplacementFor_tur].second, [&](ReplacementFor_pii p) {
 			ReplacementFor_threat[p.first][p.second]--;
 		});
 		ReplacementFor_threat[ReplacementFor_turpa[ReplacementFor_tur].first][ReplacementFor_turpa[ReplacementFor_tur].second]++;
 		--rem;
 		out.push_back(ReplacementFor_ids[ReplacementFor_i]);
 	};
 	auto ReplacementFor_threatened = [&](ReplacementFor_pii p) {
 		return ReplacementFor_threat[p.first][p.second] > 0;
 	};
 
 	ReplacementFor_rep(ReplacementFor_i,0,ReplacementFor_valid) {
 		if (ReplacementFor_paths[ReplacementFor_i].empty()) ReplacementFor_done(ReplacementFor_i);
 	}
 
 	while (rem > 0) {
 		bool ReplacementFor_hap = 0;
 		ReplacementFor_rep(ReplacementFor_i,0,ReplacementFor_valid) {
 			if (ReplacementFor_paths[ReplacementFor_i].empty()) continue;
 			if (ReplacementFor_threatened(ReplacementFor_positions[ReplacementFor_i])) continue;
 			ReplacementFor_positions[ReplacementFor_i] = ReplacementFor_paths[ReplacementFor_i].back();
 			ReplacementFor_paths[ReplacementFor_i].pop_back();
 			ReplacementFor_hap = 1;
 			if (ReplacementFor_paths[ReplacementFor_i].empty()) ReplacementFor_done(ReplacementFor_i);
 		}
 
 		if (!ReplacementFor_hap) {
 			cerr << "WARNING!" << ((char)(0x65a+4261-0x16df)) << ReplacementFor_cs << endl;
 			ReplacementFor_rep(ReplacementFor_i,0,ReplacementFor_valid) {
 				if (!ReplacementFor_paths[ReplacementFor_i].empty()) ReplacementFor_done(ReplacementFor_i);
 			}
 			break;
 		}
 		
 	}
 
 	cout << ReplacementFor_valid << endl;
 	ReplacementFor_trav(id, out) {
 		cout << id+1 << ((char)(0x158a+1992-0x1d32)) << ReplacementFor_L[id]+1 << endl;
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
 		ReplacementFor_solve(ReplacementFor_i+1);
 	}
 }

