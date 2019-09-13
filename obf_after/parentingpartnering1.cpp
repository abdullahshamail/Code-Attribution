
#include<bits/stdc++.h>
 using namespace std;
 inline void read(int &x){
     register char c=getchar();
     x=0;
     while(c<((char)(0x7c6+7633-0x2567))||c>((char)(0x3ca+4205-0x13fe))) c=getchar();
     for(;c>=((char)(0x1043+3959-0x1f8a))&&c<=((char)(0x11dd+3659-0x1fef));c=getchar())
         x=(x<<1)+(x<<3)+(c-((char)(0x270+8832-0x24c0)));
 }
 inline void ReplacementFor_mini(int &x,int y){
     if(x>y) x=y;
 }
 const int ReplacementFor_INF=1e9+7;
 int a[1444],f[725][725][2];
 int main(){
     freopen("input.in","r",stdin);
     freopen("output.out","w",stdout);
     int ReplacementFor_tt,t,n,m,ReplacementFor_i,ReplacementFor_j;
     read(t);
     for(ReplacementFor_tt=1;ReplacementFor_tt<=t;++ReplacementFor_tt){
         for(ReplacementFor_i=0;ReplacementFor_i<1444;++ReplacementFor_i) a[ReplacementFor_i]=-1;
         read(n);read(m);
         while(n--){
             read(ReplacementFor_i);read(ReplacementFor_j);
             for(++ReplacementFor_i;ReplacementFor_i<=ReplacementFor_j;++ReplacementFor_i) a[ReplacementFor_i]=0;
         }
         n=ReplacementFor_INF;
         while(m--){
             read(ReplacementFor_i);read(ReplacementFor_j);
             for(++ReplacementFor_i;ReplacementFor_i<=ReplacementFor_j;++ReplacementFor_i) a[ReplacementFor_i]=1;
         }
         m=ReplacementFor_INF;
         if(a[1]!=0){
             for(ReplacementFor_i=0;ReplacementFor_i<2;++ReplacementFor_i) for(ReplacementFor_j=0;ReplacementFor_j<2;++ReplacementFor_j) f[ReplacementFor_i][ReplacementFor_j][0]=f[ReplacementFor_i][ReplacementFor_j][1]=ReplacementFor_INF;
             f[1][0][0]=0;
             for(ReplacementFor_i=1;ReplacementFor_i<=720;++ReplacementFor_i)
             for(ReplacementFor_j=0;ReplacementFor_j<=720;++ReplacementFor_j){
                 if(ReplacementFor_i==1&&ReplacementFor_j==0) continue;
                 if(a[ReplacementFor_i+ReplacementFor_j]!=0&&ReplacementFor_i>1) f[ReplacementFor_i][ReplacementFor_j][0]=min(f[ReplacementFor_i-1][ReplacementFor_j][0],f[ReplacementFor_i-1][ReplacementFor_j][1]+1); else f[ReplacementFor_i][ReplacementFor_j][0]=ReplacementFor_INF;
                 if(a[ReplacementFor_i+ReplacementFor_j]!=1&&ReplacementFor_j>0) f[ReplacementFor_i][ReplacementFor_j][1]=min(f[ReplacementFor_i][ReplacementFor_j-1][1],f[ReplacementFor_i][ReplacementFor_j-1][0]+1); else f[ReplacementFor_i][ReplacementFor_j][1]=ReplacementFor_INF;
             }
             n=min(f[720][720][0],f[720][720][1]+1);
         }
         if(a[1]!=1){
             for(ReplacementFor_i=0;ReplacementFor_i<2;++ReplacementFor_i) for(ReplacementFor_j=0;ReplacementFor_j<2;++ReplacementFor_j) f[ReplacementFor_i][ReplacementFor_j][0]=f[ReplacementFor_i][ReplacementFor_j][1]=ReplacementFor_INF;
             f[0][1][1]=0;
             for(ReplacementFor_i=0;ReplacementFor_i<=720;++ReplacementFor_i)
             for(ReplacementFor_j=1;ReplacementFor_j<=720;++ReplacementFor_j){
                 if(ReplacementFor_i==0&&ReplacementFor_j==1) continue;
                 if(a[ReplacementFor_i+ReplacementFor_j]!=0&&ReplacementFor_i>0) f[ReplacementFor_i][ReplacementFor_j][0]=min(f[ReplacementFor_i-1][ReplacementFor_j][0],f[ReplacementFor_i-1][ReplacementFor_j][1]+1); else f[ReplacementFor_i][ReplacementFor_j][0]=ReplacementFor_INF;
                 if(a[ReplacementFor_i+ReplacementFor_j]!=1&&ReplacementFor_j>1) f[ReplacementFor_i][ReplacementFor_j][1]=min(f[ReplacementFor_i][ReplacementFor_j-1][1],f[ReplacementFor_i][ReplacementFor_j-1][0]+1); else f[ReplacementFor_i][ReplacementFor_j][1]=ReplacementFor_INF;
             }
             m=min(f[720][720][1],f[720][720][0]+1);
         }
         printf("Case #%d: %d\n",ReplacementFor_tt,min(n,m));
     }
 }
