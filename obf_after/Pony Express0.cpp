
#include <cstdio>
 
#include <iostream>
 
#include <algorithm>
 
#include <string>
 
#include <vector>
 
#include <queue>
 
#include <iomanip> 
 
#define ReplacementFor_MAX_N 101
 using namespace std;
 struct ReplacementFor_Node
 {
 	bool ReplacementFor_vis;
 	vector<pair<int,double> > ReplacementFor_edges;
 	double ReplacementFor_entertime;
 	double ReplacementFor_dis, ReplacementFor_speed;
 };
 struct ReplacementFor_horse {
 	double time;
 	double ReplacementFor_dis;
 	int ReplacementFor_node;
 	double ReplacementFor_speed;
 	bool operator < (ReplacementFor_horse a)const 
 	{
 		if (a.time < time)return true;
 		return false;
 	}
 };
 ReplacementFor_Node graph[ReplacementFor_MAX_N];
 int n,ReplacementFor_q;
 void clear()
 {
 	for (int ReplacementFor_i = 0; ReplacementFor_i < ReplacementFor_MAX_N; ++ReplacementFor_i)
 	{
 		
 		
 		graph[ReplacementFor_i].ReplacementFor_vis = false;
 		graph[ReplacementFor_i].ReplacementFor_entertime = -1;
 	}
 }
 double ReplacementFor_di(int b, int ReplacementFor_e)
 {
 	graph[b].ReplacementFor_entertime = 0;
 	priority_queue<ReplacementFor_horse> ReplacementFor_que;
 	ReplacementFor_horse ReplacementFor_h;
 
 	ReplacementFor_h.ReplacementFor_dis = graph[b].ReplacementFor_dis;
 	ReplacementFor_h.time = 0;
 	ReplacementFor_h.ReplacementFor_speed = graph[b].ReplacementFor_speed;
 	ReplacementFor_h.ReplacementFor_node = b;
 	ReplacementFor_que.push(ReplacementFor_h);
 	while (!ReplacementFor_que.empty())
 	{
 		ReplacementFor_h = ReplacementFor_que.top();
 		ReplacementFor_que.pop();
 		if (ReplacementFor_h.ReplacementFor_node == ReplacementFor_e)return ReplacementFor_h.time;
 		if (!graph[ReplacementFor_h.ReplacementFor_node].ReplacementFor_vis && ReplacementFor_h.ReplacementFor_node!=b)
 		{
 			ReplacementFor_horse a;
 			a.time = ReplacementFor_h.time;
 			a.ReplacementFor_dis = graph[ReplacementFor_h.ReplacementFor_node].ReplacementFor_dis;
 			a.ReplacementFor_speed = graph[ReplacementFor_h.ReplacementFor_node].ReplacementFor_speed;
 			a.ReplacementFor_node = ReplacementFor_h.ReplacementFor_node;
 			ReplacementFor_que.push(a);
 			graph[ReplacementFor_h.ReplacementFor_node].ReplacementFor_vis = true;
 			
 		}
 		for (auto ReplacementFor_it : graph[ReplacementFor_h.ReplacementFor_node].ReplacementFor_edges)
 		{
 			if (ReplacementFor_it.second <= ReplacementFor_h.ReplacementFor_dis)
 			{
 				ReplacementFor_horse a;
 				a.ReplacementFor_dis = ReplacementFor_h.ReplacementFor_dis - ReplacementFor_it.second;
 				a.ReplacementFor_node = ReplacementFor_it.first;
 				a.ReplacementFor_speed = ReplacementFor_h.ReplacementFor_speed;
 				a.time = ReplacementFor_h.time + ReplacementFor_it.second / ReplacementFor_h.ReplacementFor_speed;
 				ReplacementFor_que.push(a);
 				if (graph[ReplacementFor_it.first].ReplacementFor_entertime == -1)graph[ReplacementFor_it.first].ReplacementFor_entertime = a.time;
 				graph[ReplacementFor_it.first].ReplacementFor_entertime = min(graph[ReplacementFor_it.first].ReplacementFor_entertime, a.time);
 			}
 		}
 	}
 }
 void ReplacementFor_solve()
 {
 	int a, b;
 	while (ReplacementFor_q--) {
 		clear();
 		cin >> a >> b;
 		cout <<setprecision(9) << ReplacementFor_di(a, b)<<" ";
 	}
 
 	cout << "\n";
 
 }
 void ReplacementFor_input()
 {
 	double a;
 	cin >> n >> ReplacementFor_q;
 	for (int ReplacementFor_i = 1; ReplacementFor_i <= n; ++ReplacementFor_i)
 		cin >> graph[ReplacementFor_i].ReplacementFor_dis >> graph[ReplacementFor_i].ReplacementFor_speed;
 	for (int ReplacementFor_i = 1; ReplacementFor_i <= n; ++ReplacementFor_i)
 	{
 		graph[ReplacementFor_i].ReplacementFor_edges.clear();
 		for (int ReplacementFor_j = 1; ReplacementFor_j <= n; ++ReplacementFor_j)
 		{
 			cin >> a;
 			if (a != -1)
 			{
 				graph[ReplacementFor_i].ReplacementFor_edges.push_back(make_pair(ReplacementFor_j, a));
 			}
 		}
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
