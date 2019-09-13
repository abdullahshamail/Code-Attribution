
#include <cstdio>
 
#include <cmath>
 
#include <algorithm>
 
#include <utility>
 
#include <queue>
 using namespace std;
 
 



 
 pair<pair<int,int>,int> A[209];
 
 int main(){
     freopen("B-large (2).in","r",stdin);
     freopen("1cBlarge.out","w",stdout);
     
     
     int T;
     scanf("%d", &T);
     for (int t = 1; t <= T; t++){
         int ReplacementFor_AC, ReplacementFor_AJ;
         scanf("%d %d", &ReplacementFor_AC, &ReplacementFor_AJ);
         for (int ReplacementFor_i = 0; ReplacementFor_i < ReplacementFor_AC+ReplacementFor_AJ; ReplacementFor_i++){
             scanf("%d %d", &A[ReplacementFor_i].first.first,&A[ReplacementFor_i].first.second);
             if (ReplacementFor_i<ReplacementFor_AC) A[ReplacementFor_i].second = 0;
             else A[ReplacementFor_i].second = 1;
         }
         





         sort(A,A+ReplacementFor_AC+ReplacementFor_AJ);
         int ReplacementFor_jm = 0;
         priority_queue<int> ReplacementFor_G;
         int ReplacementFor_seg = 0;
         for (int ReplacementFor_i = 0; ReplacementFor_i < ReplacementFor_AC+ReplacementFor_AJ; ReplacementFor_i++){
             if (A[ReplacementFor_i].second == 0) {
                 ReplacementFor_jm += A[ReplacementFor_i].first.second - A[ReplacementFor_i].first.first;
                 ReplacementFor_seg++;
                 if (ReplacementFor_i==0){
                     if (A[ReplacementFor_AC+ReplacementFor_AJ-1].second==0) ReplacementFor_G.push(-(1440+A[ReplacementFor_i].first.first-A[ReplacementFor_AC+ReplacementFor_AJ-1].first.second));
                 }
                 else if (A[ReplacementFor_i-1].second==0) ReplacementFor_G.push(-(A[ReplacementFor_i].first.first-A[ReplacementFor_i-1].first.second));
             }
         }
         while (!ReplacementFor_G.empty()){
             ReplacementFor_jm -= ReplacementFor_G.top();
             ReplacementFor_G.pop();
             if (ReplacementFor_jm>720){
                 
                 break;
             }
             else {
                 ReplacementFor_seg--;
             }
         }
         if (ReplacementFor_jm<720){
             ReplacementFor_jm = 0;
             int ReplacementFor_lj = 0;
             for (int ReplacementFor_i = ReplacementFor_AC+ReplacementFor_AJ-1; ReplacementFor_i >= 0; ReplacementFor_i--){
                 if (A[ReplacementFor_i].second==1){
                     ReplacementFor_lj = ReplacementFor_i;
                     break;
                 }
             }
             int ReplacementFor_pj = ReplacementFor_lj;
             for (int ReplacementFor_i = 0; ReplacementFor_i < ReplacementFor_AC+ReplacementFor_AJ; ReplacementFor_i++){
                 if (A[ReplacementFor_i].second == 1) {
                     if (!((ReplacementFor_i==0&&ReplacementFor_pj==ReplacementFor_AC+ReplacementFor_AJ-1)||(ReplacementFor_i==ReplacementFor_pj+1))){
                         ReplacementFor_jm += A[ReplacementFor_i].first.first - A[ReplacementFor_pj].first.second;
                         if (ReplacementFor_jm<0) ReplacementFor_jm += 1440;
                     }
                     ReplacementFor_pj = ReplacementFor_i;
                 }
             }
         }
         
         if (ReplacementFor_jm<720){
             priority_queue<int> ReplacementFor_Q;
             for (int ReplacementFor_i = 0; ReplacementFor_i < ReplacementFor_AC+ReplacementFor_AJ; ReplacementFor_i++){
                 if (A[ReplacementFor_i].second == 1) {
                     
                     
                     if (ReplacementFor_i==0){
                         if (A[ReplacementFor_AC+ReplacementFor_AJ-1].second==1) ReplacementFor_Q.push((1440+A[ReplacementFor_i].first.first-A[ReplacementFor_AC+ReplacementFor_AJ-1].first.second));
                     }
                     else if (A[ReplacementFor_i-1].second==1) ReplacementFor_Q.push((A[ReplacementFor_i].first.first-A[ReplacementFor_i-1].first.second));
                 }
             }
             while (ReplacementFor_jm<720){
                 ReplacementFor_jm += ReplacementFor_Q.top();
                 ReplacementFor_Q.pop();
                 
                 ReplacementFor_seg++;
                 if (ReplacementFor_jm>=720) break;
             }
         }
         printf("Case #%d: %d\n",t,2*ReplacementFor_seg);
     }
 }

