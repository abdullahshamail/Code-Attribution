
#include<bits/stdc++.h>
 using namespace std;
 map<long long,long long> m;
 set<long long> s;
 int main(){
     freopen("input.in","r",stdin);
     freopen("output.out","w",stdout);
     int t,ReplacementFor_i;
     long long ReplacementFor_d,ReplacementFor_e,n,k;
     cin>>t;
     for(ReplacementFor_i=1;ReplacementFor_i<=t;++ReplacementFor_i){
         cin>>n>>k;
         s.clear();
         m.clear();
         s.insert(-n);
         m[n]=1;
         for(;;){
             ReplacementFor_d=-*s.begin();s.erase(s.begin());
             ReplacementFor_e=m[ReplacementFor_d];
             if(ReplacementFor_e>=k){
                 --ReplacementFor_d;
                 printf("Case #%d: %I64d %I64d\n",ReplacementFor_i,(ReplacementFor_d+1)/2,ReplacementFor_d/2);
                 break;
             }
             k-=ReplacementFor_e;
             --ReplacementFor_d;
             m[ReplacementFor_d/2]+=ReplacementFor_e;s.insert(-ReplacementFor_d/2);
             m[(ReplacementFor_d+1)/2]+=ReplacementFor_e;s.insert(-(ReplacementFor_d+1)/2);
         }
     }
 }
#include<bits/stdc++.h>
 using namespace std;
 map<long long,long long> m;
 set<long long> s;
 int main(){
     freopen("input.in","r",stdin);
     freopen("output.out","w",stdout);
     int t,ReplacementFor_i;
     long long ReplacementFor_d,ReplacementFor_e,n,k;
     cin>>t;
     for(ReplacementFor_i=1;ReplacementFor_i<=t;++ReplacementFor_i){
         cin>>n>>k;
         s.clear();
         m.clear();
         s.insert(-n);
         m[n]=1;
         for(;;){
             ReplacementFor_d=-*s.begin();s.erase(s.begin());
             ReplacementFor_e=m[ReplacementFor_d];
             if(ReplacementFor_e>=k){
                 --ReplacementFor_d;
                 printf("Case #%d: %I64d %I64d\n",ReplacementFor_i,(ReplacementFor_d+1)/2,ReplacementFor_d/2);
                 break;
             }
             k-=ReplacementFor_e;
             --ReplacementFor_d;
             m[ReplacementFor_d/2]+=ReplacementFor_e;s.insert(-ReplacementFor_d/2);
             m[(ReplacementFor_d+1)/2]+=ReplacementFor_e;s.insert(-(ReplacementFor_d+1)/2);
         }
     }
 }
#include<bits/stdc++.h>
 using namespace std;
 map<long long,long long> m;
 set<long long> s;
 int main(){
     freopen("input.in","r",stdin);
     freopen("output.out","w",stdout);
     int t,ReplacementFor_i;
     long long ReplacementFor_d,ReplacementFor_e,n,k;
     cin>>t;
     for(ReplacementFor_i=1;ReplacementFor_i<=t;++ReplacementFor_i){
         cin>>n>>k;
         s.clear();
         m.clear();
         s.insert(-n);
         m[n]=1;
         for(;;){
             ReplacementFor_d=-*s.begin();s.erase(s.begin());
             ReplacementFor_e=m[ReplacementFor_d];
             if(ReplacementFor_e>=k){
                 --ReplacementFor_d;
                 printf("Case #%d: %I64d %I64d\n",ReplacementFor_i,(ReplacementFor_d+1)/2,ReplacementFor_d/2);
                 break;
             }
             k-=ReplacementFor_e;
             --ReplacementFor_d;
             m[ReplacementFor_d/2]+=ReplacementFor_e;s.insert(-ReplacementFor_d/2);
             m[(ReplacementFor_d+1)/2]+=ReplacementFor_e;s.insert(-(ReplacementFor_d+1)/2);
         }
     }
 }

