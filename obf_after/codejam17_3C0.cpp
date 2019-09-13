
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
 
 
 typedef long long ReplacementFor_cat;
 
 
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
 		if(T >= 10) {cerr << t << ((t == T-1)?"\n":" "); flush(cerr);}
 		cout << "Case #" << t+1 << ": ";
 		int N;
 		cin >> N;
 		int out[2][1000][4];
 		int ReplacementFor_inn[1000]; memset(ReplacementFor_inn,0,sizeof(ReplacementFor_inn));
 		for(int ReplacementFor_i =0; ReplacementFor_i < N; ReplacementFor_i++) for(int ReplacementFor_j =0; ReplacementFor_j < 2; ReplacementFor_j++) {
 			cin >> out[ReplacementFor_j][ReplacementFor_i][0] >> out[ReplacementFor_j][ReplacementFor_i][1] >> out[ReplacementFor_j][ReplacementFor_i][2];
 			out[ReplacementFor_j][ReplacementFor_i][3] =ReplacementFor_inn[--out[ReplacementFor_j][ReplacementFor_i][0]]++;}
 
 		int ReplacementFor_ans =ReplacementFor_OVER9000;
 		for(int ReplacementFor_i =0; ReplacementFor_i < (1<<N); ReplacementFor_i++) for(int s =0; s < 2; s++) {
 			int ReplacementFor_akt =0, ReplacementFor_v =0, ReplacementFor_d =s;
 			vector<int> ReplacementFor_vis(N,0);
 			for(int ReplacementFor_j =0; ReplacementFor_j < 2*N; ReplacementFor_j++) {
 				ReplacementFor_vis[ReplacementFor_v]++;
 				while(ReplacementFor_akt%24 != out[ReplacementFor_d][ReplacementFor_v][1]) ReplacementFor_akt++;
 				ReplacementFor_akt +=out[ReplacementFor_d][ReplacementFor_v][2];
 				int ReplacementFor_di =out[ReplacementFor_d][ReplacementFor_v][3];
 				ReplacementFor_v =out[ReplacementFor_d][ReplacementFor_v][0];
 				ReplacementFor_d =ReplacementFor_di^((ReplacementFor_i>>ReplacementFor_v)&1);
 				if(ReplacementFor_v == 0) ReplacementFor_d =1-s;}
 			bool ok =true;
 			for(int ReplacementFor_j =0; ReplacementFor_j < N; ReplacementFor_j++) if(ReplacementFor_vis[ReplacementFor_j] != 2) ok =false;
 
 			if(ok) ReplacementFor_ans =min(ReplacementFor_ans,ReplacementFor_akt);}
 		cout << ReplacementFor_ans << "\n";}
 	return 0;}
 
 
 
 
 
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
 
 
 typedef long long ReplacementFor_cat;
 
 
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
 		if(T >= 10) {cerr << t << ((t == T-1)?"\n":" "); flush(cerr);}
 		cout << "Case #" << t+1 << ": ";
 		int N;
 		cin >> N;
 		int out[2][1000][4];
 		int ReplacementFor_inn[1000]; memset(ReplacementFor_inn,0,sizeof(ReplacementFor_inn));
 		for(int ReplacementFor_i =0; ReplacementFor_i < N; ReplacementFor_i++) for(int ReplacementFor_j =0; ReplacementFor_j < 2; ReplacementFor_j++) {
 			cin >> out[ReplacementFor_j][ReplacementFor_i][0] >> out[ReplacementFor_j][ReplacementFor_i][1] >> out[ReplacementFor_j][ReplacementFor_i][2];
 			out[ReplacementFor_j][ReplacementFor_i][3] =ReplacementFor_inn[--out[ReplacementFor_j][ReplacementFor_i][0]]++;}
 
 		int ReplacementFor_ans =ReplacementFor_OVER9000;
 		for(int ReplacementFor_i =0; ReplacementFor_i < (1<<N); ReplacementFor_i++) for(int s =0; s < 2; s++) {
 			int ReplacementFor_akt =0, ReplacementFor_v =0, ReplacementFor_d =s;
 			vector<int> ReplacementFor_vis(N,0);
 			for(int ReplacementFor_j =0; ReplacementFor_j < 2*N; ReplacementFor_j++) {
 				ReplacementFor_vis[ReplacementFor_v]++;
 				while(ReplacementFor_akt%24 != out[ReplacementFor_d][ReplacementFor_v][1]) ReplacementFor_akt++;
 				ReplacementFor_akt +=out[ReplacementFor_d][ReplacementFor_v][2];
 				int ReplacementFor_di =out[ReplacementFor_d][ReplacementFor_v][3];
 				ReplacementFor_v =out[ReplacementFor_d][ReplacementFor_v][0];
 				ReplacementFor_d =ReplacementFor_di^((ReplacementFor_i>>ReplacementFor_v)&1);
 				if(ReplacementFor_v == 0) ReplacementFor_d =1-s;}
 			bool ok =true;
 			for(int ReplacementFor_j =0; ReplacementFor_j < N; ReplacementFor_j++) if(ReplacementFor_vis[ReplacementFor_j] != 2) ok =false;
 
 			if(ok) ReplacementFor_ans =min(ReplacementFor_ans,ReplacementFor_akt);}
 		cout << ReplacementFor_ans << "\n";}
 	return 0;}
 
 
 
