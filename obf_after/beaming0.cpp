
#include <cstdio>
 
#include <algorithm>
 
#include <queue>
 
#include <vector>
 using namespace std;
 
 char ReplacementFor_grid[55][55];
 char ReplacementFor_ans[55][55];
 bool ReplacementFor_ud[55][55];
 bool ReplacementFor_lr[55][55];
 
 vector<pair<pair<int,int>,int> > ReplacementFor_imp[55][55][2];
 bool ReplacementFor_v[55][55][2];
 
 void ReplacementFor_dfs(int x, int y, int n){
     ReplacementFor_v[x][y][n] = true;
     for (vector<pair<pair<int,int>,int> >::iterator ReplacementFor_i = ReplacementFor_imp[x][y][n].begin(); ReplacementFor_i != ReplacementFor_imp[x][y][n].end(); ReplacementFor_i++){
         if (!ReplacementFor_v[ReplacementFor_i->first.first][ReplacementFor_i->first.second][ReplacementFor_i->second]){
             ReplacementFor_dfs(ReplacementFor_i->first.first,ReplacementFor_i->first.second,ReplacementFor_i->second);
         }
     }
 }
 
 int main(){
     freopen("C-small-attempt1 (1).in", "r", stdin);
     freopen("Csmallout2.out","w",stdout);
     int T;
     scanf("%d", &T);
     for (int t = 1; t <= T; t++){
         int ReplacementFor_R, C;
         scanf("%d %d", &ReplacementFor_R, &C);
         for (int ReplacementFor_i = 1; ReplacementFor_i <= ReplacementFor_R; ReplacementFor_i++){
             scanf(" %s", ReplacementFor_grid[ReplacementFor_i]+1);
             for (int ReplacementFor_j = 1; ReplacementFor_j <= C; ReplacementFor_j++){
                 ReplacementFor_ud[ReplacementFor_i][ReplacementFor_j] = ReplacementFor_lr[ReplacementFor_i][ReplacementFor_j] = true;
             }
         }
         bool ReplacementFor_poss = true;
         for (int ReplacementFor_i = 1; ReplacementFor_i <= ReplacementFor_R; ReplacementFor_i++){
             for (int ReplacementFor_j = 1; ReplacementFor_j <= C; ReplacementFor_j++){
                 if (ReplacementFor_grid[ReplacementFor_i][ReplacementFor_j]==((char)(0xe6c+6344-0x2707))||ReplacementFor_grid[ReplacementFor_i][ReplacementFor_j]==((char)(0xf40+3544-0x1c9c))){
                     bool good = true;
                     int x = ReplacementFor_i, y = ReplacementFor_j;
                     int ReplacementFor_dx = -1, ReplacementFor_dy = 0;
                     while (x>=1&&x<=ReplacementFor_R&&y>=1&&y<=C&&ReplacementFor_grid[x][y]!=((char)(0x597+4184-0x15cc))){
                         x += ReplacementFor_dx;
                         y += ReplacementFor_dy;
                         if (ReplacementFor_grid[x][y]==((char)(0xb0b+198-0xba2))){
                             int t = ReplacementFor_dx;
                             ReplacementFor_dx = ReplacementFor_dy;
                             ReplacementFor_dy = ReplacementFor_dx;
                             ReplacementFor_dx = -ReplacementFor_dx;
                             ReplacementFor_dy = -ReplacementFor_dy;
                         }
                         else if (ReplacementFor_grid[x][y]=='\\'){
                             int t = ReplacementFor_dx;
                             ReplacementFor_dx = ReplacementFor_dy;
                             ReplacementFor_dy = ReplacementFor_dx;
                         }
                         else if (ReplacementFor_grid[x][y]==((char)(0x41c+5910-0x1ab6))||ReplacementFor_grid[x][y]==((char)(0x1086+710-0x131f))){
                             good = false;
                             break;
                         }
                     }
                     if (good){
                         x = ReplacementFor_i;
                         y = ReplacementFor_j;
                         ReplacementFor_dx = 1;
                         ReplacementFor_dy = 0;
                         while (x>=1&&x<=ReplacementFor_R&&y>=1&&y<=C&&ReplacementFor_grid[x][y]!=((char)(0x171+7715-0x1f71))){
                             x += ReplacementFor_dx;
                             y += ReplacementFor_dy;
                             if (ReplacementFor_grid[x][y]==((char)(0x13f1+4557-0x258f))){
                                 int t = ReplacementFor_dx;
                                 ReplacementFor_dx = ReplacementFor_dy;
                                 ReplacementFor_dy = ReplacementFor_dx;
                                 ReplacementFor_dx = -ReplacementFor_dx;
                                 ReplacementFor_dy = -ReplacementFor_dy;
                             }
                             else if (ReplacementFor_grid[x][y]=='\\'){
                                 int t = ReplacementFor_dx;
                                 ReplacementFor_dx = ReplacementFor_dy;
                                 ReplacementFor_dy = ReplacementFor_dx;
                             }
                             else if (ReplacementFor_grid[x][y]==((char)(0xafa+6099-0x2251))||ReplacementFor_grid[x][y]==((char)(0xd09+1699-0x137f))){
                                 good = false;
                                 break;
                             }
                         }
                     }
                     if (!good) ReplacementFor_ud[ReplacementFor_i][ReplacementFor_j] = false;
                     good = true;
                     x = ReplacementFor_i, y = ReplacementFor_j;
                     ReplacementFor_dx = 0, ReplacementFor_dy = 1;
                     while (x>=1&&x<=ReplacementFor_R&&y>=1&&y<=C&&ReplacementFor_grid[x][y]!=((char)(0x9c+5897-0x1782))){
                         x += ReplacementFor_dx;
                         y += ReplacementFor_dy;
                         if (ReplacementFor_grid[x][y]==((char)(0x1fd+7573-0x1f63))){
                             int t = ReplacementFor_dx;
                             ReplacementFor_dx = ReplacementFor_dy;
                             ReplacementFor_dy = ReplacementFor_dx;
                             ReplacementFor_dx = -ReplacementFor_dx;
                             ReplacementFor_dy = -ReplacementFor_dy;
                         }
                         else if (ReplacementFor_grid[x][y]=='\\'){
                             int t = ReplacementFor_dx;
                             ReplacementFor_dx = ReplacementFor_dy;
                             ReplacementFor_dy = ReplacementFor_dx;
                         }
                         else if (ReplacementFor_grid[x][y]==((char)(0x117c+556-0x132c))||ReplacementFor_grid[x][y]==((char)(0x10fa+4896-0x23ed))){
                             good = false;
                             break;
                         }
                     }
                     if (good){
                         x = ReplacementFor_i;
                         y = ReplacementFor_j;
                         ReplacementFor_dx = 0;
                         ReplacementFor_dy = -1;
                         while (x>=1&&x<=ReplacementFor_R&&y>=1&&y<=C&&ReplacementFor_grid[x][y]!=((char)(0x12b4+1772-0x197d))){
                             x += ReplacementFor_dx;
                             y += ReplacementFor_dy;
                             if (ReplacementFor_grid[x][y]==((char)(0xa60+3038-0x160f))){
                                 int t = ReplacementFor_dx;
                                 ReplacementFor_dx = ReplacementFor_dy;
                                 ReplacementFor_dy = ReplacementFor_dx;
                                 ReplacementFor_dx = -ReplacementFor_dx;
                                 ReplacementFor_dy = -ReplacementFor_dy;
                             }
                             else if (ReplacementFor_grid[x][y]=='\\'){
                                 int t = ReplacementFor_dx;
                                 ReplacementFor_dx = ReplacementFor_dy;
                                 ReplacementFor_dy = ReplacementFor_dx;
                             }
                             else if (ReplacementFor_grid[x][y]==((char)(0x1caf+1425-0x21c4))||ReplacementFor_grid[x][y]==((char)(0x970+1768-0x102b))){
                                 good = false;
                                 break;
                             }
                         }
                     }
                     if (!good){
                         ReplacementFor_lr[ReplacementFor_i][ReplacementFor_j] = false;
                     }
                     if (!ReplacementFor_lr[ReplacementFor_i][ReplacementFor_j]&&!ReplacementFor_ud[ReplacementFor_i][ReplacementFor_j]){
                         ReplacementFor_poss = false;
                         break;
                     }
                 }
                 if (!ReplacementFor_poss) break;
             }
             if (!ReplacementFor_poss) break;
         }
         for (int ReplacementFor_i = 1; ReplacementFor_i <= ReplacementFor_R; ReplacementFor_i++){
             for (int ReplacementFor_j = 1; ReplacementFor_j <= C; ReplacementFor_j++){
                 if (ReplacementFor_grid[ReplacementFor_i][ReplacementFor_j]!=((char)(0x1361+2997-0x1ee9))&&ReplacementFor_grid[ReplacementFor_i][ReplacementFor_j]!=((char)(0x13d0+2045-0x1b51))) {
                     ReplacementFor_ans[ReplacementFor_i][ReplacementFor_j] = ReplacementFor_grid[ReplacementFor_i][ReplacementFor_j];
                     if (ReplacementFor_grid[ReplacementFor_i][ReplacementFor_j]==((char)(0x3c9+1809-0xaac))){
                         bool ReplacementFor_du = false, ReplacementFor_rl = false;
                         int ReplacementFor_dux = 0, ReplacementFor_duy = 0, ReplacementFor_rlx = 0, ReplacementFor_rly = 0;
                         char ReplacementFor_dup = '\0', ReplacementFor_rlp = '\0';
                         int x = ReplacementFor_i, y = ReplacementFor_j;
                         int ReplacementFor_dx = -1, ReplacementFor_dy = 0;
                         while (x>=1&&x<=ReplacementFor_R&&y>=1&&y<=C&&ReplacementFor_grid[x][y]!=((char)(0x377+1196-0x800))){
                             x += ReplacementFor_dx;
                             y += ReplacementFor_dy;
                             if (ReplacementFor_grid[x][y]==((char)(0xf75+1173-0x13db))){
                                 int t = ReplacementFor_dx;
                                 ReplacementFor_dx = ReplacementFor_dy;
                                 ReplacementFor_dy = ReplacementFor_dx;
                                 ReplacementFor_dx = -ReplacementFor_dx;
                                 ReplacementFor_dy = -ReplacementFor_dy;
                             }
                             else if (ReplacementFor_grid[x][y]=='\\'){
                                 int t = ReplacementFor_dx;
                                 ReplacementFor_dx = ReplacementFor_dy;
                                 ReplacementFor_dy = ReplacementFor_dx;
                             }
                             else if (ReplacementFor_grid[x][y]==((char)(0x1dd1+32-0x1d75))||ReplacementFor_grid[x][y]==((char)(0x361+5931-0x1a5f))){
                                 if (ReplacementFor_dux == 0 && ReplacementFor_duy == 0){
                                     ReplacementFor_dup = ReplacementFor_dx==0?((char)(0x1a52+2952-0x25ad)):((char)(0xf3+5566-0x1635));
                                     ReplacementFor_du = true;
                                     ReplacementFor_dux = x;
                                     ReplacementFor_duy = y;
                                 }
                                 else {
                                     ReplacementFor_du = false;
                                     break;
                                 }
                             }
                         }
                         x = ReplacementFor_i;
                         y = ReplacementFor_j;
                         ReplacementFor_dx = 1;
                         ReplacementFor_dy = 0;
                         while (x>=1&&x<=ReplacementFor_R&&y>=1&&y<=C&&ReplacementFor_grid[x][y]!=((char)(0x34b+7016-0x1e90))){
                             x += ReplacementFor_dx;
                             y += ReplacementFor_dy;
                             if (ReplacementFor_grid[x][y]==((char)(0x3c4+5709-0x19e2))){
                                 int t = ReplacementFor_dx;
                                 ReplacementFor_dx = ReplacementFor_dy;
                                 ReplacementFor_dy = ReplacementFor_dx;
                                 ReplacementFor_dx = -ReplacementFor_dx;
                                 ReplacementFor_dy = -ReplacementFor_dy;
                             }
                             else if (ReplacementFor_grid[x][y]=='\\'){
                                 int t = ReplacementFor_dx;
                                 ReplacementFor_dx = ReplacementFor_dy;
                                 ReplacementFor_dy = ReplacementFor_dx;
                             }
                             else if (ReplacementFor_grid[x][y]==((char)(0xeca+3072-0x1a4e))||ReplacementFor_grid[x][y]==((char)(0x1015+5166-0x2416))){
                                 if (ReplacementFor_dux == 0 && ReplacementFor_duy == 0){
                                     ReplacementFor_dup = ReplacementFor_dx==0?((char)(0x1b09+1086-0x1f1a)):((char)(0x975+3812-0x17dd));
                                     ReplacementFor_du = true;
                                     ReplacementFor_dux = x;
                                     ReplacementFor_duy = y;
                                 }
                                 else {
                                     ReplacementFor_du = false;
                                     break;
                                 }
                             }
                         }
                         x = ReplacementFor_i, y = ReplacementFor_j;
                         ReplacementFor_dx = 0, ReplacementFor_dy = 1;
                         while (x>=1&&x<=ReplacementFor_R&&y>=1&&y<=C&&ReplacementFor_grid[x][y]!=((char)(0x690+4531-0x1820))){
                             x += ReplacementFor_dx;
                             y += ReplacementFor_dy;
                             if (ReplacementFor_grid[x][y]==((char)(0x3db+7365-0x2071))){
                                 int t = ReplacementFor_dx;
                                 ReplacementFor_dx = ReplacementFor_dy;
                                 ReplacementFor_dy = ReplacementFor_dx;
                                 ReplacementFor_dx = -ReplacementFor_dx;
                                 ReplacementFor_dy = -ReplacementFor_dy;
                             }
                             else if (ReplacementFor_grid[x][y]=='\\'){
                                 int t = ReplacementFor_dx;
                                 ReplacementFor_dx = ReplacementFor_dy;
                                 ReplacementFor_dy = ReplacementFor_dx;
                             }
                             else if (ReplacementFor_grid[x][y]==((char)(0xfd5+2114-0x179b))||ReplacementFor_grid[x][y]==((char)(0xd8+6987-0x1bf6))){
                                 if (ReplacementFor_rlx == 0 && ReplacementFor_rly == 0){
                                     ReplacementFor_rlp = ReplacementFor_dx==0?((char)(0x1ecd+1668-0x2524)):((char)(0x440+3097-0xfdd));
                                     ReplacementFor_rl = true;
                                     ReplacementFor_rlx = x;
                                     ReplacementFor_rly = y;
                                 }
                                 else {
                                     ReplacementFor_rl = false;
                                     break;
                                 }
                             }
                         }
                         x = ReplacementFor_i;
                         y = ReplacementFor_j;
                         ReplacementFor_dx = 0;
                         ReplacementFor_dy = -1;
                         while (x>=1&&x<=ReplacementFor_R&&y>=1&&y<=C&&ReplacementFor_grid[x][y]!=((char)(0x1db+7852-0x2064))){
                             x += ReplacementFor_dx;
                             y += ReplacementFor_dy;
                             if (ReplacementFor_grid[x][y]==((char)(0x4f7+5546-0x1a72))){
                                 int t = ReplacementFor_dx;
                                 ReplacementFor_dx = ReplacementFor_dy;
                                 ReplacementFor_dy = ReplacementFor_dx;
                                 ReplacementFor_dx = -ReplacementFor_dx;
                                 ReplacementFor_dy = -ReplacementFor_dy;
                             }
                             else if (ReplacementFor_grid[x][y]=='\\'){
                                 int t = ReplacementFor_dx;
                                 ReplacementFor_dx = ReplacementFor_dy;
                                 ReplacementFor_dy = ReplacementFor_dx;
                             }
                             else if (ReplacementFor_grid[x][y]==((char)(0x1429+192-0x146d))||ReplacementFor_grid[x][y]==((char)(0x195+3016-0xd30))){
                                 if (ReplacementFor_rlx == 0 && ReplacementFor_rly == 0){
                                     ReplacementFor_rlp = ReplacementFor_dx==0?((char)(0xa1f+1624-0x104a)):((char)(0xfa6+3088-0x1b3a));
                                     ReplacementFor_rl = true;
                                     ReplacementFor_rlx = x;
                                     ReplacementFor_rly = y;
                                 }
                                 else {
                                     ReplacementFor_rl = false;
                                     break;
                                 }
                             }
                         }
                         if (ReplacementFor_du&&!ReplacementFor_rl){
                             if (ReplacementFor_dup==((char)(0x76+7133-0x1c26))) ReplacementFor_ud[ReplacementFor_dux][ReplacementFor_duy] = false;
                             else ReplacementFor_lr[ReplacementFor_dux][ReplacementFor_duy] = false;
                         }
                         else if (ReplacementFor_rl&&!ReplacementFor_du){
                             if (ReplacementFor_rlp==((char)(0xb8c+2306-0x1461))) ReplacementFor_ud[ReplacementFor_rlx][ReplacementFor_rly] = false;
                             else ReplacementFor_lr[ReplacementFor_rlx][ReplacementFor_rly] = false;
                         }
                         else if (!ReplacementFor_du&&!ReplacementFor_rl){
                             ReplacementFor_poss = false;
                             break;
                         }
                         





                     }
                 }
             }
         }
         for (int ReplacementFor_i = 1; ReplacementFor_i <= ReplacementFor_R; ReplacementFor_i++){
             for (int ReplacementFor_j = 1; ReplacementFor_j <= C; ReplacementFor_j++){
                 if (ReplacementFor_grid[ReplacementFor_i][ReplacementFor_j]!=((char)(0x156d+4091-0x253b))&&ReplacementFor_grid[ReplacementFor_i][ReplacementFor_j]!=((char)(0x238d+436-0x24c5))) {
                     ReplacementFor_ans[ReplacementFor_i][ReplacementFor_j] = ReplacementFor_grid[ReplacementFor_i][ReplacementFor_j];
                     if (ReplacementFor_grid[ReplacementFor_i][ReplacementFor_j]==((char)(0x29b+5169-0x169e))){
                         bool ReplacementFor_du = false, ReplacementFor_rl = false;
                         int ReplacementFor_dux = 0, ReplacementFor_duy = 0, ReplacementFor_rlx = 0, ReplacementFor_rly = 0;
                         char ReplacementFor_dup = '\0', ReplacementFor_rlp = '\0';
                         int x = ReplacementFor_i, y = ReplacementFor_j;
                         int ReplacementFor_dx = -1, ReplacementFor_dy = 0;
                         while (x>=1&&x<=ReplacementFor_R&&y>=1&&y<=C&&ReplacementFor_grid[x][y]!=((char)(0x69d+8246-0x26b0))){
                             x += ReplacementFor_dx;
                             y += ReplacementFor_dy;
                             if (ReplacementFor_grid[x][y]==((char)(0x621+1171-0xa85))){
                                 int t = ReplacementFor_dx;
                                 ReplacementFor_dx = ReplacementFor_dy;
                                 ReplacementFor_dy = ReplacementFor_dx;
                                 ReplacementFor_dx = -ReplacementFor_dx;
                                 ReplacementFor_dy = -ReplacementFor_dy;
                             }
                             else if (ReplacementFor_grid[x][y]=='\\'){
                                 int t = ReplacementFor_dx;
                                 ReplacementFor_dx = ReplacementFor_dy;
                                 ReplacementFor_dy = ReplacementFor_dx;
                             }
                             else if (ReplacementFor_grid[x][y]==((char)(0x8d7+6972-0x2397))||ReplacementFor_grid[x][y]==((char)(0x12e4+1808-0x19c7))){
                                 if (ReplacementFor_dux == 0 && ReplacementFor_duy == 0){
                                     ReplacementFor_dup = ReplacementFor_dx==0?((char)(0xf5f+1502-0x1510)):((char)(0x98+7042-0x1b9e));
                                     ReplacementFor_du = true;
                                     ReplacementFor_dux = x;
                                     ReplacementFor_duy = y;
                                 }
                                 else {
                                     ReplacementFor_du = false;
                                     break;
                                 }
                             }
                         }
                         x = ReplacementFor_i;
                         y = ReplacementFor_j;
                         ReplacementFor_dx = 1;
                         ReplacementFor_dy = 0;
                         while (x>=1&&x<=ReplacementFor_R&&y>=1&&y<=C&&ReplacementFor_grid[x][y]!=((char)(0xbbb+6601-0x2561))){
                             x += ReplacementFor_dx;
                             y += ReplacementFor_dy;
                             if (ReplacementFor_grid[x][y]==((char)(0x16c8+1583-0x1cc8))){
                                 int t = ReplacementFor_dx;
                                 ReplacementFor_dx = ReplacementFor_dy;
                                 ReplacementFor_dy = ReplacementFor_dx;
                                 ReplacementFor_dx = -ReplacementFor_dx;
                                 ReplacementFor_dy = -ReplacementFor_dy;
                             }
                             else if (ReplacementFor_grid[x][y]=='\\'){
                                 int t = ReplacementFor_dx;
                                 ReplacementFor_dx = ReplacementFor_dy;
                                 ReplacementFor_dy = ReplacementFor_dx;
                             }
                             else if (ReplacementFor_grid[x][y]==((char)(0x876+2376-0x1142))||ReplacementFor_grid[x][y]==((char)(0x626+7583-0x2398))){
                                 if (ReplacementFor_dux == 0 && ReplacementFor_duy == 0){
                                     ReplacementFor_dup = ReplacementFor_dx==0?((char)(0xf52+1871-0x1674)):((char)(0x382+4480-0x1486));
                                     ReplacementFor_du = true;
                                     ReplacementFor_dux = x;
                                     ReplacementFor_duy = y;
                                 }
                                 else {
                                     ReplacementFor_du = false;
                                     break;
                                 }
                             }
                         }
                         x = ReplacementFor_i, y = ReplacementFor_j;
                         ReplacementFor_dx = 0, ReplacementFor_dy = 1;
                         while (x>=1&&x<=ReplacementFor_R&&y>=1&&y<=C&&ReplacementFor_grid[x][y]!=((char)(0x12ed+4122-0x22e4))){
                             x += ReplacementFor_dx;
                             y += ReplacementFor_dy;
                             if (ReplacementFor_grid[x][y]==((char)(0x1dda+952-0x2163))){
                                 int t = ReplacementFor_dx;
                                 ReplacementFor_dx = ReplacementFor_dy;
                                 ReplacementFor_dy = ReplacementFor_dx;
                                 ReplacementFor_dx = -ReplacementFor_dx;
                                 ReplacementFor_dy = -ReplacementFor_dy;
                             }
                             else if (ReplacementFor_grid[x][y]=='\\'){
                                 int t = ReplacementFor_dx;
                                 ReplacementFor_dx = ReplacementFor_dy;
                                 ReplacementFor_dy = ReplacementFor_dx;
                             }
                             else if (ReplacementFor_grid[x][y]==((char)(0x4b5+1288-0x941))||ReplacementFor_grid[x][y]==((char)(0x6ba+8040-0x25f5))){
                                 if (ReplacementFor_rlx == 0 && ReplacementFor_rly == 0){
                                     ReplacementFor_rlp = ReplacementFor_dx==0?((char)(0x1004+2191-0x1866)):((char)(0x539+4186-0x1517));
                                     ReplacementFor_rl = true;
                                     ReplacementFor_rlx = x;
                                     ReplacementFor_rly = y;
                                 }
                                 else {
                                     ReplacementFor_rl = false;
                                     break;
                                 }
                             }
                         }
                         x = ReplacementFor_i;
                         y = ReplacementFor_j;
                         ReplacementFor_dx = 0;
                         ReplacementFor_dy = -1;
                         while (x>=1&&x<=ReplacementFor_R&&y>=1&&y<=C&&ReplacementFor_grid[x][y]!=((char)(0x1a8d+1779-0x215d))){
                             x += ReplacementFor_dx;
                             y += ReplacementFor_dy;
                             if (ReplacementFor_grid[x][y]==((char)(0x30f+7398-0x1fc6))){
                                 int t = ReplacementFor_dx;
                                 ReplacementFor_dx = ReplacementFor_dy;
                                 ReplacementFor_dy = ReplacementFor_dx;
                                 ReplacementFor_dx = -ReplacementFor_dx;
                                 ReplacementFor_dy = -ReplacementFor_dy;
                             }
                             else if (ReplacementFor_grid[x][y]=='\\'){
                                 int t = ReplacementFor_dx;
                                 ReplacementFor_dx = ReplacementFor_dy;
                                 ReplacementFor_dy = ReplacementFor_dx;
                             }
                             else if (ReplacementFor_grid[x][y]==((char)(0x147c+4138-0x242a))||ReplacementFor_grid[x][y]==((char)(0x117c+2825-0x1c58))){
                                 if (ReplacementFor_rlx == 0 && ReplacementFor_rly == 0){
                                     ReplacementFor_rlp = ReplacementFor_dx==0?((char)(0x8e6+6671-0x22c8)):((char)(0x903+603-0xae2));
                                     ReplacementFor_rl = true;
                                     ReplacementFor_rlx = x;
                                     ReplacementFor_rly = y;
                                 }
                                 else {
                                     ReplacementFor_rl = false;
                                     break;
                                 }
                             }
                         }
                         if (ReplacementFor_du&&!ReplacementFor_rl){
                             if (ReplacementFor_dup==((char)(0x608+7057-0x216c))) ReplacementFor_ud[ReplacementFor_dux][ReplacementFor_duy] = false;
                             else ReplacementFor_lr[ReplacementFor_dux][ReplacementFor_duy] = false;
                         }
                         else if (ReplacementFor_rl&&!ReplacementFor_du){
                             if (ReplacementFor_rlp==((char)(0x1b1+2576-0xb94))) ReplacementFor_ud[ReplacementFor_rlx][ReplacementFor_rly] = false;
                             else ReplacementFor_lr[ReplacementFor_rlx][ReplacementFor_rly] = false;
                         }
                         else if (!ReplacementFor_du&&!ReplacementFor_rl){
                             ReplacementFor_poss = false;
                             break;
                         }
                         else if (ReplacementFor_ud[ReplacementFor_dux][ReplacementFor_duy]&&ReplacementFor_lr[ReplacementFor_dux][ReplacementFor_duy]&&ReplacementFor_ud[ReplacementFor_rlx][ReplacementFor_rly]&&ReplacementFor_lr[ReplacementFor_rlx][ReplacementFor_rly]) {
                             int ReplacementFor_dun = ReplacementFor_dup==((char)(0x11c9+263-0x12a3))?0:1;
                             int ReplacementFor_rln = ReplacementFor_rlp==((char)(0xdf7+2117-0x160f))?0:1;
                             ReplacementFor_imp[ReplacementFor_dux][ReplacementFor_duy][1-ReplacementFor_dun].push_back(make_pair(make_pair(ReplacementFor_rlx,ReplacementFor_rly),ReplacementFor_rln));
                             ReplacementFor_imp[ReplacementFor_rlx][ReplacementFor_rly][1-ReplacementFor_rln].push_back(make_pair(make_pair(ReplacementFor_dux,ReplacementFor_duy),ReplacementFor_dun));
                         }
                     }
                 }
             }
         }
         for (int ReplacementFor_i = 1; ReplacementFor_i <= ReplacementFor_R; ReplacementFor_i++){
             for (int ReplacementFor_j = 1; ReplacementFor_j <= C; ReplacementFor_j++){
                 if (ReplacementFor_grid[ReplacementFor_i][ReplacementFor_j]==((char)(0x10e1+821-0x13e9))||ReplacementFor_grid[ReplacementFor_i][ReplacementFor_j]==((char)(0x1174+1412-0x167c))){
                     if (ReplacementFor_ud[ReplacementFor_i][ReplacementFor_j]&&!ReplacementFor_lr[ReplacementFor_i][ReplacementFor_j]) ReplacementFor_ans[ReplacementFor_i][ReplacementFor_j] = ((char)(0x20f0+1361-0x2614));
                     else if (ReplacementFor_lr[ReplacementFor_i][ReplacementFor_j]&&!ReplacementFor_ud[ReplacementFor_i][ReplacementFor_j]) ReplacementFor_ans[ReplacementFor_i][ReplacementFor_j] = ((char)(0xd7c+4997-0x2085));
                     else {
                         if (ReplacementFor_v[ReplacementFor_i][ReplacementFor_j][0]&&!ReplacementFor_v[ReplacementFor_i][ReplacementFor_j][1]) ReplacementFor_ans[ReplacementFor_i][ReplacementFor_j] = ((char)(0x13d4+3793-0x2229));
                         else if (ReplacementFor_v[ReplacementFor_i][ReplacementFor_j][1]&&!ReplacementFor_v[ReplacementFor_i][ReplacementFor_j][0]) ReplacementFor_ans[ReplacementFor_i][ReplacementFor_j] = ((char)(0x16a8+570-0x18b5));
                         else if (ReplacementFor_v[ReplacementFor_i][ReplacementFor_j][0]&&ReplacementFor_v[ReplacementFor_i][ReplacementFor_j][1]) ReplacementFor_poss = false;
                         else {
                             ReplacementFor_dfs(ReplacementFor_i,ReplacementFor_j,0);
                             if (ReplacementFor_v[ReplacementFor_i][ReplacementFor_j][1]) ReplacementFor_poss = false;
                             else ReplacementFor_ans[ReplacementFor_i][ReplacementFor_j] = ((char)(0x53d+3200-0x1190));
                         }
                     }
                 }
                 else ReplacementFor_ans[ReplacementFor_i][ReplacementFor_j] = ReplacementFor_grid[ReplacementFor_i][ReplacementFor_j];
             }
         }
         if (ReplacementFor_poss){
             printf("Case #%d: POSSIBLE\n", t);
             for (int ReplacementFor_i = 1; ReplacementFor_i <= ReplacementFor_R; ReplacementFor_i++){
                 printf("%s\n",ReplacementFor_ans[ReplacementFor_i]+1);
             }
         }
         else printf("Case #%d: IMPOSSIBLE\n", t);
         for (int ReplacementFor_i = 1; ReplacementFor_i <= ReplacementFor_R; ReplacementFor_i++){
             for (int ReplacementFor_j = 1; ReplacementFor_j <= C; ReplacementFor_j++){
                 ReplacementFor_grid[ReplacementFor_i][ReplacementFor_j] = '\0';
                 ReplacementFor_ans[ReplacementFor_i][ReplacementFor_j] = '\0';
                 ReplacementFor_ud[ReplacementFor_i][ReplacementFor_j] = true;
                 ReplacementFor_lr[ReplacementFor_i][ReplacementFor_j] = true;
                 ReplacementFor_imp[ReplacementFor_i][ReplacementFor_j][0].clear();
                 ReplacementFor_imp[ReplacementFor_i][ReplacementFor_j][1].clear();
                 ReplacementFor_v[ReplacementFor_i][ReplacementFor_j][0] = false;
                 ReplacementFor_v[ReplacementFor_i][ReplacementFor_j][1] = false;
             }
         }
     }
 }

