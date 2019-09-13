
#include <bits/stdc++.h>
 using namespace std;
 
 typedef long long ReplacementFor_ll;
 typedef long long ReplacementFor_LL;
 typedef pair<int,int> ReplacementFor_ii;
 typedef vector<ReplacementFor_ii> ReplacementFor_vii;
 typedef vector<int> ReplacementFor_vi;
 
 
#ifdef DEBUG
     
#define ReplacementFor_cek(x) cout<<x
 
#else
     
#define ReplacementFor_cek(x) if(false){}
 
#endif 
 
 
#define ReplacementFor_fi first
 
#define ReplacementFor_se second
 
#define ReplacementFor_INF 1000000000
 
#define ReplacementFor_INFLL 1000000000000000000LL
 
#define ReplacementFor_EPS 1e-9
 
#define ReplacementFor_PI acos(-1.0)
 
#define ReplacementFor_pb push_back
 
#define ReplacementFor_TC() while(ReplacementFor_tc--)
 
#define FOR(ReplacementFor_i,n) for(int ReplacementFor_i=0;ReplacementFor_i<n;ReplacementFor_i++)
 
#define ReplacementFor_FORN(ReplacementFor_i,n) for(int ReplacementFor_i=0;ReplacementFor_i<=n;ReplacementFor_i++)
 
#define ReplacementFor_REP(ReplacementFor_i,a,b) for(int ReplacementFor_i=a;ReplacementFor_i<b;ReplacementFor_i++)
 
#define ReplacementFor_REPN(ReplacementFor_i,a,b) for(int ReplacementFor_i=a;ReplacementFor_i<=b;ReplacementFor_i++)
 
#define reset(a,b) memset(a,b,sizeof(a))
 
#define ALL(ReplacementFor_v) ReplacementFor_v.begin(), ReplacementFor_v.end()
 
#define SORT(ReplacementFor_v) sort(ALL(ReplacementFor_v))
 
#define ReplacementFor_SORTA(ReplacementFor_v,n) sort(ReplacementFor_v, ReplacementFor_v + n)
 
#define ReplacementFor_SZ(ReplacementFor_v) (int) ReplacementFor_v.size()
 
#define ReplacementFor_sc(x) scanf("%d",&x)
 
 void open(){
 	freopen("D:/OneDrive/Code/GCJ/A-large (2).in","r",stdin);
 	freopen("D:/OneDrive/Code/GCJ/out.txt", "w", stdout);
 }
 
 int main(void){
 	open();
 	int ReplacementFor_tc;
 	ReplacementFor_sc(ReplacementFor_tc);
 
 	for(int ReplacementFor_ct = 1; ReplacementFor_ct <= ReplacementFor_tc; ReplacementFor_ct++){
 		int ReplacementFor_d, n;
 		ReplacementFor_sc(ReplacementFor_d);ReplacementFor_sc(n);
 		double ReplacementFor_maxi = 0.0;
 
 		FOR(ReplacementFor_i,n){
 			int ReplacementFor_st, ReplacementFor_sp;
 			ReplacementFor_sc(ReplacementFor_st);
 			ReplacementFor_sc(ReplacementFor_sp);
 			ReplacementFor_maxi = max(ReplacementFor_maxi, 1.0 * (ReplacementFor_d - ReplacementFor_st)/ReplacementFor_sp);
 		}
 
 		printf("Case #%d: %.7lf\n", ReplacementFor_ct, 1.0 * ReplacementFor_d / ReplacementFor_maxi);
 		cerr << "Test " << ReplacementFor_ct << " done \n";
 	}
     return 0;
 }
 
 
#include <bits/stdc++.h>
 using namespace std;
 
 typedef long long ReplacementFor_ll;
 typedef long long ReplacementFor_LL;
 typedef pair<int,int> ReplacementFor_ii;
 typedef vector<ReplacementFor_ii> ReplacementFor_vii;
 typedef vector<int> ReplacementFor_vi;
 
 
#ifdef DEBUG
     
#define ReplacementFor_cek(x) cout<<x
 
#else
     
#define ReplacementFor_cek(x) if(false){}
 
#endif 
 
 
#define ReplacementFor_fi first
 
#define ReplacementFor_se second
 
#define ReplacementFor_INF 1000000000
 
#define ReplacementFor_INFLL 1000000000000000000LL
 
#define ReplacementFor_EPS 1e-9
 
#define ReplacementFor_PI acos(-1.0)
 
#define ReplacementFor_pb push_back
 
#define ReplacementFor_TC() while(ReplacementFor_tc--)
 
#define FOR(ReplacementFor_i,n) for(int ReplacementFor_i=0;ReplacementFor_i<n;ReplacementFor_i++)
 
#define ReplacementFor_FORN(ReplacementFor_i,n) for(int ReplacementFor_i=0;ReplacementFor_i<=n;ReplacementFor_i++)
 
#define ReplacementFor_REP(ReplacementFor_i,a,b) for(int ReplacementFor_i=a;ReplacementFor_i<b;ReplacementFor_i++)
 
#define ReplacementFor_REPN(ReplacementFor_i,a,b) for(int ReplacementFor_i=a;ReplacementFor_i<=b;ReplacementFor_i++)
 
#define reset(a,b) memset(a,b,sizeof(a))
 
#define ALL(ReplacementFor_v) ReplacementFor_v.begin(), ReplacementFor_v.end()
 
#define SORT(ReplacementFor_v) sort(ALL(ReplacementFor_v))
 
#define ReplacementFor_SORTA(ReplacementFor_v,n) sort(ReplacementFor_v, ReplacementFor_v + n)
 
#define ReplacementFor_SZ(ReplacementFor_v) (int) ReplacementFor_v.size()
 
#define ReplacementFor_sc(x) scanf("%d",&x)
 
 void open(){
 	freopen("D:/OneDrive/Code/GCJ/A-large (2).in","r",stdin);
 	freopen("D:/OneDrive/Code/GCJ/out.txt", "w", stdout);
 }
 
 int main(void){
 	open();
 	int ReplacementFor_tc;
 	ReplacementFor_sc(ReplacementFor_tc);
 
 	for(int ReplacementFor_ct = 1; ReplacementFor_ct <= ReplacementFor_tc; ReplacementFor_ct++){
 		int ReplacementFor_d, n;
 		ReplacementFor_sc(ReplacementFor_d);ReplacementFor_sc(n);
 		double ReplacementFor_maxi = 0.0;
 
 		FOR(ReplacementFor_i,n){
 			int ReplacementFor_st, ReplacementFor_sp;
 			ReplacementFor_sc(ReplacementFor_st);
 			ReplacementFor_sc(ReplacementFor_sp);
 			ReplacementFor_maxi = max(ReplacementFor_maxi, 1.0 * (ReplacementFor_d - ReplacementFor_st)/ReplacementFor_sp);
 		}
 
 		printf("Case #%d: %.7lf\n", ReplacementFor_ct, 1.0 * ReplacementFor_d / ReplacementFor_maxi);
 		cerr << "Test " << ReplacementFor_ct << " done \n";
 	}
     return 0;
 }
 
 

