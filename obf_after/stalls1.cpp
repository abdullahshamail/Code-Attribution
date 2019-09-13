
#include <bits/stdc++.h>
 using namespace std;
 
 
#define ReplacementFor_rep(ReplacementFor_i, ReplacementFor_from, ReplacementFor_to) for (int ReplacementFor_i = ReplacementFor_from; ReplacementFor_i < int(ReplacementFor_to); ++ReplacementFor_i)
 
#define ReplacementFor_trav(a, x) for (auto& a : x)
 
#define all(x) x.begin(), x.end()
 
#define ReplacementFor_sz(x) (int)(x).size()
 typedef long long ReplacementFor_ll;
 typedef pair<int, int> ReplacementFor_pii;
 typedef vector<int> ReplacementFor_vi;
 
 void ReplacementFor_solve() {
 	ReplacementFor_ll N, K;
 	cin >> N >> K;
 	map<ReplacementFor_ll, ReplacementFor_ll> ReplacementFor_seqs;
 	ReplacementFor_seqs[-N] = 1;
 	for (;;) {
 		auto ReplacementFor_pa2 = *ReplacementFor_seqs.begin();
 		auto ReplacementFor_pa = make_pair(-ReplacementFor_pa2.first, ReplacementFor_pa2.second);
 		ReplacementFor_seqs.erase(ReplacementFor_seqs.begin());
 		ReplacementFor_ll ReplacementFor_lo = (ReplacementFor_pa.first-1) / 2;
 		ReplacementFor_ll ReplacementFor_hi = (ReplacementFor_pa.first) / 2;
 		if (ReplacementFor_pa.second >= K) {
 			cout << ReplacementFor_hi << ((char)(0x49c+1836-0xba8)) << ReplacementFor_lo << endl;
 			return;
 		}
 		K -= ReplacementFor_pa.second;
 		ReplacementFor_seqs[-ReplacementFor_lo] += ReplacementFor_pa.second;
 		ReplacementFor_seqs[-ReplacementFor_hi] += ReplacementFor_pa.second;
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
#include <bits/stdc++.h>
 using namespace std;
 
 
#define ReplacementFor_rep(ReplacementFor_i, ReplacementFor_from, ReplacementFor_to) for (int ReplacementFor_i = ReplacementFor_from; ReplacementFor_i < int(ReplacementFor_to); ++ReplacementFor_i)
 
#define ReplacementFor_trav(a, x) for (auto& a : x)
 
#define all(x) x.begin(), x.end()
 
#define ReplacementFor_sz(x) (int)(x).size()
 typedef long long ReplacementFor_ll;
 typedef pair<int, int> ReplacementFor_pii;
 typedef vector<int> ReplacementFor_vi;
 
 void ReplacementFor_solve() {
 	ReplacementFor_ll N, K;
 	cin >> N >> K;
 	map<ReplacementFor_ll, ReplacementFor_ll> ReplacementFor_seqs;
 	ReplacementFor_seqs[-N] = 1;
 	for (;;) {
 		auto ReplacementFor_pa2 = *ReplacementFor_seqs.begin();
 		auto ReplacementFor_pa = make_pair(-ReplacementFor_pa2.first, ReplacementFor_pa2.second);
 		ReplacementFor_seqs.erase(ReplacementFor_seqs.begin());
 		ReplacementFor_ll ReplacementFor_lo = (ReplacementFor_pa.first-1) / 2;
 		ReplacementFor_ll ReplacementFor_hi = (ReplacementFor_pa.first) / 2;
 		if (ReplacementFor_pa.second >= K) {
 			cout << ReplacementFor_hi << ((char)(0x1475+2703-0x1ee4)) << ReplacementFor_lo << endl;
 			return;
 		}
 		K -= ReplacementFor_pa.second;
 		ReplacementFor_seqs[-ReplacementFor_lo] += ReplacementFor_pa.second;
 		ReplacementFor_seqs[-ReplacementFor_hi] += ReplacementFor_pa.second;
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
#include <bits/stdc++.h>
 using namespace std;
 
 
#define ReplacementFor_rep(ReplacementFor_i, ReplacementFor_from, ReplacementFor_to) for (int ReplacementFor_i = ReplacementFor_from; ReplacementFor_i < int(ReplacementFor_to); ++ReplacementFor_i)
 
#define ReplacementFor_trav(a, x) for (auto& a : x)
 
#define all(x) x.begin(), x.end()
 
#define ReplacementFor_sz(x) (int)(x).size()
 typedef long long ReplacementFor_ll;
 typedef pair<int, int> ReplacementFor_pii;
 typedef vector<int> ReplacementFor_vi;
 
 void ReplacementFor_solve() {
 	ReplacementFor_ll N, K;
 	cin >> N >> K;
 	map<ReplacementFor_ll, ReplacementFor_ll> ReplacementFor_seqs;
 	ReplacementFor_seqs[-N] = 1;
 	for (;;) {
 		auto ReplacementFor_pa2 = *ReplacementFor_seqs.begin();
 		auto ReplacementFor_pa = make_pair(-ReplacementFor_pa2.first, ReplacementFor_pa2.second);
 		ReplacementFor_seqs.erase(ReplacementFor_seqs.begin());
 		ReplacementFor_ll ReplacementFor_lo = (ReplacementFor_pa.first-1) / 2;
 		ReplacementFor_ll ReplacementFor_hi = (ReplacementFor_pa.first) / 2;
 		if (ReplacementFor_pa.second >= K) {
 			cout << ReplacementFor_hi << ((char)(0x7e0+4020-0x1774)) << ReplacementFor_lo << endl;
 			return;
 		}
 		K -= ReplacementFor_pa.second;
 		ReplacementFor_seqs[-ReplacementFor_lo] += ReplacementFor_pa.second;
 		ReplacementFor_seqs[-ReplacementFor_hi] += ReplacementFor_pa.second;
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

