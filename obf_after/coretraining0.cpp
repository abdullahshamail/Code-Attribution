
#include<bits/stdc++.h>
 using namespace std;
 inline void read(int &x){
     register char c=getchar();
     x=0;
     while(c<((char)(0x8b0+1865-0xfc9))||c>((char)(0x1aa3+2449-0x23fb))) c=getchar();
     for(;c>=((char)(0x20b2+381-0x21ff))&&c<=((char)(0x1139+4720-0x2370));c=getchar())
         x=(x<<1)+(x<<3)+(c-((char)(0xf94+5118-0x2362)));
 }
 inline void ReplacementFor_reaf(double &ReplacementFor_z){
     int x,y;
     read(x);read(y);
     ReplacementFor_z=x+y/10000.0;
 }
 double p[55],f[55][55];
 int main(){
     freopen("input.in","r",stdin);
     freopen("output.out","w",stdout);
     cout<<fixed<<setprecision(9);
     int ReplacementFor_tt,t,n,ReplacementFor_i,ReplacementFor_j,k;
     double ReplacementFor_l,ReplacementFor_r,ReplacementFor_u,ReplacementFor_v,m;
     read(t);
     for(ReplacementFor_tt=1;ReplacementFor_tt<=t;++ReplacementFor_tt){
         read(n);read(k);k=n+1-k;
         ReplacementFor_reaf(ReplacementFor_u);
         for(ReplacementFor_i=1;ReplacementFor_i<=n;++ReplacementFor_i) ReplacementFor_reaf(p[ReplacementFor_i]); sort(p+1,p+1+n);
         ReplacementFor_l=0.0;ReplacementFor_r=1.0;
         for(ReplacementFor_i=0;ReplacementFor_i<50;++ReplacementFor_i){
             m=(ReplacementFor_l+ReplacementFor_r)/2;
             ReplacementFor_v=0.0;
             for(ReplacementFor_j=k;ReplacementFor_j<=n;++ReplacementFor_j)
                 if(p[ReplacementFor_j]<m)
                     ReplacementFor_v+=m-p[ReplacementFor_j];
             if(ReplacementFor_u<ReplacementFor_v) ReplacementFor_r=m; else ReplacementFor_l=m;
         }
         for(ReplacementFor_j=k;ReplacementFor_j<=n;++ReplacementFor_j) if(p[ReplacementFor_j]<m) p[ReplacementFor_j]=m;
         k=n+1-k;
         f[0][0]=1.0;
         for(ReplacementFor_i=1;ReplacementFor_i<=n;++ReplacementFor_i) f[0][ReplacementFor_i]=0.0;
         for(ReplacementFor_i=1;ReplacementFor_i<=n;++ReplacementFor_i){
             f[ReplacementFor_i][0]=f[ReplacementFor_i-1][0]*(1.0-p[ReplacementFor_i]);
             for(ReplacementFor_j=1;ReplacementFor_j<=n;++ReplacementFor_j)
                 f[ReplacementFor_i][ReplacementFor_j]=f[ReplacementFor_i-1][ReplacementFor_j]*(1.0-p[ReplacementFor_i])+f[ReplacementFor_i-1][ReplacementFor_j-1]*p[ReplacementFor_i];
         }
         ReplacementFor_v=0.0;
         for(ReplacementFor_i=k;ReplacementFor_i<=n;++ReplacementFor_i) ReplacementFor_v+=f[n][ReplacementFor_i];
         cout<<"Case #"<<ReplacementFor_tt<<": "<<ReplacementFor_v<<"\n";
     }
 }
#include<bits/stdc++.h>
 using namespace std;
 inline void read(int &x){
     register char c=getchar();
     x=0;
     while(c<((char)(0x15d3+2398-0x1f01))||c>((char)(0x98c+198-0xa19))) c=getchar();
     for(;c>=((char)(0xae3+2923-0x161e))&&c<=((char)(0x217+5149-0x15fb));c=getchar())
         x=(x<<1)+(x<<3)+(c-((char)(0xaf1+5560-0x2079)));
 }
 inline void ReplacementFor_reaf(double &ReplacementFor_z){
     int x,y;
     read(x);read(y);
     ReplacementFor_z=x+y/10000.0;
 }
 double p[55],f[55][55];
 int main(){
     freopen("input.in","r",stdin);
     freopen("output.out","w",stdout);
     cout<<fixed<<setprecision(9);
     int ReplacementFor_tt,t,n,ReplacementFor_i,ReplacementFor_j,k;
     double ReplacementFor_l,ReplacementFor_r,ReplacementFor_u,ReplacementFor_v,m;
     read(t);
     for(ReplacementFor_tt=1;ReplacementFor_tt<=t;++ReplacementFor_tt){
         read(n);read(k);k=n+1-k;
         ReplacementFor_reaf(ReplacementFor_u);
         for(ReplacementFor_i=1;ReplacementFor_i<=n;++ReplacementFor_i) ReplacementFor_reaf(p[ReplacementFor_i]); sort(p+1,p+1+n);
         ReplacementFor_l=0.0;ReplacementFor_r=1.0;
         for(ReplacementFor_i=0;ReplacementFor_i<50;++ReplacementFor_i){
             m=(ReplacementFor_l+ReplacementFor_r)/2;
             ReplacementFor_v=0.0;
             for(ReplacementFor_j=k;ReplacementFor_j<=n;++ReplacementFor_j)
                 if(p[ReplacementFor_j]<m)
                     ReplacementFor_v+=m-p[ReplacementFor_j];
             if(ReplacementFor_u<ReplacementFor_v) ReplacementFor_r=m; else ReplacementFor_l=m;
         }
         for(ReplacementFor_j=k;ReplacementFor_j<=n;++ReplacementFor_j) if(p[ReplacementFor_j]<m) p[ReplacementFor_j]=m;
         k=n+1-k;
         f[0][0]=1.0;
         for(ReplacementFor_i=1;ReplacementFor_i<=n;++ReplacementFor_i) f[0][ReplacementFor_i]=0.0;
         for(ReplacementFor_i=1;ReplacementFor_i<=n;++ReplacementFor_i){
             f[ReplacementFor_i][0]=f[ReplacementFor_i-1][0]*(1.0-p[ReplacementFor_i]);
             for(ReplacementFor_j=1;ReplacementFor_j<=n;++ReplacementFor_j)
                 f[ReplacementFor_i][ReplacementFor_j]=f[ReplacementFor_i-1][ReplacementFor_j]*(1.0-p[ReplacementFor_i])+f[ReplacementFor_i-1][ReplacementFor_j-1]*p[ReplacementFor_i];
         }
         ReplacementFor_v=0.0;
         for(ReplacementFor_i=k;ReplacementFor_i<=n;++ReplacementFor_i) ReplacementFor_v+=f[n][ReplacementFor_i];
         cout<<"Case #"<<ReplacementFor_tt<<": "<<ReplacementFor_v<<"\n";
     }
 }

