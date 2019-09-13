
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
 	freopen("C-small-1-attempt0.in", "r", stdin);
 	freopen("C-small-1-attempt0.txt", "w", stdout);
 	int T; cin >> T;
 	for (int t = 0; t < T; t++) {
 		int N; cin >> N;
 		int K; cin >> K;
 		priority_queue<int> ReplacementFor_pq;
 		ReplacementFor_pq.emplace(N);
 		ReplacementFor_rep(k, 0, K) {
 			int a = ReplacementFor_pq.top(); ReplacementFor_pq.pop();
 			a--;
 			int b = a / 2, c = a - b;
 			
 			ReplacementFor_pq.emplace(b);
 			ReplacementFor_pq.emplace(c);
 			if (k == K - 1) {
 				cout << "Case #" << t + 1 << ": ";
 				cout << max(b, c) << " " << min(b, c) << endl;
 			}
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
 	freopen("C-small-1-attempt0.in", "r", stdin);
 	freopen("C-small-1-attempt0.txt", "w", stdout);
 	int T; cin >> T;
 	for (int t = 0; t < T; t++) {
 		int N; cin >> N;
 		int K; cin >> K;
 		priority_queue<int> ReplacementFor_pq;
 		ReplacementFor_pq.emplace(N);
 		ReplacementFor_rep(k, 0, K) {
 			int a = ReplacementFor_pq.top(); ReplacementFor_pq.pop();
 			a--;
 			int b = a / 2, c = a - b;
 			
 			ReplacementFor_pq.emplace(b);
 			ReplacementFor_pq.emplace(c);
 			if (k == K - 1) {
 				cout << "Case #" << t + 1 << ": ";
 				cout << max(b, c) << " " << min(b, c) << endl;
 			}
 		}
 	}
 	return 0;
 }
