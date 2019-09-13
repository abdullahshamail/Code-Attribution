
#include <cstdio>
 
#include <queue>
 
#include <utility>
 using namespace std;
 
 int main(){
     freopen("C-small-1-attempt0.in","r",stdin);
     freopen("Csmall1output.out","w",stdout);
     int T;
     scanf("%d", &T);
     for (int t = 1; t <= T; t++){
         long long N, K;
         scanf("%lld %lld", &N, &K);
         priority_queue<pair<long long,long long> > ReplacementFor_Q;
         ReplacementFor_Q.push(make_pair(N,1));
         long long k = 0;
         long long x,y;
         while (k<K){
             pair<long long,long long> p = ReplacementFor_Q.top();
             ReplacementFor_Q.pop();
             while (!ReplacementFor_Q.empty() && ReplacementFor_Q.top().first==p.first){
                 p.second += ReplacementFor_Q.top().second;
                 ReplacementFor_Q.pop();
             }
             if (p.first>0){
                 x = p.first/2;
                 y = (p.first-1)/2;
                 ReplacementFor_Q.push(make_pair(x,p.second));
                 ReplacementFor_Q.push(make_pair(y,p.second));
             }
             k += p.second;
         }
         printf("Case #%d: %lld %lld\n", t, x, y);
     }
 }
#include <cstdio>
 
#include <queue>
 
#include <utility>
 using namespace std;
 
 int main(){
     freopen("C-small-1-attempt0.in","r",stdin);
     freopen("Csmall1output.out","w",stdout);
     int T;
     scanf("%d", &T);
     for (int t = 1; t <= T; t++){
         long long N, K;
         scanf("%lld %lld", &N, &K);
         priority_queue<pair<long long,long long> > ReplacementFor_Q;
         ReplacementFor_Q.push(make_pair(N,1));
         long long k = 0;
         long long x,y;
         while (k<K){
             pair<long long,long long> p = ReplacementFor_Q.top();
             ReplacementFor_Q.pop();
             while (!ReplacementFor_Q.empty() && ReplacementFor_Q.top().first==p.first){
                 p.second += ReplacementFor_Q.top().second;
                 ReplacementFor_Q.pop();
             }
             if (p.first>0){
                 x = p.first/2;
                 y = (p.first-1)/2;
                 ReplacementFor_Q.push(make_pair(x,p.second));
                 ReplacementFor_Q.push(make_pair(y,p.second));
             }
             k += p.second;
         }
         printf("Case #%d: %lld %lld\n", t, x, y);
     }
 }

