
#include<bits/stdc++.h>
 using namespace std;
 inline void read(int &x){
     register char c=getchar();
     x=0;
     while(c<((char)(0x46a+8448-0x253a))||c>((char)(0x3cc+2248-0xc5b))) c=getchar();
     for(;c>=((char)(0x254+2349-0xb51))&&c<=((char)(0x1365+1759-0x1a0b));c=getchar())
         x=(x<<1)+(x<<3)+(c-((char)(0x231+268-0x30d)));
 }
 inline void ReplacementFor_reaf(double &ReplacementFor_z){
     int x,y;
     read(x);read(y);
     ReplacementFor_z=x+y/10000.0;
 }
 double p[55],ReplacementFor_q[55],f[55][55];
 int n,k;
 double ReplacementFor_check(double ReplacementFor_u,double ReplacementFor_v){
     int ReplacementFor_i,ReplacementFor_j;
     double ReplacementFor_l,ReplacementFor_r,m,ReplacementFor_w;
     for(ReplacementFor_i=1;ReplacementFor_i<=n;++ReplacementFor_i) p[ReplacementFor_i]=ReplacementFor_q[ReplacementFor_i],f[0][ReplacementFor_i]=0.0;
     ReplacementFor_l=0.0;ReplacementFor_r=1.0;
     for(ReplacementFor_i=0;ReplacementFor_i<55;++ReplacementFor_i){
         m=(ReplacementFor_l+ReplacementFor_r)/2;
         ReplacementFor_w=0.0;
         for(ReplacementFor_j=1;ReplacementFor_j<k;++ReplacementFor_j)
             if(p[ReplacementFor_j]<m)
                 ReplacementFor_w+=m-p[ReplacementFor_j];
         if(ReplacementFor_u<ReplacementFor_w) ReplacementFor_r=m; else ReplacementFor_l=m;
     }
     for(ReplacementFor_j=1;ReplacementFor_j<k;++ReplacementFor_j) if(p[ReplacementFor_j]<m) p[ReplacementFor_j]=m;
     ReplacementFor_l=0.0;ReplacementFor_r=1.0;
     for(ReplacementFor_i=0;ReplacementFor_i<55;++ReplacementFor_i){
         m=(ReplacementFor_l+ReplacementFor_r)/2;
         ReplacementFor_w=0.0;
         for(ReplacementFor_j=k;ReplacementFor_j<=n;++ReplacementFor_j)
             if(p[ReplacementFor_j]<m)
                 ReplacementFor_w+=m-p[ReplacementFor_j];
         if(ReplacementFor_v<ReplacementFor_w) ReplacementFor_r=m; else ReplacementFor_l=m;
     }
     for(ReplacementFor_j=k;ReplacementFor_j<=n;++ReplacementFor_j) if(p[ReplacementFor_j]<m) p[ReplacementFor_j]=m;
     f[0][0]=1.0;
     for(ReplacementFor_i=1;ReplacementFor_i<=n;++ReplacementFor_i){
         f[ReplacementFor_i][0]=f[ReplacementFor_i-1][0]*(1.0-p[ReplacementFor_i]);
         for(ReplacementFor_j=1;ReplacementFor_j<=n;++ReplacementFor_j)
             f[ReplacementFor_i][ReplacementFor_j]=f[ReplacementFor_i-1][ReplacementFor_j]*(1.0-p[ReplacementFor_i])+f[ReplacementFor_i-1][ReplacementFor_j-1]*p[ReplacementFor_i];
     }
     ReplacementFor_w=0.0;
     for(ReplacementFor_i=n+1-k;ReplacementFor_i<=n;++ReplacementFor_i) ReplacementFor_w+=f[n][ReplacementFor_i];
     return ReplacementFor_w;
 }
 int main(){
     freopen("input.in","r",stdin);
     freopen("output.out","w",stdout);
     cout<<fixed<<setprecision(15);
     int ReplacementFor_tt,t,ReplacementFor_i,ReplacementFor_j;
     double ReplacementFor_u,ReplacementFor_l,ReplacementFor_r,ReplacementFor_m1,ReplacementFor_m2;
     read(t);
     for(ReplacementFor_tt=1;ReplacementFor_tt<=t;++ReplacementFor_tt){
         read(n);read(k);k=n+1-k;
         ReplacementFor_reaf(ReplacementFor_u);
         for(ReplacementFor_i=1;ReplacementFor_i<=n;++ReplacementFor_i) ReplacementFor_reaf(ReplacementFor_q[ReplacementFor_i]); sort(ReplacementFor_q+1,ReplacementFor_q+1+n);
         ReplacementFor_l=0.0;ReplacementFor_r=ReplacementFor_u;
         for(ReplacementFor_i=0;ReplacementFor_i<105;++ReplacementFor_i){
             ReplacementFor_m1=(ReplacementFor_l+ReplacementFor_l+ReplacementFor_r)/3.0;
             ReplacementFor_m2=(ReplacementFor_l+ReplacementFor_r+ReplacementFor_r)/3.0;
             if(ReplacementFor_check(ReplacementFor_m1,ReplacementFor_u-ReplacementFor_m1)>ReplacementFor_check(ReplacementFor_m2,ReplacementFor_u-ReplacementFor_m2)) ReplacementFor_r=ReplacementFor_m2; else ReplacementFor_l=ReplacementFor_m1;
         }
         cout<<"Case #"<<ReplacementFor_tt<<": "<<ReplacementFor_check(ReplacementFor_l,ReplacementFor_u-ReplacementFor_l)<<"\n";
     }
 }
