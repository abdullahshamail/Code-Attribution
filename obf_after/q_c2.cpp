
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
 
 
 ReplacementFor_ll N,K;
 
 void ReplacementFor_solve(int ReplacementFor__loop) {
 	int f,ReplacementFor_i,ReplacementFor_j,k,ReplacementFor_l,x,y;
 	
 	cin>>N>>K;
 	map<ReplacementFor_ll,ReplacementFor_ll> M;
 	M[-N]=1;
 	while(1) {
 		auto ReplacementFor_v = *M.begin();
 		ReplacementFor_ll ReplacementFor_len=-ReplacementFor_v.first;
 		ReplacementFor_ll ReplacementFor_num=ReplacementFor_v.second;
 		M.erase(M.begin());
 		
 		ReplacementFor_ll ReplacementFor_L=(ReplacementFor_len-1)/2;
 		ReplacementFor_ll ReplacementFor_R=ReplacementFor_len-1-ReplacementFor_L;
 		if(ReplacementFor_L>ReplacementFor_R) swap(ReplacementFor_L,ReplacementFor_R);
 		
 		if(K<=ReplacementFor_num) {
 			ReplacementFor__P("Case #%d: %lld %lld\n",ReplacementFor__loop,ReplacementFor_R,ReplacementFor_L);
 			return;
 		}
 		K-=ReplacementFor_num;
 		if(ReplacementFor_L) M[-ReplacementFor_L]+=ReplacementFor_num;
 		if(ReplacementFor_R) M[-ReplacementFor_R]+=ReplacementFor_num;
 	}
 	
 	
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
 
 
 ReplacementFor_ll N,K;
 
 void ReplacementFor_solve(int ReplacementFor__loop) {
 	int f,ReplacementFor_i,ReplacementFor_j,k,ReplacementFor_l,x,y;
 	
 	cin>>N>>K;
 	map<ReplacementFor_ll,ReplacementFor_ll> M;
 	M[-N]=1;
 	while(1) {
 		auto ReplacementFor_v = *M.begin();
 		ReplacementFor_ll ReplacementFor_len=-ReplacementFor_v.first;
 		ReplacementFor_ll ReplacementFor_num=ReplacementFor_v.second;
 		M.erase(M.begin());
 		
 		ReplacementFor_ll ReplacementFor_L=(ReplacementFor_len-1)/2;
 		ReplacementFor_ll ReplacementFor_R=ReplacementFor_len-1-ReplacementFor_L;
 		if(ReplacementFor_L>ReplacementFor_R) swap(ReplacementFor_L,ReplacementFor_R);
 		
 		if(K<=ReplacementFor_num) {
 			ReplacementFor__P("Case #%d: %lld %lld\n",ReplacementFor__loop,ReplacementFor_R,ReplacementFor_L);
 			return;
 		}
 		K-=ReplacementFor_num;
 		if(ReplacementFor_L) M[-ReplacementFor_L]+=ReplacementFor_num;
 		if(ReplacementFor_R) M[-ReplacementFor_R]+=ReplacementFor_num;
 	}
 	
 	
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
 
 

