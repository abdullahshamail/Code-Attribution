
#include <bits/stdc++.h>
 
#include <sys/time.h>
 using namespace std;
 typedef signed long long ReplacementFor_ll;
 
 
#undef ReplacementFor__P
 
#define ReplacementFor__P(...) (void)printf(ReplacementFor___VA_ARGS__)
 
#define FOR(x,ReplacementFor_to) for(x=0;x<ReplacementFor_to;x++)
 
#define ReplacementFor_FORR(x,ReplacementFor_arr) for(auto& x:ReplacementFor_arr)
 
#define ReplacementFor_ITR(x,c) for(ReplacementFor___typeof(c.begin()) x=c.begin();x!=c.end();x++)
 
#define ALL(a) (a.begin()),(a.end())
 
#define ReplacementFor_ZERO(a) memset(a,0,sizeof(a))
 
#define MINUS(a) memset(a,0xff,sizeof(a))
 
 
 
 int N,C,M;
 int P[1010],B[1010];
 vector<int> ReplacementFor_PP[1010];
 
 
 void ReplacementFor_solve(int ReplacementFor__loop) {
 	int f,ReplacementFor_i,ReplacementFor_j,k,ReplacementFor_l,x,y;
 	
 	cin>>N>>C>>M;
 	FOR(ReplacementFor_i,C) ReplacementFor_PP[ReplacementFor_i].clear();
 	FOR(ReplacementFor_i,M) {
 		cin>>P[ReplacementFor_i]>>B[ReplacementFor_i];
 		ReplacementFor_PP[B[ReplacementFor_i]-1].push_back(P[ReplacementFor_i]-1);
 	}
 	
 	if(C>2) return;
 	
 	int ReplacementFor_ma=max({(int)ReplacementFor_PP[0].size(),(int)ReplacementFor_PP[1].size(),(int)count(ALL(ReplacementFor_PP[0]),0)+(int)count(ALL(ReplacementFor_PP[1]),0)});
 	while(ReplacementFor_PP[0].size()<ReplacementFor_ma) ReplacementFor_PP[0].push_back(1010);
 	while(ReplacementFor_PP[1].size()<ReplacementFor_ma) ReplacementFor_PP[1].push_back(1011);
 	sort(ALL(ReplacementFor_PP[0]));
 	sort(ALL(ReplacementFor_PP[1]));
 	
 	int ReplacementFor_hoge=0;
 	FOR(ReplacementFor_i,N) {
 		x = count(ALL(ReplacementFor_PP[0]),ReplacementFor_i)+count(ALL(ReplacementFor_PP[1]),ReplacementFor_i);
 		if(x>ReplacementFor_ma) ReplacementFor_hoge=max(ReplacementFor_hoge,x-ReplacementFor_ma);
 	}
 	
 	
 	ReplacementFor__P("Case #%d: %d %d\n",ReplacementFor__loop,ReplacementFor_ma,ReplacementFor_hoge);
 	
 }
 
 void init() {
 }
 
 int main(int ReplacementFor_argc,char** ReplacementFor_argv){
 	int ReplacementFor_loop,ReplacementFor_loops;
 	long long ReplacementFor_span;
 	char ReplacementFor_tmpline[1000];
 	struct timeval ReplacementFor_start,end,ReplacementFor_ts;
 	
 	if(ReplacementFor_argc>1) freopen(ReplacementFor_argv[1], "r", stdin);
 	gettimeofday(&ReplacementFor_ts,NULL);
 	cin>>ReplacementFor_loops;
 	init();
 	
 	for(ReplacementFor_loop=1;ReplacementFor_loop<=ReplacementFor_loops;ReplacementFor_loop++) {
 		gettimeofday(&ReplacementFor_start,NULL); ReplacementFor_solve(ReplacementFor_loop); gettimeofday(&end,NULL);
 		ReplacementFor_span = (end.tv_sec - ReplacementFor_start.tv_sec)*1000000LL + (end.tv_usec - ReplacementFor_start.tv_usec);
 		fprintf(stderr,"Case : %d                                     time: %lld ms\n",ReplacementFor_loop,ReplacementFor_span/1000);
 	}
 	
 	ReplacementFor_start = ReplacementFor_ts;
 	ReplacementFor_span = (end.tv_sec - ReplacementFor_start.tv_sec)*1000000LL + (end.tv_usec - ReplacementFor_start.tv_usec);
 	fprintf(stderr,"**Total time: %lld ms\n",ReplacementFor_span/1000);
 	
 	return 0;
 }
 
 
