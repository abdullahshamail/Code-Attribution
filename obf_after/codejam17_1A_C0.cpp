
#include <bits/stdc++.h>
 
 
#include <cstdio>
 
 
#include <iostream>
 
#include <algorithm>
 
#include <cstdlib>
 
#include <vector>
 
#include <set>
 
#include <map>
 
#include <queue>
 
#include <stack>
 
#include <list>
 
#include <cmath>
 
#include <iomanip>
 
#include <time.h>
 
#define ReplacementFor_dibs reserve
 
#define ReplacementFor_OVER9000 1234567890123456789LL
 
#define ReplacementFor_ALL_THE(ReplacementFor_CAKE,ReplacementFor_LIE) for(auto ReplacementFor_LIE =ReplacementFor_CAKE.begin(); ReplacementFor_LIE != ReplacementFor_CAKE.end(); ReplacementFor_LIE++)
 
#define ReplacementFor_tisic 47
 
#define ReplacementFor_soclose 1e-8
 
#define ReplacementFor_chocolate ReplacementFor_win
 
 
#define ReplacementFor_patkan 9
 
#define ReplacementFor_ff first
 
#define ReplacementFor_ss second
 
#define abs(x) ((x < 0)?-(x):x)
 
#define uint unsigned int
 
#define ReplacementFor_dbl long double
 
#define ReplacementFor_pi 3.14159265358979323846
 using namespace std;
 
 
 
#ifdef ReplacementFor_DONLINE_JUDGE
 	
 	
#define ReplacementFor_lld ReplacementFor_I64d
 
#endif
 
 int main() {
 	cin.sync_with_stdio(0);
 	cin.tie(0);
 	cout << fixed << setprecision(10);
 	int T;
 	cin >> T;
 
 	for(int t =0; t < T; t++) {
 		cout << "Case #" << t+1 << ": ";
 		int ReplacementFor_Hd,ReplacementFor_Ad,ReplacementFor_Hk,ReplacementFor_Ak,B,ReplacementFor_D;
 		cin >> ReplacementFor_Hd >> ReplacementFor_Ad >> ReplacementFor_Hk >> ReplacementFor_Ak >> B >> ReplacementFor_D;
 		if(ReplacementFor_Ad >= ReplacementFor_Hk) {
 			cout << "1\n";
 			continue;}
 		if(ReplacementFor_Hd <= ReplacementFor_Ak-ReplacementFor_D) {
 			cout << "IMPOSSIBLE\n";
 			continue;}
 






		int ReplacementFor_ans =-1;
 		for(int ReplacementFor_d =0; ReplacementFor_d <= ((ReplacementFor_D == 0)?0:ReplacementFor_Ak); ReplacementFor_d++) 
 			for(int b =0; b <= ((B == 0)?0:ReplacementFor_Hk); b++) {
 				int ReplacementFor_hd =ReplacementFor_Hd, ReplacementFor_ak =ReplacementFor_Ak, ReplacementFor_turns =0;
 				for(int ReplacementFor_i =0; ReplacementFor_i < ReplacementFor_d; ReplacementFor_i++) {
 					if(ReplacementFor_ak-ReplacementFor_D >= ReplacementFor_hd) {
 						ReplacementFor_hd =ReplacementFor_Hd;
 						ReplacementFor_hd -=ReplacementFor_ak;
 						ReplacementFor_turns++;}
 					if(ReplacementFor_ak-ReplacementFor_D >= ReplacementFor_hd) {
 						ReplacementFor_turns =-1;
 						break;}
 					ReplacementFor_ak -=ReplacementFor_D;
 					ReplacementFor_hd -=ReplacementFor_ak;
 					ReplacementFor_turns++;}
 				if(ReplacementFor_turns == -1) continue;
 				for(int ReplacementFor_i =0; ReplacementFor_i < b; ReplacementFor_i++) {
 					if(ReplacementFor_ak >= ReplacementFor_hd) {
 						ReplacementFor_hd =ReplacementFor_Hd;
 						ReplacementFor_hd -=ReplacementFor_ak;
 						ReplacementFor_turns++;}
 					if(ReplacementFor_ak >= ReplacementFor_hd) {
 						ReplacementFor_turns =-1;
 						break;}
 					ReplacementFor_hd -=ReplacementFor_ak;
 					ReplacementFor_turns++;}
 				if(ReplacementFor_turns == -1) continue;
 				int ReplacementFor_hk =ReplacementFor_Hk;
 				while(ReplacementFor_hk > 0) {
 					if(ReplacementFor_hk <= ReplacementFor_Ad+b*B) {
 						ReplacementFor_turns++;
 						break;}
 					if(ReplacementFor_ak >= ReplacementFor_hd) {
 						ReplacementFor_hd =ReplacementFor_Hd;
 						ReplacementFor_hd -=ReplacementFor_ak;
 						ReplacementFor_turns++;}
 					if(ReplacementFor_ak >= ReplacementFor_hd) {
 						ReplacementFor_turns =-1;
 						break;}
 					ReplacementFor_hk -=ReplacementFor_Ad+b*B;
 					ReplacementFor_hd -=ReplacementFor_ak;
 					ReplacementFor_turns++;}
 				ReplacementFor_ans =(ReplacementFor_ans == -1)?ReplacementFor_turns:min(ReplacementFor_ans,ReplacementFor_turns);}
 		if(ReplacementFor_ans == -1) cout << "IMPOSSIBLE\n";
 		else cout << ReplacementFor_ans << "\n";}
 	return 0;}
 
 
 

