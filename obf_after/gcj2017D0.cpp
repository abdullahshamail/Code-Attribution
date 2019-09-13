
#include <iostream>
 
#include <cstdio>
 
#include <cmath>
 
#include <algorithm>
 
#include <cstring>
 
#include <map>
 
#include <set>
 
#include <queue>
 
#define ReplacementFor_eps 1e-8
 
#define ReplacementFor_MAXN 100050
 
#define ReplacementFor_LL long long
 using namespace std;
 char a[111][111];
 char s[111][111];
 bool ReplacementFor_bc[1111], ReplacementFor_br[1111];
 bool ReplacementFor_dl[1111], ReplacementFor_dr[1111];
 int ReplacementFor_ansc[11111], ReplacementFor_ansx[11111], ReplacementFor_ansy[11111];
 int ReplacementFor_idl[111][111], ReplacementFor_idr[111][111];
 
 bool ReplacementFor_g[222][222];
 bool ReplacementFor_marky[222];
 int ReplacementFor_linky[222];
 bool find(int x, int n) {
 	for (int y = 0; y < n; y++)
 		if (ReplacementFor_g[x][y] && !ReplacementFor_marky[y]) {
 			ReplacementFor_marky[y] = true;
 			if (ReplacementFor_linky[y] == -1 || find(ReplacementFor_linky[y], n)) {
 				ReplacementFor_linky[y] = x;
 				return true;
 			}
 		}
 	return false;
 }
 
 int ReplacementFor_erfen(int n) {
 	memset(ReplacementFor_linky, -1, sizeof(ReplacementFor_linky));
 	int ReplacementFor_ans = 0;
 	for (int ReplacementFor_i = 0; ReplacementFor_i < n; ReplacementFor_i++) {
 		memset(ReplacementFor_marky, false, sizeof(ReplacementFor_marky));
 		if (find(ReplacementFor_i, n))
 			ReplacementFor_ans++;
 	}
 	return ReplacementFor_ans;
 }
 
 int main() {
 	freopen("D-small-attempt0.in", "r", stdin);
 	freopen("D-small-attempt0.out", "w", stdout);
 	int ReplacementFor_tt, ReplacementFor_ri = 0;
 	scanf("%d", &ReplacementFor_tt);
 	int ReplacementFor_ans;
 	while (ReplacementFor_tt--) {
 		int n, m;
 		int ReplacementFor_tail = 0;
 		scanf("%d%d", &n, &m);
 		memset(a, 0, sizeof(a));
 		memset(s, 0, sizeof(s));
 		memset(ReplacementFor_bc, 0, sizeof(ReplacementFor_bc));
 		memset(ReplacementFor_br, 0, sizeof(ReplacementFor_br));
 		memset(ReplacementFor_dl, 0, sizeof(ReplacementFor_dl));
 		memset(ReplacementFor_dr, 0, sizeof(ReplacementFor_dr));
 		for (int ReplacementFor_i = 1; ReplacementFor_i <= n; ++ReplacementFor_i) {
 			int x, y;
 			x = n - ReplacementFor_i + 1, y = 1;
 			while (x <= n) {
 				ReplacementFor_idr[x][y] = ReplacementFor_i * 2 - 1;
 				x++;
 				y++;
 			}
 
 			x = 1, y = ReplacementFor_i;
 			while (y > 0) {
 				ReplacementFor_idl[x][y] = ReplacementFor_i * 2 - 1;
 				x++;
 				y--;
 			}
 
 			if (ReplacementFor_i == n)
 				continue;
 			x = 1, y = n - ReplacementFor_i + 1;
 			while (y <= n) {
 				ReplacementFor_idr[x][y] = ReplacementFor_i * 2;
 				x++;
 				y++;
 			}
 
 			x = n - ReplacementFor_i + 1, y = n;
 			while (x <= n) {
 				ReplacementFor_idl[x][y] = ReplacementFor_i * 2;
 				x++;
 				y--;
 			}
 		}
 		ReplacementFor_ans = 0;
 		for (int ReplacementFor_i = 0; ReplacementFor_i < m; ++ReplacementFor_i) {
 			char ReplacementFor_ch;
 			int ReplacementFor_l, ReplacementFor_r;
 			scanf(" %c%d%d", &ReplacementFor_ch, &ReplacementFor_l, &ReplacementFor_r);
 			a[ReplacementFor_l][ReplacementFor_r] = s[ReplacementFor_l][ReplacementFor_r] = ReplacementFor_ch;
 			if (ReplacementFor_ch == ((char)(0x10dd+1103-0x14bd)) || ReplacementFor_ch == ((char)(0x37a+2561-0xd50))) {
 				ReplacementFor_dl[ReplacementFor_idl[ReplacementFor_l][ReplacementFor_r]] = true;
 				ReplacementFor_dr[ReplacementFor_idr[ReplacementFor_l][ReplacementFor_r]] = true;
 				ReplacementFor_ans++;
 			}
 			if (ReplacementFor_ch == ((char)(0x1810+2564-0x21a5)) || ReplacementFor_ch == ((char)(0xc4+1291-0x557))) {
 				ReplacementFor_br[ReplacementFor_l] = true;
 				ReplacementFor_bc[ReplacementFor_r] = true;
 			}
 		}
 		memset(ReplacementFor_g, 0, sizeof(ReplacementFor_g));
 		for (int ReplacementFor_i = 1; ReplacementFor_i <= n; ++ReplacementFor_i) {
 			for (int ReplacementFor_j = 1; ReplacementFor_j <= n; ++ReplacementFor_j) {
 				if (ReplacementFor_dl[ReplacementFor_idl[ReplacementFor_i][ReplacementFor_j]] || ReplacementFor_dr[ReplacementFor_idr[ReplacementFor_i][ReplacementFor_j]])
 					continue;
 				ReplacementFor_g[ReplacementFor_idl[ReplacementFor_i][ReplacementFor_j]][ReplacementFor_idr[ReplacementFor_i][ReplacementFor_j]] = 1;
 			}
 		}
 		ReplacementFor_ans += ReplacementFor_erfen(n * 2);
 		ReplacementFor_ans += n;
 		for (int ReplacementFor_i = 1; ReplacementFor_i < n * 2; ++ReplacementFor_i) {
 			if (ReplacementFor_linky[ReplacementFor_i] != -1) {
 				int ReplacementFor_xx = ReplacementFor_linky[ReplacementFor_i], ReplacementFor_yy = ReplacementFor_i;
 				for (int ReplacementFor_u = 1; ReplacementFor_u <= n; ++ReplacementFor_u) {
 					for (int ReplacementFor_v = 1; ReplacementFor_v <= n; ++ReplacementFor_v) {
 						if (ReplacementFor_idl[ReplacementFor_u][ReplacementFor_v] == ReplacementFor_xx && ReplacementFor_idr[ReplacementFor_u][ReplacementFor_v] == ReplacementFor_yy) {
 							if (s[ReplacementFor_u][ReplacementFor_v] == ((char)(0x1288+1418-0x179a)))
 								s[ReplacementFor_u][ReplacementFor_v] = ((char)(0x571+7128-0x20da));
 							else
 								s[ReplacementFor_u][ReplacementFor_v] = ((char)(0x1849+1612-0x1e6a));
 							
 						}
 					}
 				}
 			}
 		}
 		for (int ReplacementFor_i = 1; ReplacementFor_i <= n; ++ReplacementFor_i) {
 			if (ReplacementFor_br[ReplacementFor_i] == true)
 				continue;
 			for (int ReplacementFor_j = 1; ReplacementFor_j <= n; ++ReplacementFor_j) {
 				if (ReplacementFor_bc[ReplacementFor_j] == true)
 					continue;
 				if (s[ReplacementFor_i][ReplacementFor_j] == ((char)(0x63+453-0x1fd)))
 					s[ReplacementFor_i][ReplacementFor_j] = ((char)(0x10c+1134-0x50b));
 				else
 					s[ReplacementFor_i][ReplacementFor_j] = ((char)(0xd90+5323-0x21e3));
 				ReplacementFor_br[ReplacementFor_i] = true;
 				ReplacementFor_bc[ReplacementFor_j] = true;
 				break;
 				
 			}
 		}
 		for (int ReplacementFor_i = 1; ReplacementFor_i <= n; ++ReplacementFor_i)
 			for (int ReplacementFor_j = 1; ReplacementFor_j <= n; ++ReplacementFor_j) {
 				if (s[ReplacementFor_i][ReplacementFor_j] != a[ReplacementFor_i][ReplacementFor_j]) {
 					ReplacementFor_tail++;
 					ReplacementFor_ansc[ReplacementFor_tail] = s[ReplacementFor_i][ReplacementFor_j];
 					ReplacementFor_ansx[ReplacementFor_tail] = ReplacementFor_i;
 					ReplacementFor_ansy[ReplacementFor_tail] = ReplacementFor_j;
 				}
 			}
 		printf("Case #%d: %d %d\n", ++ReplacementFor_ri, ReplacementFor_ans, ReplacementFor_tail);
 		for (int ReplacementFor_i = 1; ReplacementFor_i <= ReplacementFor_tail; ++ReplacementFor_i)
 			printf("%c %d %d\n", ReplacementFor_ansc[ReplacementFor_i], ReplacementFor_ansx[ReplacementFor_i], ReplacementFor_ansy[ReplacementFor_i]);
 	}
 	return 0;
 }

