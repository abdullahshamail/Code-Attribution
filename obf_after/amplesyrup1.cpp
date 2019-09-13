
#include <cstdio>
 
#include <cmath>
 
#include <algorithm>
 
#include <utility>
 
#include <queue>
 using namespace std;
 
 double ReplacementFor_pi;
 pair<double,double> P[1009];
 
 int ReplacementFor_cmp(pair<int,int> a, pair<int,int> b){
     if ((double)a.first*a.second>(double)b.first*b.second) return 1;
     else if ((double)a.first*a.second<(double)b.first*b.second) return -1;
     else return int(a.first-b.first);
 }
 
 int main(){
     freopen("A-large (2).in","r",stdin);
     freopen("1cAsmalllarge.out","w",stdout);
     ReplacementFor_pi = acos(-1);
     
     int T;
     scanf("%d", &T);
     for (int t = 1; t <= T; t++){
         int N, K;
         scanf("%d %d", &N, &K);
         for (int ReplacementFor_i = 0; ReplacementFor_i < N; ReplacementFor_i++){
             int ReplacementFor_r, ReplacementFor_h;
             scanf("%d %d", &ReplacementFor_r, &ReplacementFor_h);
             P[ReplacementFor_i].first = ReplacementFor_pi*ReplacementFor_r*ReplacementFor_r;
             P[ReplacementFor_i].second = 2*ReplacementFor_pi*ReplacementFor_r*ReplacementFor_h;
         }
         std::sort(P,P+N);
         double ReplacementFor_ans = 0;
         for (int ReplacementFor_i = K-1; ReplacementFor_i < N; ReplacementFor_i++){
             priority_queue<double> ReplacementFor_Q;
             for (int ReplacementFor_j = 0; ReplacementFor_j < ReplacementFor_i; ReplacementFor_j++){
                 ReplacementFor_Q.push(P[ReplacementFor_j].second);
             }
             double ReplacementFor_sum = 0;
             for (int ReplacementFor_j = 0; ReplacementFor_j < K-1; ReplacementFor_j++){
                 ReplacementFor_sum += ReplacementFor_Q.top();
                 ReplacementFor_Q.pop();
             }
             ReplacementFor_ans = max(ReplacementFor_ans,ReplacementFor_sum+P[ReplacementFor_i].second+P[ReplacementFor_i].first);
         }
         printf("Case #%d: %f\n", t, ReplacementFor_ans);
     }
 }
#include <cstdio>
 
#include <cmath>
 
#include <algorithm>
 
#include <utility>
 
#include <queue>
 using namespace std;
 
 double ReplacementFor_pi;
 pair<double,double> P[1009];
 
 int ReplacementFor_cmp(pair<int,int> a, pair<int,int> b){
     if ((double)a.first*a.second>(double)b.first*b.second) return 1;
     else if ((double)a.first*a.second<(double)b.first*b.second) return -1;
     else return int(a.first-b.first);
 }
 
 int main(){
     freopen("A-large (2).in","r",stdin);
     freopen("1cAsmalllarge.out","w",stdout);
     ReplacementFor_pi = acos(-1);
     
     int T;
     scanf("%d", &T);
     for (int t = 1; t <= T; t++){
         int N, K;
         scanf("%d %d", &N, &K);
         for (int ReplacementFor_i = 0; ReplacementFor_i < N; ReplacementFor_i++){
             int ReplacementFor_r, ReplacementFor_h;
             scanf("%d %d", &ReplacementFor_r, &ReplacementFor_h);
             P[ReplacementFor_i].first = ReplacementFor_pi*ReplacementFor_r*ReplacementFor_r;
             P[ReplacementFor_i].second = 2*ReplacementFor_pi*ReplacementFor_r*ReplacementFor_h;
         }
         std::sort(P,P+N);
         double ReplacementFor_ans = 0;
         for (int ReplacementFor_i = K-1; ReplacementFor_i < N; ReplacementFor_i++){
             priority_queue<double> ReplacementFor_Q;
             for (int ReplacementFor_j = 0; ReplacementFor_j < ReplacementFor_i; ReplacementFor_j++){
                 ReplacementFor_Q.push(P[ReplacementFor_j].second);
             }
             double ReplacementFor_sum = 0;
             for (int ReplacementFor_j = 0; ReplacementFor_j < K-1; ReplacementFor_j++){
                 ReplacementFor_sum += ReplacementFor_Q.top();
                 ReplacementFor_Q.pop();
             }
             ReplacementFor_ans = max(ReplacementFor_ans,ReplacementFor_sum+P[ReplacementFor_i].second+P[ReplacementFor_i].first);
         }
         printf("Case #%d: %f\n", t, ReplacementFor_ans);
     }
 }

