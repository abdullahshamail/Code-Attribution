
#include<bits/stdc++.h>
 using namespace std;
 string s;
 int a[1005];
 int main(){
     freopen("input.in","r",stdin);
     freopen("output.out","w",stdout);
     int t,ReplacementFor_e,f,ReplacementFor_i,k,m,n,ReplacementFor_z;
     cin>>t;
     for(k=1;k<=t;++k){
         ReplacementFor_z=0;
         cin>>s>>m;
         n=s.size();
         for(ReplacementFor_i=0;ReplacementFor_i<n;++ReplacementFor_i) a[ReplacementFor_i]=0;
         for(ReplacementFor_i=ReplacementFor_e=0;ReplacementFor_i<n;++ReplacementFor_i){
             if(s[ReplacementFor_i]==((char)(0x995+2451-0x12fd))) f=0; else f=1;
             ReplacementFor_e-=a[ReplacementFor_i];
             if(ReplacementFor_e%2!=f){
                 if(ReplacementFor_i+m>n) break;
                 else{
                     ++ReplacementFor_z;
                     ++ReplacementFor_e;
                     ++a[ReplacementFor_i+m];
                 }
             }
         }
         printf("Case #%d: ",k);
         if(ReplacementFor_i<n) printf("IMPOSSIBLE\n"); else printf("%d\n",ReplacementFor_z);
     }
 }
#include<bits/stdc++.h>
 using namespace std;
 string s;
 int a[1005];
 int main(){
     freopen("input.in","r",stdin);
     freopen("output.out","w",stdout);
     int t,ReplacementFor_e,f,ReplacementFor_i,k,m,n,ReplacementFor_z;
     cin>>t;
     for(k=1;k<=t;++k){
         ReplacementFor_z=0;
         cin>>s>>m;
         n=s.size();
         for(ReplacementFor_i=0;ReplacementFor_i<n;++ReplacementFor_i) a[ReplacementFor_i]=0;
         for(ReplacementFor_i=ReplacementFor_e=0;ReplacementFor_i<n;++ReplacementFor_i){
             if(s[ReplacementFor_i]==((char)(0x34c+3606-0x1137))) f=0; else f=1;
             ReplacementFor_e-=a[ReplacementFor_i];
             if(ReplacementFor_e%2!=f){
                 if(ReplacementFor_i+m>n) break;
                 else{
                     ++ReplacementFor_z;
                     ++ReplacementFor_e;
                     ++a[ReplacementFor_i+m];
                 }
             }
         }
         printf("Case #%d: ",k);
         if(ReplacementFor_i<n) printf("IMPOSSIBLE\n"); else printf("%d\n",ReplacementFor_z);
     }
 }
#include<bits/stdc++.h>
 using namespace std;
 string s;
 int a[1005];
 int main(){
     freopen("input.in","r",stdin);
     freopen("output.out","w",stdout);
     int t,ReplacementFor_e,f,ReplacementFor_i,k,m,n,ReplacementFor_z;
     cin>>t;
     for(k=1;k<=t;++k){
         ReplacementFor_z=0;
         cin>>s>>m;
         n=s.size();
         for(ReplacementFor_i=0;ReplacementFor_i<n;++ReplacementFor_i) a[ReplacementFor_i]=0;
         for(ReplacementFor_i=ReplacementFor_e=0;ReplacementFor_i<n;++ReplacementFor_i){
             if(s[ReplacementFor_i]==((char)(0x19e8+1456-0x1f6d))) f=0; else f=1;
             ReplacementFor_e-=a[ReplacementFor_i];
             if(ReplacementFor_e%2!=f){
                 if(ReplacementFor_i+m>n) break;
                 else{
                     ++ReplacementFor_z;
                     ++ReplacementFor_e;
                     ++a[ReplacementFor_i+m];
                 }
             }
         }
         printf("Case #%d: ",k);
         if(ReplacementFor_i<n) printf("IMPOSSIBLE\n"); else printf("%d\n",ReplacementFor_z);
     }
 }

