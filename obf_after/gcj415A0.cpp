
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
 map<ReplacementFor_LL, ReplacementFor_LL> ReplacementFor_mp;
 
#define ReplacementFor_eps 1e-8
 priority_queue<ReplacementFor_LL> ReplacementFor_q;
 int ReplacementFor_req[1111], ReplacementFor_num[55][55];
 int ReplacementFor_tail[55];
 int ReplacementFor_mincal(int ReplacementFor_cnt, int ReplacementFor_per) {
 	int ReplacementFor_l, ReplacementFor_r;
 	ReplacementFor_l = 0, ReplacementFor_r = 1000000;
 	while (ReplacementFor_r - ReplacementFor_l > 1) {
 		int ReplacementFor_mid = (ReplacementFor_l + ReplacementFor_r) >> 1;
 		if (1.0* ReplacementFor_per * ReplacementFor_mid * 1.1 + ReplacementFor_eps >= ReplacementFor_cnt)
 			ReplacementFor_r = ReplacementFor_mid;
 		else
 			ReplacementFor_l = ReplacementFor_mid;
 	}
 	if (1.0* ReplacementFor_per * ReplacementFor_r * 0.9 - ReplacementFor_eps >= ReplacementFor_cnt)
 		return -1;
 	return ReplacementFor_r;
 }
 int ReplacementFor_maxcal(int ReplacementFor_cnt, int ReplacementFor_per) {
 	int ReplacementFor_l, ReplacementFor_r;
 	ReplacementFor_l = 0, ReplacementFor_r = 1000001;
 	while (ReplacementFor_r - ReplacementFor_l > 1) {
 		int ReplacementFor_mid = (ReplacementFor_l + ReplacementFor_r) >> 1;
 		if (1.0* ReplacementFor_per * ReplacementFor_mid * 0.9 - ReplacementFor_eps <= ReplacementFor_cnt)
 			ReplacementFor_l = ReplacementFor_mid;
 		else
 			ReplacementFor_r = ReplacementFor_mid;
 	}
 	if (1.0* ReplacementFor_per * ReplacementFor_l * 1.1 + ReplacementFor_eps <= ReplacementFor_cnt)
 		return -1;
 	return ReplacementFor_l;
 }
 int main() {
 	freopen("B-small-attempt1.in","r",stdin);
 	freopen("B-small-attempt1.out","w",stdout);
 	int ReplacementFor_tt, ReplacementFor_ri = 0;
 	scanf("%d", &ReplacementFor_tt);
 	while (ReplacementFor_tt--) {
 		int n, m;
 		scanf("%d%d", &n, &m);
 		for (int ReplacementFor_i = 0; ReplacementFor_i < n; ++ReplacementFor_i)
 			scanf("%d", &ReplacementFor_req[ReplacementFor_i]);
 		for (int ReplacementFor_i = 0; ReplacementFor_i < n; ++ReplacementFor_i) {
 			for (int ReplacementFor_j = 0; ReplacementFor_j < m; ++ReplacementFor_j) {
 				scanf("%d", &ReplacementFor_num[ReplacementFor_i][ReplacementFor_j]);
 			}
 			sort(ReplacementFor_num[ReplacementFor_i], ReplacementFor_num[ReplacementFor_i] + m);
 		}
 		int ReplacementFor_ans = 0;
 		for (int ReplacementFor_i = 0; ReplacementFor_i < n; ++ReplacementFor_i) {
 			ReplacementFor_tail[ReplacementFor_i] = 0;
 		}
 		while (true) {
 			int ReplacementFor_l, ReplacementFor_r;
 			ReplacementFor_l = 0, ReplacementFor_r = 1000000;
 			int ReplacementFor_minid = -1;
 			int ReplacementFor_one, ReplacementFor_cnt;
 			for (int ReplacementFor_i = 0; ReplacementFor_i < n; ++ReplacementFor_i) {
 				if (ReplacementFor_minid == -1 || (ReplacementFor_LL) ReplacementFor_cnt * ReplacementFor_req[ReplacementFor_i] > (ReplacementFor_LL)ReplacementFor_num[ReplacementFor_i][ReplacementFor_tail[ReplacementFor_i]] * ReplacementFor_one) {
 					ReplacementFor_minid = ReplacementFor_i;
 					ReplacementFor_cnt = ReplacementFor_num[ReplacementFor_i][ReplacementFor_tail[ReplacementFor_i]];
 					ReplacementFor_one = ReplacementFor_req[ReplacementFor_i];
 				}
 				int ReplacementFor_nowl, ReplacementFor_nowr;
 				ReplacementFor_nowl = ReplacementFor_mincal(ReplacementFor_num[ReplacementFor_i][ReplacementFor_tail[ReplacementFor_i]], ReplacementFor_req[ReplacementFor_i]);
 				ReplacementFor_nowr = ReplacementFor_maxcal(ReplacementFor_num[ReplacementFor_i][ReplacementFor_tail[ReplacementFor_i]], ReplacementFor_req[ReplacementFor_i]);
 				ReplacementFor_l = max(ReplacementFor_l, ReplacementFor_nowl);
 				ReplacementFor_r = min(ReplacementFor_r, ReplacementFor_nowr);
 			}
 			if (ReplacementFor_l <= ReplacementFor_r&&ReplacementFor_r!=0) {
 				ReplacementFor_ans++;
 				for (int ReplacementFor_i = 0; ReplacementFor_i < n; ++ReplacementFor_i)
 					ReplacementFor_tail[ReplacementFor_i]++;
 			} else {
 				ReplacementFor_tail[ReplacementFor_minid]++;
 			}
 			int flag = 1;
 			for (int ReplacementFor_i = 0; ReplacementFor_i < n; ++ReplacementFor_i) {
 				if (ReplacementFor_tail[ReplacementFor_i] == m)
 					flag = 0;
 			}
 			if (flag == 0)
 				break;
 		}
 		printf("Case #%d: %d\n",++ReplacementFor_ri,ReplacementFor_ans);
 	}
 }