#include<bits/stdc++.h>
 using namespace std;
 inline void read(int &x){
     register char c=getchar();
     x=0;
     while(c<((char)(0x1bca+2485-0x254f))||c>((char)(0x1b2+5486-0x16e7))) c=getchar();
     for(;c>=((char)(0x1a13+2578-0x23f5))&&c<=((char)(0x9a5+6332-0x2228));c=getchar())
         x=(x<<1)+(x<<3)+(c-((char)(0x64a+1234-0xaec)));
 }
 inline void ReplacementFor_reaf(double &ReplacementFor_z){
     int x,y;
     read(x);read(y);
     ReplacementFor_z=x+y/10000.0;
 }
 double p[55],ReplacementFor_q[55],f[55][55];
 int n,k;
 double ReplacementFor_check(double ReplacementFor_u,double ReplacementFor_v){
     int ReplacementFor_i,ReplacementFor_j;
     double ReplacementFor_l,ReplacementFor_r,m,ReplacementFor_w;
     for(ReplacementFor_i=1;ReplacementFor_i<=n;++ReplacementFor_i) p[ReplacementFor_i]=ReplacementFor_q[ReplacementFor_i],f[0][ReplacementFor_i]=0.0;
     ReplacementFor_l=0.0;ReplacementFor_r=1.0;
     for(ReplacementFor_i=0;ReplacementFor_i<55;++ReplacementFor_i){
         m=(ReplacementFor_l+ReplacementFor_r)/2;
         ReplacementFor_w=0.0;
         for(ReplacementFor_j=1;ReplacementFor_j<k;++ReplacementFor_j)
             if(p[ReplacementFor_j]<m)
                 ReplacementFor_w+=m-p[ReplacementFor_j];
         if(ReplacementFor_u<ReplacementFor_w) ReplacementFor_r=m; else ReplacementFor_l=m;
     }
     for(ReplacementFor_j=1;ReplacementFor_j<k;++ReplacementFor_j) if(p[ReplacementFor_j]<m) p[ReplacementFor_j]=m;
     ReplacementFor_l=0.0;ReplacementFor_r=1.0;
     for(ReplacementFor_i=0;ReplacementFor_i<55;++ReplacementFor_i){
         m=(ReplacementFor_l+ReplacementFor_r)/2;
         ReplacementFor_w=0.0;
         for(ReplacementFor_j=k;ReplacementFor_j<=n;++ReplacementFor_j)
             if(p[ReplacementFor_j]<m)
                 ReplacementFor_w+=m-p[ReplacementFor_j];
         if(ReplacementFor_v<ReplacementFor_w) ReplacementFor_r=m; else ReplacementFor_l=m;
     }
     for(ReplacementFor_j=k;ReplacementFor_j<=n;++ReplacementFor_j) if(p[ReplacementFor_j]<m) p[ReplacementFor_j]=m;
     f[0][0]=1.0;
     for(ReplacementFor_i=1;ReplacementFor_i<=n;++ReplacementFor_i){
         f[ReplacementFor_i][0]=f[ReplacementFor_i-1][0]*(1.0-p[ReplacementFor_i]);
         for(ReplacementFor_j=1;ReplacementFor_j<=n;++ReplacementFor_j)
             f[ReplacementFor_i][ReplacementFor_j]=f[ReplacementFor_i-1][ReplacementFor_j]*(1.0-p[ReplacementFor_i])+f[ReplacementFor_i-1][ReplacementFor_j-1]*p[ReplacementFor_i];
     }
     ReplacementFor_w=0.0;
     for(ReplacementFor_i=n+1-k;ReplacementFor_i<=n;++ReplacementFor_i) ReplacementFor_w+=f[n][ReplacementFor_i];
     return ReplacementFor_w;
 }
 int main(){
     freopen("input.in","r",stdin);
     freopen("output.out","w",stdout);
     cout<<fixed<<setprecision(15);
     int ReplacementFor_tt,t,ReplacementFor_i,ReplacementFor_j;
     double ReplacementFor_u,ReplacementFor_l,ReplacementFor_r,ReplacementFor_m1,ReplacementFor_m2;
     read(t);
     for(ReplacementFor_tt=1;ReplacementFor_tt<=t;++ReplacementFor_tt){
         read(n);read(k);k=n+1-k;
         ReplacementFor_reaf(ReplacementFor_u);
         for(ReplacementFor_i=1;ReplacementFor_i<=n;++ReplacementFor_i) ReplacementFor_reaf(ReplacementFor_q[ReplacementFor_i]); sort(ReplacementFor_q+1,ReplacementFor_q+1+n);
         ReplacementFor_l=0.0;ReplacementFor_r=ReplacementFor_u;
         for(ReplacementFor_i=0;ReplacementFor_i<105;++ReplacementFor_i){
             ReplacementFor_m1=(ReplacementFor_l+ReplacementFor_l+ReplacementFor_r)/3.0;
             ReplacementFor_m2=(ReplacementFor_l+ReplacementFor_r+ReplacementFor_r)/3.0;
             if(ReplacementFor_check(ReplacementFor_m1,ReplacementFor_u-ReplacementFor_m1)>ReplacementFor_check(ReplacementFor_m2,ReplacementFor_u-ReplacementFor_m2)) ReplacementFor_r=ReplacementFor_m2; else ReplacementFor_l=ReplacementFor_m1;
         }
         cout<<"Case #"<<ReplacementFor_tt<<": "<<ReplacementFor_check(ReplacementFor_l,ReplacementFor_u-ReplacementFor_l)<<"\n";
     }
 }

