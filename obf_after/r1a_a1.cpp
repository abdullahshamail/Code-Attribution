
#include "bits/stdc++.h"
 using namespace std;
 
#ifdef _DEBUG
 
#include "dump.hpp"
 
#else
 
#define ReplacementFor_dump(...)
 
#endif
 
 
#define int long long
 
#define ReplacementFor_rep(ReplacementFor_i,a,b) for(int ReplacementFor_i=(a);ReplacementFor_i<(b);ReplacementFor_i++)
 
#define ReplacementFor_rrep(ReplacementFor_i,a,b) for(int ReplacementFor_i=(b)-1;ReplacementFor_i>=(a);ReplacementFor_i--)
 
#define all(c) begin(c),end(c)
 const int ReplacementFor_INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
 const int ReplacementFor_MOD = (int)(1e9) + 7;
 template<class T> bool ReplacementFor_chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
 template<class T> bool ReplacementFor_chmin(T &a, const T &b) { if (b < a) { a = b; return true; } return false; }
 
 
 
 signed main() {
 	cin.tie(0);
 	ios::sync_with_stdio(false);
 	freopen("A-large.in", "r", stdin);
 	freopen("A-large.txt", "w", stdout);
 	
 	
 	int T; cin >> T;
 	for (int t = 0; t < T; t++) {
 		int ReplacementFor_R, C; cin >> ReplacementFor_R >> C;
 		vector<vector<char>> ReplacementFor_v(ReplacementFor_R, vector<char>(C));
 		ReplacementFor_rep(ReplacementFor_i, 0, ReplacementFor_R) ReplacementFor_rep(ReplacementFor_j, 0, C) { cin >> ReplacementFor_v[ReplacementFor_i][ReplacementFor_j]; }
 		ReplacementFor_rep(ReplacementFor_i, 0, ReplacementFor_R)ReplacementFor_rep(ReplacementFor_j, 1, C) {
 			if (ReplacementFor_v[ReplacementFor_i][ReplacementFor_j] == ((char)(0x662+8194-0x2625))) {
 				ReplacementFor_v[ReplacementFor_i][ReplacementFor_j] = ReplacementFor_v[ReplacementFor_i][ReplacementFor_j - 1];
 			}
 		}
 		ReplacementFor_rep(ReplacementFor_i, 0, ReplacementFor_R)ReplacementFor_rrep(ReplacementFor_j, 0, C - 1) {
 			if (ReplacementFor_v[ReplacementFor_i][ReplacementFor_j] == ((char)(0xb58+3714-0x199b))) {
 				ReplacementFor_v[ReplacementFor_i][ReplacementFor_j] = ReplacementFor_v[ReplacementFor_i][ReplacementFor_j + 1];
 			}
 		}
 		ReplacementFor_rep(ReplacementFor_i, 1, ReplacementFor_R) {
 			if (ReplacementFor_v[ReplacementFor_i][0] == ((char)(0xa5c+5373-0x1f1a))) {
 				ReplacementFor_rep(ReplacementFor_j, 0, C) {
 					ReplacementFor_v[ReplacementFor_i][ReplacementFor_j] = ReplacementFor_v[ReplacementFor_i - 1][ReplacementFor_j];
 				}
 			}
 		}
 		ReplacementFor_rrep(ReplacementFor_i, 0, ReplacementFor_R - 1) {
 			if (ReplacementFor_v[ReplacementFor_i][0] == ((char)(0x628+6435-0x1f0c))) {
 				ReplacementFor_rep(ReplacementFor_j, 0, C) {
 					ReplacementFor_v[ReplacementFor_i][ReplacementFor_j] = ReplacementFor_v[ReplacementFor_i + 1][ReplacementFor_j];
 				}
 			}
 		}
 		cout << "Case #" << t + 1 << ":" << endl;
 		ReplacementFor_rep(ReplacementFor_i, 0, ReplacementFor_v.size()) {
 			cout << ReplacementFor_v[ReplacementFor_i][0];
 			ReplacementFor_rep(ReplacementFor_j, 1, ReplacementFor_v[ReplacementFor_i].size()) { cout << ReplacementFor_v[ReplacementFor_i][ReplacementFor_j]; }
 			cout << endl;
 		}
 	}
 	return 0;
 }
