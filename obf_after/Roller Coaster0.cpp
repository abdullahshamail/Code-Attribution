
#include <cstdio>
 
#include <iostream>
 
#include <algorithm>
 
#include <string>
 
#include <vector>
 
#define ReplacementFor_MAX_N 1001
 using namespace std;
 int n,m,c;
 int ReplacementFor_tab[ReplacementFor_MAX_N][ReplacementFor_MAX_N];
 void clear()
 {
 	for (int ReplacementFor_i = 0; ReplacementFor_i < ReplacementFor_MAX_N; ++ReplacementFor_i)
 		for (int ReplacementFor_j = 0; ReplacementFor_j < ReplacementFor_MAX_N; ++ReplacementFor_j)
 			ReplacementFor_tab[ReplacementFor_i][ReplacementFor_j] = 0;
 }
 
 int ReplacementFor_check(int m) {
 	vector<int> ReplacementFor_sie(ReplacementFor_MAX_N);
 	int ReplacementFor_sum = 0;
 	int ReplacementFor_res = 0;
 	for (int ReplacementFor_i = 1; ReplacementFor_i <= c; ++ReplacementFor_i)
 	{
 		
 		for (int ReplacementFor_j = n; ReplacementFor_j >= 1; --ReplacementFor_j)
 		{
 			int ReplacementFor_tmp = ReplacementFor_tab[ReplacementFor_i][ReplacementFor_j];
 			int t = m - ReplacementFor_sie[ReplacementFor_j]-ReplacementFor_tmp;
 			if (t < 0)
 			{
 				ReplacementFor_sum += -t;
 				ReplacementFor_sie[ReplacementFor_j] = m;
 			}
 			else
 			{
 				ReplacementFor_sie[ReplacementFor_j] += ReplacementFor_tmp;
 			}
 
 			t = m - ReplacementFor_sie[ReplacementFor_j] - ReplacementFor_sum;
 			int ReplacementFor_nsum = 0;
 			if (t < 0)
 			{
 				ReplacementFor_nsum = -t;
 				ReplacementFor_sie[ReplacementFor_j] = m;
 			}
 			else
 			{
 				ReplacementFor_sie[ReplacementFor_j] += ReplacementFor_sum;
 			}
 			ReplacementFor_res += ReplacementFor_sum - ReplacementFor_nsum;
 			ReplacementFor_sum = ReplacementFor_nsum;
 		}
 		if (ReplacementFor_sum != 0)return -1;
 		ReplacementFor_sum = 0;
 	}
 	return ReplacementFor_res;
 }
 pair<int,int> ReplacementFor_binSearch(int p, int k)
 {
 	
 	int ReplacementFor_sr = (k + p) / 2;
 	
 	int ReplacementFor_z = ReplacementFor_check(ReplacementFor_sr);	
 	if (p == k)return make_pair(p, ReplacementFor_z);
 	if (ReplacementFor_sr == p && ReplacementFor_z!=-1)return make_pair(ReplacementFor_sr,ReplacementFor_z);
 	
 	if (ReplacementFor_z != -1)return ReplacementFor_binSearch(p, ReplacementFor_sr);
 	if (ReplacementFor_sr == k - 1 && ReplacementFor_z==-1)return make_pair(k, ReplacementFor_check(k));
 	
 	return ReplacementFor_binSearch(p, ReplacementFor_sr);
 }
 void ReplacementFor_solve()
 {
 	int ReplacementFor_ma = 0;
 	int s = 0;
 	for (int ReplacementFor_i = 1; ReplacementFor_i <= c; ++ReplacementFor_i)
 	{
 		s = 0;
 		for (int ReplacementFor_j = 1; ReplacementFor_j <= n; ++ReplacementFor_j)
 			s += ReplacementFor_tab[ReplacementFor_i][ReplacementFor_j];
 		ReplacementFor_ma = max(ReplacementFor_ma, s);
 	}
 	auto ReplacementFor_res = ReplacementFor_binSearch(ReplacementFor_ma, m);
 	cout << ReplacementFor_res.first << " " << ReplacementFor_res.second<<"\n";
 }
 void ReplacementFor_input()
 {
 	cin >> n >> c >> m;
 	for (int ReplacementFor_i = 0; ReplacementFor_i < m; ++ReplacementFor_i)
 	{
 		int a, b;
 		cin >> a >> b;
 		ReplacementFor_tab[b][a]++;
 	}
 }
 int main()
 {
 	int t, m, n;
 	cin >> t;
 	for (int k = 1; k <= t; ++k)
 	{
 		clear();
 		ReplacementFor_input();
 		printf("Case #%d: ", k);
 		ReplacementFor_solve();
 	}
 }
