
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
 	int T, M =24*60;
 	cin >> T;
 	int ReplacementFor_minex[2][2][M+1][M+1];
 	int ReplacementFor_fr[2][M];
 	for(int t =0; t < T; t++) {
 		cout << "Case #" << t+1 << ": ";
 		int N[2];
 		for(int ReplacementFor_i =0; ReplacementFor_i < 2; ReplacementFor_i++) cin >> N[ReplacementFor_i];
 		for(int ReplacementFor_i =0; ReplacementFor_i < 2; ReplacementFor_i++) {
 			for(int k =0; k < M; k++) ReplacementFor_fr[ReplacementFor_i][k] =1;
 			for(int ReplacementFor_j =0; ReplacementFor_j < N[ReplacementFor_i]; ReplacementFor_j++) {
 				int a,b;
 				cin >> a >> b;
 				for(int k =a; k < b; k++) ReplacementFor_fr[ReplacementFor_i][k] =0;}
 			for(int ReplacementFor_j =0; ReplacementFor_j < 2; ReplacementFor_j++) for(int k =0; k <= M; k++) for(int ReplacementFor_l =0; ReplacementFor_l <= k; ReplacementFor_l++)
 				ReplacementFor_minex[ReplacementFor_i][ReplacementFor_j][k][ReplacementFor_l] =10*M+100;
 			ReplacementFor_minex[ReplacementFor_i][ReplacementFor_i][0][0] =0;}
 		for(int ReplacementFor_i =0; ReplacementFor_i < M; ReplacementFor_i++) for(int a =0; a < 2; a++) for(int b =0; b < 2; b++) {
 			for(int k =0; k < 2; k++) if(ReplacementFor_fr[k][ReplacementFor_i]) for(int ReplacementFor_j =0; ReplacementFor_j <= ReplacementFor_i; ReplacementFor_j++)
 				ReplacementFor_minex[a][k][ReplacementFor_i+1][ReplacementFor_j+k] =min(ReplacementFor_minex[a][k][ReplacementFor_i+1][ReplacementFor_j+k],ReplacementFor_minex[a][b][ReplacementFor_i][ReplacementFor_j]+(k^b));
 			}
 		ReplacementFor_minex[0][1][M][M/2]++;
 		ReplacementFor_minex[1][0][M][M/2]++;
 		int ReplacementFor_ans =10*M+100;
 		for(int ReplacementFor_i =0; ReplacementFor_i < 4; ReplacementFor_i++) ReplacementFor_ans =min(ReplacementFor_ans,ReplacementFor_minex[ReplacementFor_i/2][ReplacementFor_i%2][M][M/2]);
 		cout << ReplacementFor_ans << "\n";}
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
 	int T, M =24*60;
 	cin >> T;
 	int ReplacementFor_minex[2][2][M+1][M+1];
 	int ReplacementFor_fr[2][M];
 	for(int t =0; t < T; t++) {
 		cout << "Case #" << t+1 << ": ";
 		int N[2];
 		for(int ReplacementFor_i =0; ReplacementFor_i < 2; ReplacementFor_i++) cin >> N[ReplacementFor_i];
 		for(int ReplacementFor_i =0; ReplacementFor_i < 2; ReplacementFor_i++) {
 			for(int k =0; k < M; k++) ReplacementFor_fr[ReplacementFor_i][k] =1;
 			for(int ReplacementFor_j =0; ReplacementFor_j < N[ReplacementFor_i]; ReplacementFor_j++) {
 				int a,b;
 				cin >> a >> b;
 				for(int k =a; k < b; k++) ReplacementFor_fr[ReplacementFor_i][k] =0;}
 			for(int ReplacementFor_j =0; ReplacementFor_j < 2; ReplacementFor_j++) for(int k =0; k <= M; k++) for(int ReplacementFor_l =0; ReplacementFor_l <= k; ReplacementFor_l++)
 				ReplacementFor_minex[ReplacementFor_i][ReplacementFor_j][k][ReplacementFor_l] =10*M+100;
 			ReplacementFor_minex[ReplacementFor_i][ReplacementFor_i][0][0] =0;}
 		for(int ReplacementFor_i =0; ReplacementFor_i < M; ReplacementFor_i++) for(int a =0; a < 2; a++) for(int b =0; b < 2; b++) {
 			for(int k =0; k < 2; k++) if(ReplacementFor_fr[k][ReplacementFor_i]) for(int ReplacementFor_j =0; ReplacementFor_j <= ReplacementFor_i; ReplacementFor_j++)
 				ReplacementFor_minex[a][k][ReplacementFor_i+1][ReplacementFor_j+k] =min(ReplacementFor_minex[a][k][ReplacementFor_i+1][ReplacementFor_j+k],ReplacementFor_minex[a][b][ReplacementFor_i][ReplacementFor_j]+(k^b));
 			}
 		ReplacementFor_minex[0][1][M][M/2]++;
 		ReplacementFor_minex[1][0][M][M/2]++;
 		int ReplacementFor_ans =10*M+100;
 		for(int ReplacementFor_i =0; ReplacementFor_i < 4; ReplacementFor_i++) ReplacementFor_ans =min(ReplacementFor_ans,ReplacementFor_minex[ReplacementFor_i/2][ReplacementFor_i%2][M][M/2]);
 		cout << ReplacementFor_ans << "\n";}
 	return 0;}
 
 
 