#include "bits/stdc++.h"
 using namespace std;
 
#ifdef _DEBUG
 
#include "dump.hpp"
 
#else
 
#define ReplacementFor_dump(...)
 
#endif
 
 
#define int long long
 
#define ReplacementFor_rep(ReplacementFor_i,a,b) for(int ReplacementFor_i=(a);ReplacementFor_i<(b);ReplacementFor_i++)
 
#define ReplacementFor_rrep(ReplacementFor_i,a,b) for(int ReplacementFor_i=(b)-1;ReplacementFor_i>=(a);ReplacementFor_i--)
 
#define all(c) begin(c),end(c)
 const int ReplacementFor_INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
 const int ReplacementFor_MOD = (int)(1e9) + 7;
 template<class T> bool ReplacementFor_chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
 template<class T> bool ReplacementFor_chmin(T &a, const T &b) { if (b < a) { a = b; return true; } return false; }
 
 
 
 signed main() {
 	cin.tie(0);
 	ios::sync_with_stdio(false);
 	freopen("A-large.in", "r", stdin);
 	freopen("A-large.txt", "w", stdout);
 	
 	
 	int T; cin >> T;
 	for (int t = 0; t < T; t++) {
 		int ReplacementFor_R, C; cin >> ReplacementFor_R >> C;
 		vector<vector<char>> ReplacementFor_v(ReplacementFor_R, vector<char>(C));
 		ReplacementFor_rep(ReplacementFor_i, 0, ReplacementFor_R) ReplacementFor_rep(ReplacementFor_j, 0, C) { cin >> ReplacementFor_v[ReplacementFor_i][ReplacementFor_j]; }
 		ReplacementFor_rep(ReplacementFor_i, 0, ReplacementFor_R)ReplacementFor_rep(ReplacementFor_j, 1, C) {
 			if (ReplacementFor_v[ReplacementFor_i][ReplacementFor_j] == ((char)(0x1312+4308-0x23a7))) {
 				ReplacementFor_v[ReplacementFor_i][ReplacementFor_j] = ReplacementFor_v[ReplacementFor_i][ReplacementFor_j - 1];
 			}
 		}
 		ReplacementFor_rep(ReplacementFor_i, 0, ReplacementFor_R)ReplacementFor_rrep(ReplacementFor_j, 0, C - 1) {
 			if (ReplacementFor_v[ReplacementFor_i][ReplacementFor_j] == ((char)(0x158f+1662-0x1bce))) {
 				ReplacementFor_v[ReplacementFor_i][ReplacementFor_j] = ReplacementFor_v[ReplacementFor_i][ReplacementFor_j + 1];
 			}
 		}
 		ReplacementFor_rep(ReplacementFor_i, 1, ReplacementFor_R) {
 			if (ReplacementFor_v[ReplacementFor_i][0] == ((char)(0x15f2+2875-0x20ee))) {
 				ReplacementFor_rep(ReplacementFor_j, 0, C) {
 					ReplacementFor_v[ReplacementFor_i][ReplacementFor_j] = ReplacementFor_v[ReplacementFor_i - 1][ReplacementFor_j];
 				}
 			}
 		}
 		ReplacementFor_rrep(ReplacementFor_i, 0, ReplacementFor_R - 1) {
 			if (ReplacementFor_v[ReplacementFor_i][0] == ((char)(0x1358+1436-0x18b5))) {
 				ReplacementFor_rep(ReplacementFor_j, 0, C) {
 					ReplacementFor_v[ReplacementFor_i][ReplacementFor_j] = ReplacementFor_v[ReplacementFor_i + 1][ReplacementFor_j];
 				}
 			}
 		}
 		cout << "Case #" << t + 1 << ":" << endl;
 		ReplacementFor_rep(ReplacementFor_i, 0, ReplacementFor_v.size()) {
 			cout << ReplacementFor_v[ReplacementFor_i][0];
 			ReplacementFor_rep(ReplacementFor_j, 1, ReplacementFor_v[ReplacementFor_i].size()) { cout << ReplacementFor_v[ReplacementFor_i][ReplacementFor_j]; }
 			cout << endl;
 		}
 	}
 	return 0;
 }