#include<bits/stdc++.h>
 using namespace std;
 inline void read(int &x){
     register char c=getchar();
     x=0;
     while(c<((char)(0x655+1401-0xb9e))||c>((char)(0xba7+5915-0x2289))) c=getchar();
     for(;c>=((char)(0x13fc+2541-0x1db9))&&c<=((char)(0x10dc+3064-0x1c9b));c=getchar())
         x=(x<<1)+(x<<3)+(c-((char)(0x1780+614-0x19b6)));
 }
 inline void ReplacementFor_mini(int &x,int y){
     if(x>y) x=y;
 }
 const int ReplacementFor_INF=1e9+7;
 int a[1444],f[725][725][2];
 int main(){
     freopen("input.in","r",stdin);
     freopen("output.out","w",stdout);
     int ReplacementFor_tt,t,n,m,ReplacementFor_i,ReplacementFor_j;
     read(t);
     for(ReplacementFor_tt=1;ReplacementFor_tt<=t;++ReplacementFor_tt){
         for(ReplacementFor_i=0;ReplacementFor_i<1444;++ReplacementFor_i) a[ReplacementFor_i]=-1;
         read(n);read(m);
         while(n--){
             read(ReplacementFor_i);read(ReplacementFor_j);
             for(++ReplacementFor_i;ReplacementFor_i<=ReplacementFor_j;++ReplacementFor_i) a[ReplacementFor_i]=0;
         }
         n=ReplacementFor_INF;
         while(m--){
             read(ReplacementFor_i);read(ReplacementFor_j);
             for(++ReplacementFor_i;ReplacementFor_i<=ReplacementFor_j;++ReplacementFor_i) a[ReplacementFor_i]=1;
         }
         m=ReplacementFor_INF;
         if(a[1]!=0){
             for(ReplacementFor_i=0;ReplacementFor_i<2;++ReplacementFor_i) for(ReplacementFor_j=0;ReplacementFor_j<2;++ReplacementFor_j) f[ReplacementFor_i][ReplacementFor_j][0]=f[ReplacementFor_i][ReplacementFor_j][1]=ReplacementFor_INF;
             f[1][0][0]=0;
             for(ReplacementFor_i=1;ReplacementFor_i<=720;++ReplacementFor_i)
             for(ReplacementFor_j=0;ReplacementFor_j<=720;++ReplacementFor_j){
                 if(ReplacementFor_i==1&&ReplacementFor_j==0) continue;
                 if(a[ReplacementFor_i+ReplacementFor_j]!=0&&ReplacementFor_i>1) f[ReplacementFor_i][ReplacementFor_j][0]=min(f[ReplacementFor_i-1][ReplacementFor_j][0],f[ReplacementFor_i-1][ReplacementFor_j][1]+1); else f[ReplacementFor_i][ReplacementFor_j][0]=ReplacementFor_INF;
                 if(a[ReplacementFor_i+ReplacementFor_j]!=1&&ReplacementFor_j>0) f[ReplacementFor_i][ReplacementFor_j][1]=min(f[ReplacementFor_i][ReplacementFor_j-1][1],f[ReplacementFor_i][ReplacementFor_j-1][0]+1); else f[ReplacementFor_i][ReplacementFor_j][1]=ReplacementFor_INF;
             }
             n=min(f[720][720][0],f[720][720][1]+1);
         }
         if(a[1]!=1){
             for(ReplacementFor_i=0;ReplacementFor_i<2;++ReplacementFor_i) for(ReplacementFor_j=0;ReplacementFor_j<2;++ReplacementFor_j) f[ReplacementFor_i][ReplacementFor_j][0]=f[ReplacementFor_i][ReplacementFor_j][1]=ReplacementFor_INF;
             f[0][1][1]=0;
             for(ReplacementFor_i=0;ReplacementFor_i<=720;++ReplacementFor_i)
             for(ReplacementFor_j=1;ReplacementFor_j<=720;++ReplacementFor_j){
                 if(ReplacementFor_i==0&&ReplacementFor_j==1) continue;
                 if(a[ReplacementFor_i+ReplacementFor_j]!=0&&ReplacementFor_i>0) f[ReplacementFor_i][ReplacementFor_j][0]=min(f[ReplacementFor_i-1][ReplacementFor_j][0],f[ReplacementFor_i-1][ReplacementFor_j][1]+1); else f[ReplacementFor_i][ReplacementFor_j][0]=ReplacementFor_INF;
                 if(a[ReplacementFor_i+ReplacementFor_j]!=1&&ReplacementFor_j>1) f[ReplacementFor_i][ReplacementFor_j][1]=min(f[ReplacementFor_i][ReplacementFor_j-1][1],f[ReplacementFor_i][ReplacementFor_j-1][0]+1); else f[ReplacementFor_i][ReplacementFor_j][1]=ReplacementFor_INF;
             }
             m=min(f[720][720][1],f[720][720][0]+1);
         }
         printf("Case #%d: %d\n",ReplacementFor_tt,min(n,m));
     }
 }

