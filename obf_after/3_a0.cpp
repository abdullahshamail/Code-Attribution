
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
 
 
 int ReplacementFor_nex[6][100000];
 ReplacementFor_ll ReplacementFor_p10[11];
 vector<int> ReplacementFor_pre[6][100000];
 int ReplacementFor_D;
 string S;
 int T;
 int ReplacementFor_did[101010];
 
 int ReplacementFor_getdecay(int ReplacementFor_num,int ReplacementFor_d) {
 	int ReplacementFor_i;
 	int ReplacementFor_cnt[10]={};
 	
 	FOR(ReplacementFor_i,ReplacementFor_d) {
 		if(ReplacementFor_num%10>ReplacementFor_d) return 0;
 		if(ReplacementFor_num%10) ReplacementFor_cnt[ReplacementFor_num%10]++;
 		ReplacementFor_num/=10;
 	}
 	int ReplacementFor_v=0;
 	for(ReplacementFor_i=1;ReplacementFor_i<=ReplacementFor_d;ReplacementFor_i++) ReplacementFor_v=ReplacementFor_v*10+ReplacementFor_cnt[ReplacementFor_i];
 	return ReplacementFor_v;
 }
 
 void ReplacementFor_solve(int ReplacementFor__loop) {
 	int f,ReplacementFor_i,ReplacementFor_j,k,ReplacementFor_l,x,y;
 	
 	cin>>S;
 	ReplacementFor_D=S.size();
 	T=0;
 	ReplacementFor_FORR(c,S) T=T*10+c-((char)(0x12d8+4484-0x242c));
 	ReplacementFor_ZERO(ReplacementFor_did);
 	
 	int ReplacementFor_num=0;
 	queue<int> ReplacementFor_Q;
 	
 	ReplacementFor_did[T]=1;
 	ReplacementFor_Q.push(T);
 	while(ReplacementFor_Q.size()) {
 		x = ReplacementFor_Q.front();
 		ReplacementFor_Q.pop();
 		ReplacementFor_num++;
 		ReplacementFor_FORR(ReplacementFor_e,ReplacementFor_pre[ReplacementFor_D][x]) if(ReplacementFor_did[ReplacementFor_e]==0) ReplacementFor_Q.push(ReplacementFor_e),ReplacementFor_did[ReplacementFor_e]=1;
 	}
 	
 	
 	ReplacementFor__P("Case #%d: %d\n",ReplacementFor__loop,ReplacementFor_num);
 }
 
 void init() {
 	int f,ReplacementFor_i,ReplacementFor_j,k,ReplacementFor_l,x,y;
 	ReplacementFor_p10[0]=1;
 	FOR(ReplacementFor_i,9) ReplacementFor_p10[ReplacementFor_i+1]=ReplacementFor_p10[ReplacementFor_i]*10;
 	
 	for(ReplacementFor_i=1;ReplacementFor_i<=5;ReplacementFor_i++) {
 		for(ReplacementFor_j=1;ReplacementFor_j<ReplacementFor_p10[ReplacementFor_i];ReplacementFor_j++) {
 			ReplacementFor_nex[ReplacementFor_i][ReplacementFor_j]=ReplacementFor_getdecay(ReplacementFor_j,ReplacementFor_i);
 			if(ReplacementFor_nex[ReplacementFor_i][ReplacementFor_j]==0) continue;
 			ReplacementFor_pre[ReplacementFor_i][ReplacementFor_nex[ReplacementFor_i][ReplacementFor_j]].push_back(ReplacementFor_j);
 		}
 	}
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
 
 

