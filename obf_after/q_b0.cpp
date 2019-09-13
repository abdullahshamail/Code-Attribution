
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
 
 
 string S;
 int N;
 
 void ReplacementFor_solve(int ReplacementFor__loop) {
 	int f,ReplacementFor_i,ReplacementFor_j,k,ReplacementFor_l,x,y;
 	
 	cin>>S;
 	
 	while(1) {
 		FOR(ReplacementFor_i,S.size()-1) if(S[ReplacementFor_i]>S[ReplacementFor_i+1]) break;
 		if(ReplacementFor_i==S.size()-1) break;
 		S[ReplacementFor_i]--;
 		for(ReplacementFor_j=ReplacementFor_i+1;ReplacementFor_j<S.size();ReplacementFor_j++) S[ReplacementFor_j]=((char)(0x1a5+5275-0x1607));
 	}
 	
 	while(S[0]==((char)(0x208+1160-0x660)) && S.size()>1) S=S.substr(1);
 	
 	ReplacementFor__P("Case #%d: %s\n",ReplacementFor__loop,S.c_str());
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
 
 
 string S;
 int N;
 
 void ReplacementFor_solve(int ReplacementFor__loop) {
 	int f,ReplacementFor_i,ReplacementFor_j,k,ReplacementFor_l,x,y;
 	
 	cin>>S;
 	
 	while(1) {
 		FOR(ReplacementFor_i,S.size()-1) if(S[ReplacementFor_i]>S[ReplacementFor_i+1]) break;
 		if(ReplacementFor_i==S.size()-1) break;
 		S[ReplacementFor_i]--;
 		for(ReplacementFor_j=ReplacementFor_i+1;ReplacementFor_j<S.size();ReplacementFor_j++) S[ReplacementFor_j]=((char)(0x68a+1666-0xcd3));
 	}
 	
 	while(S[0]==((char)(0x1181+1256-0x1639)) && S.size()>1) S=S.substr(1);
 	
 	ReplacementFor__P("Case #%d: %s\n",ReplacementFor__loop,S.c_str());
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
 
 

