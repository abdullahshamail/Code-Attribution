
#include <bits/stdc++.h>
 
 
#include <cstdio>
 
 
#include <iostream>
 
#include <algorithm>
 
#include <cstdlib>
 
#include <vector>
 
#include <set>
 
#include <map>
 
#include <queue>
 
#include <stack>
 
#include <list>
 
#include <cmath>
 
#include <iomanip>
 
#include <time.h>
 
#define ReplacementFor_dibs reserve
 
#define ReplacementFor_OVER9000 1234567890
 
#define ReplacementFor_ALL_THE(ReplacementFor_CAKE,ReplacementFor_LIE) for(auto ReplacementFor_LIE =ReplacementFor_CAKE.begin(); ReplacementFor_LIE != ReplacementFor_CAKE.end(); ReplacementFor_LIE++)
 
#define ReplacementFor_tisic 47
 
#define ReplacementFor_soclose 1e-8
 
#define ReplacementFor_chocolate ReplacementFor_win
 
 
#define ReplacementFor_patkan 9
 
#define ReplacementFor_ff first
 
#define ReplacementFor_ss second
 
#define abs(x) ((x < 0)?-(x):x)
 
#define uint unsigned int
 
#define ReplacementFor_dbl long double
 
#define ReplacementFor_pi 3.14159265358979323846
 using namespace std;
 
 
 
#ifdef ReplacementFor_DONLINE_JUDGE
 	
 	
#define ReplacementFor_lld ReplacementFor_I64d
 
#endif
 
 int main() {
 	cin.sync_with_stdio(0);
 	cin.tie(0);
 	cout << fixed << setprecision(10);
 	int T;
 	cin >> T;
 	for(int t =0; t < T; t++) {
 		cout << "Case #" << t+1 << ": ";
 		long long N;
 		cin >> N;
 
 		vector<long long> ReplacementFor_pos;
 		long long x =min(N,9LL);
 		while(x <= (N-9)/10) x =x*10+9;
 		ReplacementFor_pos.push_back(x);
 
 		vector<int> ReplacementFor_dig;
 		while(N > 0) {
 			ReplacementFor_dig.push_back(N%10);
 			N /=10;}
 		int ReplacementFor_D =ReplacementFor_dig.size();
 
 		for(int ReplacementFor_i =-1; ReplacementFor_i < ReplacementFor_D; ReplacementFor_i++) {
 			x =0;
 			for(int ReplacementFor_j =ReplacementFor_D-1; ReplacementFor_j > ReplacementFor_i; ReplacementFor_j--) {
 				if(ReplacementFor_j < ReplacementFor_D-1 && ReplacementFor_dig[ReplacementFor_j] < ReplacementFor_dig[ReplacementFor_j+1]) {
 					x =-1; 
 					break;}
 				x =x*10+ReplacementFor_dig[ReplacementFor_j];}
 			if(x == -1) continue;
 			if(ReplacementFor_i == -1) {
 				ReplacementFor_pos.push_back(x);
 				break;}
 			for(int ReplacementFor_d2 =(ReplacementFor_i == ReplacementFor_D-1)?0:ReplacementFor_dig[ReplacementFor_i+1]; ReplacementFor_d2 < ReplacementFor_dig[ReplacementFor_i]; ReplacementFor_d2++) {
 				long long y =x*10+ReplacementFor_d2;
 				for(int ReplacementFor_j =0; ReplacementFor_j < ReplacementFor_i; ReplacementFor_j++) y =y*10+9;
 				ReplacementFor_pos.push_back(y);}
 			}
 
 		sort(begin(ReplacementFor_pos),end(ReplacementFor_pos));
 		cout << ReplacementFor_pos.back() << "\n";}
 	return 0;}
 
 
 
#include <bits/stdc++.h>
 
 
#include <cstdio>
 
 
#include <iostream>
 
#include <algorithm>
 
#include <cstdlib>
 
#include <vector>
 
#include <set>
 
#include <map>
 
#include <queue>
 
#include <stack>
 
#include <list>
 
#include <cmath>
 
#include <iomanip>
 
#include <time.h>
 
#define ReplacementFor_dibs reserve
 
#define ReplacementFor_OVER9000 1234567890
 
#define ReplacementFor_ALL_THE(ReplacementFor_CAKE,ReplacementFor_LIE) for(auto ReplacementFor_LIE =ReplacementFor_CAKE.begin(); ReplacementFor_LIE != ReplacementFor_CAKE.end(); ReplacementFor_LIE++)
 
#define ReplacementFor_tisic 47
 
#define ReplacementFor_soclose 1e-8
 
#define ReplacementFor_chocolate ReplacementFor_win
 
 
#define ReplacementFor_patkan 9
 
#define ReplacementFor_ff first
 
#define ReplacementFor_ss second
 
#define abs(x) ((x < 0)?-(x):x)
 
#define uint unsigned int
 
#define ReplacementFor_dbl long double
 
#define ReplacementFor_pi 3.14159265358979323846
 using namespace std;
 
 
 
#ifdef ReplacementFor_DONLINE_JUDGE
 	
 	
#define ReplacementFor_lld ReplacementFor_I64d
 
#endif
 
 int main() {
 	cin.sync_with_stdio(0);
 	cin.tie(0);
 	cout << fixed << setprecision(10);
 	int T;
 	cin >> T;
 	for(int t =0; t < T; t++) {
 		cout << "Case #" << t+1 << ": ";
 		long long N;
 		cin >> N;
 
 		vector<long long> ReplacementFor_pos;
 		long long x =min(N,9LL);
 		while(x <= (N-9)/10) x =x*10+9;
 		ReplacementFor_pos.push_back(x);
 
 		vector<int> ReplacementFor_dig;
 		while(N > 0) {
 			ReplacementFor_dig.push_back(N%10);
 			N /=10;}
 		int ReplacementFor_D =ReplacementFor_dig.size();
 
 		for(int ReplacementFor_i =-1; ReplacementFor_i < ReplacementFor_D; ReplacementFor_i++) {
 			x =0;
 			for(int ReplacementFor_j =ReplacementFor_D-1; ReplacementFor_j > ReplacementFor_i; ReplacementFor_j--) {
 				if(ReplacementFor_j < ReplacementFor_D-1 && ReplacementFor_dig[ReplacementFor_j] < ReplacementFor_dig[ReplacementFor_j+1]) {
 					x =-1; 
 					break;}
 				x =x*10+ReplacementFor_dig[ReplacementFor_j];}
 			if(x == -1) continue;
 			if(ReplacementFor_i == -1) {
 				ReplacementFor_pos.push_back(x);
 				break;}
 			for(int ReplacementFor_d2 =(ReplacementFor_i == ReplacementFor_D-1)?0:ReplacementFor_dig[ReplacementFor_i+1]; ReplacementFor_d2 < ReplacementFor_dig[ReplacementFor_i]; ReplacementFor_d2++) {
 				long long y =x*10+ReplacementFor_d2;
 				for(int ReplacementFor_j =0; ReplacementFor_j < ReplacementFor_i; ReplacementFor_j++) y =y*10+9;
 				ReplacementFor_pos.push_back(y);}
 			}
 
 		sort(begin(ReplacementFor_pos),end(ReplacementFor_pos));
 		cout << ReplacementFor_pos.back() << "\n";}
 	return 0;}
 
 
 

