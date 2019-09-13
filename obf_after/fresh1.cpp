
#include <bits/stdc++.h>
 using namespace std;
 
 
#define ReplacementFor_rep(ReplacementFor_i, ReplacementFor_from, ReplacementFor_to) for (int ReplacementFor_i = ReplacementFor_from; ReplacementFor_i < int(ReplacementFor_to); ++ReplacementFor_i)
 
#define ReplacementFor_trav(a, x) for (auto& a : x)
 
#define all(x) x.begin(), x.end()
 
#define ReplacementFor_sz(x) (int)(x).size()
 typedef long long ReplacementFor_ll;
 typedef pair<int, int> ReplacementFor_pii;
 typedef vector<int> ReplacementFor_vi;
 
 int P;
 vector<vector<ReplacementFor_vi>> ReplacementFor_mem[5][4];
 int ReplacementFor_rec(int a, int b, int c, int at) {
 	if (a + b + c == 0) return 0;
 	int& out = ReplacementFor_mem[P][at][a][b][c];
 	if (out != -1) return out;
 	int ReplacementFor_r = 0;
 	if (a) ReplacementFor_r = max(ReplacementFor_r, ReplacementFor_rec(a-1, b, c, (at + 1) % P));
 	if (b) ReplacementFor_r = max(ReplacementFor_r, ReplacementFor_rec(a, b-1, c, (at + 2) % P));
 	if (c) ReplacementFor_r = max(ReplacementFor_r, ReplacementFor_rec(a, b, c-1, (at + 3) % P));
 	if (at == 0) ReplacementFor_r++;
 	return out = ReplacementFor_r;
 }
 
 void ReplacementFor_solve() {
 	int N;
 	cin >> N >> P;
 	ReplacementFor_assert(P <= 4);
 	ReplacementFor_vi ReplacementFor_gr(4);
 	ReplacementFor_rep(ReplacementFor_i,0,N) {
 		int ReplacementFor_g;
 		cin >> ReplacementFor_g;
 		ReplacementFor_g %= P;
 		ReplacementFor_gr[ReplacementFor_g]++;
 	}
 
 	ReplacementFor_ll ReplacementFor_res = ReplacementFor_gr[0];
 	ReplacementFor_gr[0] = 0;
 
 	ReplacementFor_res += ReplacementFor_rec(ReplacementFor_gr[1], ReplacementFor_gr[2], ReplacementFor_gr[3], 0);
 	cout << ReplacementFor_res << endl;
 }
 
 int main() {
 	cin.sync_with_stdio(false);
 	cin.exceptions(cin.failbit | cin.eofbit | cin.badbit);
 	cin.tie(0);
 	int T;
 	cin >> T;
 	ReplacementFor_rep(P,2,5) ReplacementFor_rep(at,0,4)
 		ReplacementFor_mem[P][at].assign(105, vector<ReplacementFor_vi>(105, ReplacementFor_vi(105, -1)));
 	ReplacementFor_rep(ReplacementFor_i,0,T) {
 		cout << "Case #" << ReplacementFor_i+1 << ": ";
 		ReplacementFor_solve();
 	}
 }
#include <bits/stdc++.h>
 using namespace std;
 
 
#define ReplacementFor_rep(ReplacementFor_i, ReplacementFor_from, ReplacementFor_to) for (int ReplacementFor_i = ReplacementFor_from; ReplacementFor_i < int(ReplacementFor_to); ++ReplacementFor_i)
 
#define ReplacementFor_trav(a, x) for (auto& a : x)
 
#define all(x) x.begin(), x.end()
 
#define ReplacementFor_sz(x) (int)(x).size()
 typedef long long ReplacementFor_ll;
 typedef pair<int, int> ReplacementFor_pii;
 typedef vector<int> ReplacementFor_vi;
 
 int P;
 vector<vector<ReplacementFor_vi>> ReplacementFor_mem[5][4];
 int ReplacementFor_rec(int a, int b, int c, int at) {
 	if (a + b + c == 0) return 0;
 	int& out = ReplacementFor_mem[P][at][a][b][c];
 	if (out != -1) return out;
 	int ReplacementFor_r = 0;
 	if (a) ReplacementFor_r = max(ReplacementFor_r, ReplacementFor_rec(a-1, b, c, (at + 1) % P));
 	if (b) ReplacementFor_r = max(ReplacementFor_r, ReplacementFor_rec(a, b-1, c, (at + 2) % P));
 	if (c) ReplacementFor_r = max(ReplacementFor_r, ReplacementFor_rec(a, b, c-1, (at + 3) % P));
 	if (at == 0) ReplacementFor_r++;
 	return out = ReplacementFor_r;
 }
 
 void ReplacementFor_solve() {
 	int N;
 	cin >> N >> P;
 	ReplacementFor_assert(P <= 4);
 	ReplacementFor_vi ReplacementFor_gr(4);
 	ReplacementFor_rep(ReplacementFor_i,0,N) {
 		int ReplacementFor_g;
 		cin >> ReplacementFor_g;
 		ReplacementFor_g %= P;
 		ReplacementFor_gr[ReplacementFor_g]++;
 	}
 
 	ReplacementFor_ll ReplacementFor_res = ReplacementFor_gr[0];
 	ReplacementFor_gr[0] = 0;
 
 	ReplacementFor_res += ReplacementFor_rec(ReplacementFor_gr[1], ReplacementFor_gr[2], ReplacementFor_gr[3], 0);
 	cout << ReplacementFor_res << endl;
 }
 
 int main() {
 	cin.sync_with_stdio(false);
 	cin.exceptions(cin.failbit | cin.eofbit | cin.badbit);
 	cin.tie(0);
 	int T;
 	cin >> T;
 	ReplacementFor_rep(P,2,5) ReplacementFor_rep(at,0,4)
 		ReplacementFor_mem[P][at].assign(105, vector<ReplacementFor_vi>(105, ReplacementFor_vi(105, -1)));
 	ReplacementFor_rep(ReplacementFor_i,0,T) {
 		cout << "Case #" << ReplacementFor_i+1 << ": ";
 		ReplacementFor_solve();
 	}
 }

