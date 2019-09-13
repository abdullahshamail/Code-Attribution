
 
 
 
 
 
 
 
#include <cstring>
 
#include <cstdio>
 
#include <algorithm>
 
#include <cmath>
 
#include <queue>
 
#include <map>
 
#include <set>
 
#include <iostream>
 
#define max(x,y) ((x)>(y)?(x):(y))
 
#define min(x,y) ((x)<(y)?(x):(y))
 
#define ReplacementFor_MAXN 100050
 
#define ReplacementFor_LL long long
 using namespace std;
 char a[55][55];
 char s[55][55];
 
 bool ReplacementFor_h[55][55], ReplacementFor_v[55][55];
 int n, m;
 bool ReplacementFor_ismir(char x) {
 	return x == ((char)(0x2290+820-0x2597)) || x == ((char)(0x68f+4870-0x1919));
 }
 void ReplacementFor_vextend(int ReplacementFor_i, int ReplacementFor_j) {
 	int x, y;
 	x = ReplacementFor_i, y = ReplacementFor_j;
 	while (x >= 0) {
 		if (ReplacementFor_ismir(s[x][y])) {
 			ReplacementFor_v[x][y] = true;
 			break;
 		}
 		if (s[x][y] == ((char)(0xb3a+454-0xcdd)))
 			break;
 		x--;
 	}
 	x = ReplacementFor_i, y = ReplacementFor_j;
 	while (x < n) {
 		if (ReplacementFor_ismir(s[x][y])) {
 			ReplacementFor_v[x][y] = true;
 			break;
 		}
 		if (s[x][y] == ((char)(0x1355+4827-0x260d)))
 			break;
 		x++;
 	}
 }
 void ReplacementFor_hextend(int ReplacementFor_i, int ReplacementFor_j) {
 	int x, y;
 	x = ReplacementFor_i, y = ReplacementFor_j;
 	while (y >= 0) {
 		if (ReplacementFor_ismir(s[x][y])) {
 			ReplacementFor_h[x][y] = true;
 			break;
 		}
 		if (s[x][y] == ((char)(0xe95+5254-0x22f8)))
 			break;
 		y--;
 	}
 	x = ReplacementFor_i, y = ReplacementFor_j;
 	while (y < m) {
 		if (ReplacementFor_ismir(s[x][y])) {
 			ReplacementFor_h[x][y] = true;
 			break;
 		}
 		if (s[x][y] == ((char)(0x371+8655-0x251d)))
 			break;
 		y++;
 	}
 }
 bool ok[55][55];
 int main() {
 	int ReplacementFor_tt, ReplacementFor_ri = 0;
 	scanf("%d", &ReplacementFor_tt);
 	while (ReplacementFor_tt--) {
 		scanf("%d%d", &n, &m);
 		memset(s, 0, sizeof(s));
 		memset(ReplacementFor_h, 0, sizeof(ReplacementFor_h));
 		memset(ReplacementFor_v, 0, sizeof(ReplacementFor_v));
 		memset(ok, 0, sizeof(ok));
 		for (int ReplacementFor_i = 0; ReplacementFor_i < n; ++ReplacementFor_i) {
 			scanf(" %s", a[ReplacementFor_i]);
 			for (int ReplacementFor_j = 0; ReplacementFor_j < m; ++ReplacementFor_j)
 				if (a[ReplacementFor_i][ReplacementFor_j] != ((char)(0x13e6+2009-0x1b91)))
 					ok[ReplacementFor_i][ReplacementFor_j] = true;
 		}
 
 
 
 
 
 
 		for (int ReplacementFor_i = 0; ReplacementFor_i < n; ++ReplacementFor_i) {
 			for (int ReplacementFor_j = 0; ReplacementFor_j < m; ++ReplacementFor_j) {
 				if (ReplacementFor_ismir(s[ReplacementFor_i][ReplacementFor_j])) {
 					for (int k = ReplacementFor_j + 1; k < m; ++k) {
 						if (ReplacementFor_ismir(s[ReplacementFor_i][k])) {
 							ReplacementFor_v[ReplacementFor_i][ReplacementFor_j] = true;
 							ReplacementFor_v[ReplacementFor_i][k] = true;
 							for (int x = ReplacementFor_j + 1; x < k; ++x) {
 								ReplacementFor_vextend(ReplacementFor_i, x);
 							}
 							continue;
 						}
 					}
 					for (int k = ReplacementFor_i + 1; k < n; ++k) {
 						if (ReplacementFor_ismir(s[ReplacementFor_i][k])) {
 							ReplacementFor_h[ReplacementFor_i][ReplacementFor_j] = true;
 							ReplacementFor_h[k][ReplacementFor_j] = true;
 							for (int x = ReplacementFor_i + 1; x < k; ++x) {
 								ReplacementFor_hextend(x, ReplacementFor_j);
 							}
 							continue;
 						}
 					}
 				}
 			}
 		}
 		int flag = 1;
 		for (int ReplacementFor_i = 0; ReplacementFor_i < n; ++ReplacementFor_i) {
 			for (int ReplacementFor_j = 0; ReplacementFor_j < m; ++ReplacementFor_j) {
 				if (ReplacementFor_h[ReplacementFor_i][ReplacementFor_j] && ReplacementFor_v[ReplacementFor_i][ReplacementFor_j])
 					flag = 0;
 				if (ReplacementFor_h[ReplacementFor_i][ReplacementFor_j]) {
 					s[ReplacementFor_i][ReplacementFor_j] = ((char)(0xfa8+163-0x101e));
 					int x = ReplacementFor_i, y = ReplacementFor_j + 1;
 					while (y < m && s[x][y] == ((char)(0xdad+6108-0x255b))) {
 						ok[x][y] = true;
 						y++;
 					}
 					x = ReplacementFor_i, y = ReplacementFor_j - 1;
 					while (y >= 0 && s[x][y] == ((char)(0x1a03+297-0x1afe))) {
 						ok[x][y] = true;
 						y--;
 					}
 				}
 				if (ReplacementFor_v[ReplacementFor_i][ReplacementFor_j]) {
 					s[ReplacementFor_i][ReplacementFor_j] = ((char)(0xb7f+6065-0x22b4));
 					int x = ReplacementFor_i + 1, y = ReplacementFor_j;
 					while (x < n && s[x][y] == ((char)(0x471+1027-0x846))) {
 						ok[x][y] = true;
 						x++;
 					}
 					x = ReplacementFor_i - 1, y = ReplacementFor_j;
 					while (x >= 0 && s[x][y] == ((char)(0x19e1+1723-0x206e))) {
 						ok[x][y] = true;
 						x--;
 					}
 				}
 			}
 		}
 		if (flag == 0) {
 			printf("Case #%d: IMPOSSIBLE\n", ++ReplacementFor_ri);
 			continue;
 		}
 		puts("--");
 		flag=1;
 		while (flag) {
 			flag = 0;
 			for (int ReplacementFor_i = 0; ReplacementFor_i < n; ++ReplacementFor_i) {
 				if (flag)
 					break;
 				for (int ReplacementFor_j = 0; ReplacementFor_j < m; ++ReplacementFor_j) {
 					if (ok[ReplacementFor_i][ReplacementFor_j])
 						continue;
 					int ReplacementFor_cnt = 0;
 					int ReplacementFor_posx, ReplacementFor_posy, ReplacementFor_ty = -1;
 					int x = ReplacementFor_i, y = ReplacementFor_j + 1;
 					while (y < m && s[x][y] == ((char)(0x97c+2307-0x1251))) {
 						y++;
 					}
 					if (y < m && !ReplacementFor_h[x][y] && !ReplacementFor_v[x][y]) {
 						ReplacementFor_ty = 0;
 						ReplacementFor_posx = x;
 						ReplacementFor_posy = y;
 						ReplacementFor_cnt++;
 					}
 					x = ReplacementFor_i, y = ReplacementFor_j - 1;
 					while (y >= 0 && s[x][y] == ((char)(0x1f90+742-0x2248))) {
 						y--;
 					}
 					if (y >= 0 && !ReplacementFor_h[x][y] && !ReplacementFor_v[x][y]) {
 						ReplacementFor_cnt++;
 						ReplacementFor_ty = 0;
 						ReplacementFor_posx = x;
 						ReplacementFor_posy = y;
 					}
 
 					x = ReplacementFor_i + 1, y = ReplacementFor_j;
 					while (x < n && s[x][y] == ((char)(0x215+6575-0x1b96))) {
 						x++;
 					}
 					if (x < n && !ReplacementFor_h[x][y] && !ReplacementFor_v[x][y]) {
 						ReplacementFor_cnt++;
 						ReplacementFor_ty = 1;
 						ReplacementFor_posx = x;
 						ReplacementFor_posy = y;
 					}
 					x = ReplacementFor_i - 1, y = ReplacementFor_j;
 					while (x >= 0 && s[x][y] == ((char)(0x3e1+4633-0x15cc))) {
 						x--;
 					}
 					if (x >= 0 && !ReplacementFor_h[x][y] && !ReplacementFor_v[x][y]) {
 						ReplacementFor_cnt++;
 						ReplacementFor_ty = 1;
 						ReplacementFor_posx = x;
 						ReplacementFor_posy = y;
 					}
 					if (ReplacementFor_cnt == 1) {
 						if (ReplacementFor_ty == 0) {
 							ReplacementFor_h[ReplacementFor_posx][ReplacementFor_posy] = true;
 							s[ReplacementFor_posx][ReplacementFor_posy] = ((char)(0xfc2+1807-0x16a4));
 							int x = ReplacementFor_posx, y = ReplacementFor_posy + 1;
 							while (y < m && s[x][y] == ((char)(0x871+3017-0x140c))) {
 								ok[x][y] = true;
 								y++;
 							}
 							x = ReplacementFor_posx, y = ReplacementFor_posy - 1;
 							while (y >= 0 && s[x][y] == ((char)(0x1f1+7750-0x2009))) {
 								ok[x][y] = true;
 								y--;
 							}
 
 						} else {
 							ReplacementFor_v[ReplacementFor_posx][ReplacementFor_posy] = true;
 							s[ReplacementFor_posx][ReplacementFor_posy] = ((char)(0x214b+356-0x2233));
 							int x = ReplacementFor_posx + 1, ReplacementFor_posy = ReplacementFor_j;
 							while (x < n && s[x][y] == ((char)(0xe5a+2831-0x193b))) {
 								ok[x][y] = true;
 								x++;
 							}
 							x = ReplacementFor_posx - 1, ReplacementFor_posy = ReplacementFor_j;
 							while (x >= 0 && s[x][y] == ((char)(0x232d+228-0x23e3))) {
 								ok[x][y] = true;
 								x--;
 							}
 						}
 						flag = true;
 					}
 				}
 			}
 		}
 		for (int ReplacementFor_i = 0; ReplacementFor_i < n; ++ReplacementFor_i) {
 			for (int ReplacementFor_j = 0; ReplacementFor_j < m; ++ReplacementFor_j) {
 				if (!ok[ReplacementFor_i][ReplacementFor_j])
 					flag = 0;
 			}
 		}
 		if (flag == 0) {
 			printf("Case #%d: IMPOSSIBLE\n", ++ReplacementFor_ri);
 			continue;
 		} else {
 			printf("Case #%d: POSSIBLE\n", ++ReplacementFor_ri);
 			for (int ReplacementFor_i = 0; ReplacementFor_i < n; ++ReplacementFor_i)
 				printf("%s\n", s[ReplacementFor_i]);
 		}
 		return 0;
 	}
 }