#include <bits/stdc++.h>
 
#include <sys/time.h>
 using namespace std;
 typedef signed long long ReplacementFor_ll;
 
 
#undef ReplacementFor__P
 
#define ReplacementFor__P(...) (void)printf(ReplacementFor___VA_ARGS__)
 
#define FOR(x,ReplacementFor_to) for(x=0;x<ReplacementFor_to;x++)
 
#define ReplacementFor_FORR(x,ReplacementFor_arr) for(auto& x:ReplacementFor_arr)
 
#define ReplacementFor_ITR(x,c) for(ReplacementFor___typeof(c.begin()) x=c.begin();x!=c.end();x++)
 
#define ALL(a) (a.begin()),(a.end())
 
#define ReplacementFor_ZERO(a) memset(a,0,sizeof(a))
 
#define MINUS(a) memset(a,0xff,sizeof(a))
 
 
 
 int N,C,M;
 int P[1010],B[1010];
 vector<int> ReplacementFor_PP[1010];
 
 
 void ReplacementFor_solve(int ReplacementFor__loop) {
 	int f,ReplacementFor_i,ReplacementFor_j,k,ReplacementFor_l,x,y;
 	
 	cin>>N>>C>>M;
 	FOR(ReplacementFor_i,C) ReplacementFor_PP[ReplacementFor_i].clear();
 	FOR(ReplacementFor_i,M) {
 		cin>>P[ReplacementFor_i]>>B[ReplacementFor_i];
 		ReplacementFor_PP[B[ReplacementFor_i]-1].push_back(P[ReplacementFor_i]-1);
 	}
 	
 	if(C>2) return;
 	
 	int ReplacementFor_ma=max({(int)ReplacementFor_PP[0].size(),(int)ReplacementFor_PP[1].size(),(int)count(ALL(ReplacementFor_PP[0]),0)+(int)count(ALL(ReplacementFor_PP[1]),0)});
 	while(ReplacementFor_PP[0].size()<ReplacementFor_ma) ReplacementFor_PP[0].push_back(1010);
 	while(ReplacementFor_PP[1].size()<ReplacementFor_ma) ReplacementFor_PP[1].push_back(1011);
 	sort(ALL(ReplacementFor_PP[0]));
 	sort(ALL(ReplacementFor_PP[1]));
 	
 	int ReplacementFor_hoge=0;
 	FOR(ReplacementFor_i,N) {
 		x = count(ALL(ReplacementFor_PP[0]),ReplacementFor_i)+count(ALL(ReplacementFor_PP[1]),ReplacementFor_i);
 		if(x>ReplacementFor_ma) ReplacementFor_hoge=max(ReplacementFor_hoge,x-ReplacementFor_ma);
 	}
 	
 	
 	ReplacementFor__P("Case #%d: %d %d\n",ReplacementFor__loop,ReplacementFor_ma,ReplacementFor_hoge);
 	
 }
 
 void init() {
 }
 
 int main(int ReplacementFor_argc,char** ReplacementFor_argv){
 	int ReplacementFor_loop,ReplacementFor_loops;
 	long long ReplacementFor_span;
 	char ReplacementFor_tmpline[1000];
 	struct timeval ReplacementFor_start,end,ReplacementFor_ts;
 	
 	if(ReplacementFor_argc>1) freopen(ReplacementFor_argv[1], "r", stdin);
 	gettimeofday(&ReplacementFor_ts,NULL);
 	cin>>ReplacementFor_loops;
 	init();
 	
 	for(ReplacementFor_loop=1;ReplacementFor_loop<=ReplacementFor_loops;ReplacementFor_loop++) {
 		gettimeofday(&ReplacementFor_start,NULL); ReplacementFor_solve(ReplacementFor_loop); gettimeofday(&end,NULL);
 		ReplacementFor_span = (end.tv_sec - ReplacementFor_start.tv_sec)*1000000LL + (end.tv_usec - ReplacementFor_start.tv_usec);
 		fprintf(stderr,"Case : %d                                     time: %lld ms\n",ReplacementFor_loop,ReplacementFor_span/1000);
 	}
 	
 	ReplacementFor_start = ReplacementFor_ts;
 	ReplacementFor_span = (end.tv_sec - ReplacementFor_start.tv_sec)*1000000LL + (end.tv_usec - ReplacementFor_start.tv_usec);
 	fprintf(stderr,"**Total time: %lld ms\n",ReplacementFor_span/1000);
 	
 	return 0;
 }
 
 

