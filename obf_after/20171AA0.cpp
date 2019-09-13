
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
 	freopen("D:/OneDrive/Code/GCJ/A-small-attempt1.in","r",stdin);
 	freopen("D:/OneDrive/Code/GCJ/out.txt", "w", stdout);
 }
 
 int main(void){
 	open();
 	int ReplacementFor_tc;
 	ReplacementFor_sc(ReplacementFor_tc);
 
 	for(int ReplacementFor_ct = 1; ReplacementFor_ct <= ReplacementFor_tc; ReplacementFor_ct++){
 		int ReplacementFor_r,c;
 		ReplacementFor_sc(ReplacementFor_r);ReplacementFor_sc(c);
 		string str[30];
 		string ReplacementFor_ret[30];
 		FOR(ReplacementFor_i,ReplacementFor_r){
 			cin >> str[ReplacementFor_i];
 			
 			
 			
 			ReplacementFor_ret[ReplacementFor_i] = str[ReplacementFor_i];
 		}
 
 		FOR(ReplacementFor_i,ReplacementFor_r){
 			FOR(ReplacementFor_j,c){
 				if(str[ReplacementFor_i][ReplacementFor_j] == ((char)(0x16cf+2502-0x2056)))continue;
 				int ReplacementFor_minx, ReplacementFor_maxx;
 				ReplacementFor_minx = ReplacementFor_maxx = ReplacementFor_i;
 				int ReplacementFor_miny, ReplacementFor_maxy;
 				ReplacementFor_miny = ReplacementFor_maxy = ReplacementFor_j;
 				while(ReplacementFor_miny > 0 && str[ReplacementFor_i][ReplacementFor_miny - 1] == ((char)(0x4b1+4120-0x148a)) && ReplacementFor_ret[ReplacementFor_i][ReplacementFor_miny - 1] == ((char)(0x917+2513-0x12a9)))ReplacementFor_miny--;
 				while(ReplacementFor_maxy < c - 1 && str[ReplacementFor_i][ReplacementFor_maxy + 1] == ((char)(0x831+833-0xb33)) && ReplacementFor_ret[ReplacementFor_i][ReplacementFor_maxy + 1] == ((char)(0x34f+5307-0x17cb)))ReplacementFor_maxy++;
 				while(ReplacementFor_minx > 0){
 					bool ReplacementFor_valid = true;
 					for(int k = ReplacementFor_miny;k<=ReplacementFor_maxy;k++){
 						if(str[ReplacementFor_minx - 1][k] != ((char)(0xf25+2686-0x1964)) || ReplacementFor_ret[ReplacementFor_minx - 1][k] != ((char)(0x78a+89-0x7a4))){
 							ReplacementFor_valid = false;
 							break;
 						}
 					}
 					if(ReplacementFor_valid){
 						ReplacementFor_minx--;
 					}else break;
 				}
 				bool ReplacementFor_adabawah = false;
 				for(int k = ReplacementFor_i + 1;k<ReplacementFor_r;k++){
 					FOR(ReplacementFor_l,c){
 						if(str[k][ReplacementFor_l] != ((char)(0x1af+1060-0x594))){
 							ReplacementFor_adabawah = true;
 							break;
 						}
 					}
 				}
 				if(!ReplacementFor_adabawah){
 					ReplacementFor_maxx = ReplacementFor_r - 1;
 				}
 				
 
 				for(int k = ReplacementFor_minx;k<=ReplacementFor_maxx;k++){
 					for(int ReplacementFor_l = ReplacementFor_miny;ReplacementFor_l<=ReplacementFor_maxy;ReplacementFor_l++){
 						ReplacementFor_ret[k][ReplacementFor_l] = str[ReplacementFor_i][ReplacementFor_j];
 					}
 				}
 			}
 		}
 
 		printf("Case #%d: \n", ReplacementFor_ct);
 		FOR(ReplacementFor_i,ReplacementFor_r){
 			cout << ReplacementFor_ret[ReplacementFor_i] << "\n";
 		}
 
 		cerr << "Test " << ReplacementFor_ct << " done \n";
 	}
     return 0;
 }
 
 