#include <cstdio>
 
#include <iostream>
 
#include <algorithm>
 
#include <string>
 
#include <vector>
 
#define ReplacementFor_MAX_N 1001
 using namespace std;
 int n,m,c;
 int ReplacementFor_tab[ReplacementFor_MAX_N][ReplacementFor_MAX_N];
 void clear()
 {
 	for (int ReplacementFor_i = 0; ReplacementFor_i < ReplacementFor_MAX_N; ++ReplacementFor_i)
 		for (int ReplacementFor_j = 0; ReplacementFor_j < ReplacementFor_MAX_N; ++ReplacementFor_j)
 			ReplacementFor_tab[ReplacementFor_i][ReplacementFor_j] = 0;
 }
 
 int ReplacementFor_check(int m) {
 	vector<int> ReplacementFor_sie(ReplacementFor_MAX_N);
 	int ReplacementFor_sum = 0;
 	int ReplacementFor_res = 0;
 	for (int ReplacementFor_i = 1; ReplacementFor_i <= c; ++ReplacementFor_i)
 	{
 		
 		for (int ReplacementFor_j = n; ReplacementFor_j >= 1; --ReplacementFor_j)
 		{
 			int ReplacementFor_tmp = ReplacementFor_tab[ReplacementFor_i][ReplacementFor_j];
 			int t = m - ReplacementFor_sie[ReplacementFor_j]-ReplacementFor_tmp;
 			if (t < 0)
 			{
 				ReplacementFor_sum += -t;
 				ReplacementFor_sie[ReplacementFor_j] = m;
 			}
 			else
 			{
 				ReplacementFor_sie[ReplacementFor_j] += ReplacementFor_tmp;
 			}
 
 			t = m - ReplacementFor_sie[ReplacementFor_j] - ReplacementFor_sum;
 			int ReplacementFor_nsum = 0;
 			if (t < 0)
 			{
 				ReplacementFor_nsum = -t;
 				ReplacementFor_sie[ReplacementFor_j] = m;
 			}
 			else
 			{
 				ReplacementFor_sie[ReplacementFor_j] += ReplacementFor_sum;
 			}
 			ReplacementFor_res += ReplacementFor_sum - ReplacementFor_nsum;
 			ReplacementFor_sum = ReplacementFor_nsum;
 		}
 		if (ReplacementFor_sum != 0)return -1;
 		ReplacementFor_sum = 0;
 	}
 	return ReplacementFor_res;
 }
 pair<int,int> ReplacementFor_binSearch(int p, int k)
 {
 	
 	int ReplacementFor_sr = (k + p) / 2;
 	
 	int ReplacementFor_z = ReplacementFor_check(ReplacementFor_sr);	
 	if (p == k)return make_pair(p, ReplacementFor_z);
 	if (ReplacementFor_sr == p && ReplacementFor_z!=-1)return make_pair(ReplacementFor_sr,ReplacementFor_z);
 	
 	if (ReplacementFor_z != -1)return ReplacementFor_binSearch(p, ReplacementFor_sr);
 	if (ReplacementFor_sr == k - 1 && ReplacementFor_z==-1)return make_pair(k, ReplacementFor_check(k));
 	
 	return ReplacementFor_binSearch(p, ReplacementFor_sr);
 }
 void ReplacementFor_solve()
 {
 	int ReplacementFor_ma = 0;
 	int s = 0;
 	for (int ReplacementFor_i = 1; ReplacementFor_i <= c; ++ReplacementFor_i)
 	{
 		s = 0;
 		for (int ReplacementFor_j = 1; ReplacementFor_j <= n; ++ReplacementFor_j)
 			s += ReplacementFor_tab[ReplacementFor_i][ReplacementFor_j];
 		ReplacementFor_ma = max(ReplacementFor_ma, s);
 	}
 	auto ReplacementFor_res = ReplacementFor_binSearch(ReplacementFor_ma, m);
 	cout << ReplacementFor_res.first << " " << ReplacementFor_res.second<<"\n";
 }
 void ReplacementFor_input()
 {
 	cin >> n >> c >> m;
 	for (int ReplacementFor_i = 0; ReplacementFor_i < m; ++ReplacementFor_i)
 	{
 		int a, b;
 		cin >> a >> b;
 		ReplacementFor_tab[b][a]++;
 	}
 }
 int main()
 {
 	int t, m, n;
 	cin >> t;
 	for (int k = 1; k <= t; ++k)
 	{
 		clear();
 		ReplacementFor_input();
 		printf("Case #%d: ", k);
 		ReplacementFor_solve();
 	}
 }
