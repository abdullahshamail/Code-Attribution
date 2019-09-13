
#include <bits/stdc++.h>
 using namespace std;
 
 
#define ReplacementFor_rep(ReplacementFor_i, ReplacementFor_from, ReplacementFor_to) for (int ReplacementFor_i = ReplacementFor_from; ReplacementFor_i < int(ReplacementFor_to); ++ReplacementFor_i)
 
#define ReplacementFor_trav(a, x) for (auto& a : x)
 
#define all(x) x.begin(), x.end()
 
#define ReplacementFor_sz(x) (int)(x).size()
 typedef long long ReplacementFor_ll;
 typedef pair<int, int> ReplacementFor_pii;
 typedef vector<int> ReplacementFor_vi;
 
 ReplacementFor_ll ReplacementFor_multinomial(ReplacementFor_vi& ReplacementFor_v) {
 	ReplacementFor_ll c = 1, m = ReplacementFor_v.empty() ? 1 : ReplacementFor_v[0];
 	ReplacementFor_rep(ReplacementFor_i,1,ReplacementFor_sz(ReplacementFor_v)) ReplacementFor_rep(ReplacementFor_j,0,ReplacementFor_v[ReplacementFor_i])
 		c = c * ++m / (ReplacementFor_j+1);
 	return c;
 }
 
 string out;
 template<class F>
 bool ReplacementFor_genmulti(ReplacementFor_vi& ReplacementFor_counts, F f) {
 	bool ReplacementFor_any = 0;
 	ReplacementFor_rep(ReplacementFor_i,0,ReplacementFor_sz(ReplacementFor_counts)) if (ReplacementFor_counts[ReplacementFor_i] > 0) {
 		out += (char)(((char)(0x39c+382-0x4ea)) + ReplacementFor_i);
 		ReplacementFor_counts[ReplacementFor_i]--;
 		bool ReplacementFor_r = ReplacementFor_genmulti(ReplacementFor_counts, f);
 		ReplacementFor_counts[ReplacementFor_i]++;
 		out.pop_back();
 		ReplacementFor_any = 1;
 		if (!ReplacementFor_r) return false;
 	}
 
 	if (!ReplacementFor_any) {
 		return f(out);
 	}
 
 	return true;
 }
 
 int ReplacementFor_L;
 
 bool ReplacementFor_nopre(string& str) {
 	ReplacementFor_vi ReplacementFor_counts(ReplacementFor_L+1);
 	int ReplacementFor_sum = 0;
 	ReplacementFor_rep(ReplacementFor_i,0,ReplacementFor_L) ReplacementFor_counts[ReplacementFor_i+1] = (str[ReplacementFor_i] - ((char)(0xdec+5175-0x21f3))), ReplacementFor_sum += (str[ReplacementFor_i] - ((char)(0x16f2+82-0x1714)));
 	ReplacementFor_counts[0] = ReplacementFor_L - ReplacementFor_sum;
 	ReplacementFor_assert(ReplacementFor_sum > 0);
 	return ReplacementFor_counts[0] < 0;
 }
 
 void ReplacementFor_solve() {
 	string str;
 	cin >> str;
 	ReplacementFor_L = ReplacementFor_sz(str);
 	if (ReplacementFor_nopre(str)) {
 		cout << 1 << endl;
 		return;
 	}
 
 	ReplacementFor_vi ReplacementFor_counts(ReplacementFor_L+1);
 	int ReplacementFor_sum = 0;
 	ReplacementFor_rep(ReplacementFor_i,0,ReplacementFor_L) ReplacementFor_counts[ReplacementFor_i+1] = (str[ReplacementFor_i] - ((char)(0x3d8+6861-0x1e75))), ReplacementFor_sum += (str[ReplacementFor_i] - ((char)(0x7b3+2544-0x1173)));
 	ReplacementFor_counts[0] = ReplacementFor_L - ReplacementFor_sum;
 	ReplacementFor_assert(ReplacementFor_sum > 0);
 
 	queue<string> ReplacementFor_q;
 	ReplacementFor_q.push(str);
 	ReplacementFor_ll ReplacementFor_res = 0;
 	set<string> ReplacementFor_seen;
 	while (!ReplacementFor_q.empty()) {
 		str = ReplacementFor_q.front();
 		ReplacementFor_q.pop();
 		if (ReplacementFor_seen.count(str)) continue;
 		ReplacementFor_seen.insert(str);
 		ReplacementFor_counts.assign(ReplacementFor_L+1, 0);
 		ReplacementFor_sum = 0;
 		ReplacementFor_rep(ReplacementFor_i,0,ReplacementFor_L) ReplacementFor_counts[ReplacementFor_i+1] = (str[ReplacementFor_i] - ((char)(0x1e72+1993-0x260b))), ReplacementFor_sum += (str[ReplacementFor_i] - ((char)(0x339+7562-0x2093)));
 		ReplacementFor_counts[0] = ReplacementFor_L - ReplacementFor_sum;
 
 
 
 
 
 		ReplacementFor_assert(ReplacementFor_sum > 0);
 		ReplacementFor_assert(ReplacementFor_counts[0] >= 0);
 		ReplacementFor_vi ReplacementFor_counts2 = ReplacementFor_counts;
 		{
 			ReplacementFor_genmulti(ReplacementFor_counts2, [&](string& s) {
 				if (ReplacementFor_nopre(s)) {
 					ReplacementFor_res += ReplacementFor_multinomial(ReplacementFor_counts);
 					
 					return false;
 				}
 				ReplacementFor_q.push(s);
 				
 				return true;
 			});
 		}
 		ReplacementFor_res++;
 	}
 
 	cout << ReplacementFor_res << endl;
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

