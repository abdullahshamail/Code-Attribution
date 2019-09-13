
 
 
 
#include <iostream>
 
#include <string>
 
#define ReplacementFor_MAX_N 30
 using namespace std;
 char ReplacementFor_tab[ReplacementFor_MAX_N][ReplacementFor_MAX_N];
 void fill(int ReplacementFor_r,int c)
 {
 	char ReplacementFor_last = ((char)(0x651+1108-0xa66));
 	for (int ReplacementFor_i = 0; ReplacementFor_i < ReplacementFor_r; ++ReplacementFor_i)
 	{
 		ReplacementFor_last = ((char)(0x4bf+6956-0x1fac));
 		for (int ReplacementFor_j = 0; ReplacementFor_j < c; ++ReplacementFor_j)
 		{
 
 			if (ReplacementFor_tab[ReplacementFor_i][ReplacementFor_j] != ((char)(0x6e8+865-0xa0a)))
 			{
 				ReplacementFor_last = ReplacementFor_tab[ReplacementFor_i][ReplacementFor_j];
 				char c = ReplacementFor_tab[ReplacementFor_i][ReplacementFor_j];
 				int ReplacementFor_poz = ReplacementFor_j - 1;
 				while (ReplacementFor_poz >= 0 && ReplacementFor_tab[ReplacementFor_i][ReplacementFor_poz] == ((char)(0xab1+5780-0x2106))) {
 					ReplacementFor_tab[ReplacementFor_i][ReplacementFor_poz] = c;
 					ReplacementFor_poz--;
 				}
 			}
 			if (ReplacementFor_tab[ReplacementFor_i][ReplacementFor_j] == ((char)(0xf6+5071-0x1486)) && ReplacementFor_last != ((char)(0x2c6+521-0x490)))
 			{
 				ReplacementFor_tab[ReplacementFor_i][ReplacementFor_j] = ReplacementFor_last;
 			}
 			
 		}
 		
 	}
 	
 	
 	for (int ReplacementFor_i = 0; ReplacementFor_i < c; ++ReplacementFor_i)
 	{
 		ReplacementFor_last = ((char)(0x2e8+2150-0xb0f));
 		for (int ReplacementFor_j = 0; ReplacementFor_j < ReplacementFor_r; ++ReplacementFor_j)
 		{
 			if (ReplacementFor_tab[ReplacementFor_j][ReplacementFor_i] != ((char)(0x688+7023-0x21b8)))
 			{
 				ReplacementFor_last = ReplacementFor_tab[ReplacementFor_j][ReplacementFor_i];
 				char c = ReplacementFor_tab[ReplacementFor_j][ReplacementFor_i];
 				int ReplacementFor_poz = ReplacementFor_j - 1;
 				while (ReplacementFor_poz >= 0 && ReplacementFor_tab[ReplacementFor_poz][ReplacementFor_i] == ((char)(0xc17+2345-0x1501))) {
 					ReplacementFor_tab[ReplacementFor_poz][ReplacementFor_i] = c;
 					ReplacementFor_poz--;
 				}
 			}
 			if (ReplacementFor_tab[ReplacementFor_j][ReplacementFor_i] == ((char)(0x11dc+2866-0x1ccf)) && ReplacementFor_last != ((char)(0x485+18-0x458)))
 				ReplacementFor_tab[ReplacementFor_j][ReplacementFor_i] = ReplacementFor_last;
 
 		}
 	}
 
 }
 int main()
 {
 	int t,ReplacementFor_r,ReplacementFor_w;
 	cin >> t;
 	for (int ReplacementFor_i = 1; ReplacementFor_i <= t; ++ReplacementFor_i)
 	{
 		string s;
 		cin >> ReplacementFor_r >> ReplacementFor_w;
 		for (int ReplacementFor_j = 0; ReplacementFor_j < ReplacementFor_r; ++ReplacementFor_j)
 		{
 			cin >> s;
 			for (int k = 0; k < ReplacementFor_w; ++k)
 				ReplacementFor_tab[ReplacementFor_j][k] = s[k];
 		
 
 		}
 		fill(ReplacementFor_r,ReplacementFor_w);
 		cout << "Case #" << ReplacementFor_i << ":\n";
 		for (int ReplacementFor_j = 0; ReplacementFor_j < ReplacementFor_r; ++ReplacementFor_j)
 		{
 			for (int k = 0; k < ReplacementFor_w; ++k)
 				cout << ReplacementFor_tab[ReplacementFor_j][k];
 			cout << "\n";
 		}
 	}
     return 0;
 }
 

 
 
 
#include <iostream>
 
#include <string>
 
#define ReplacementFor_MAX_N 30
 using namespace std;
 char ReplacementFor_tab[ReplacementFor_MAX_N][ReplacementFor_MAX_N];
 void fill(int ReplacementFor_r,int c)
 {
 	char ReplacementFor_last = ((char)(0x811+930-0xb74));
 	for (int ReplacementFor_i = 0; ReplacementFor_i < ReplacementFor_r; ++ReplacementFor_i)
 	{
 		ReplacementFor_last = ((char)(0x1895+2429-0x21d3));
 		for (int ReplacementFor_j = 0; ReplacementFor_j < c; ++ReplacementFor_j)
 		{
 
 			if (ReplacementFor_tab[ReplacementFor_i][ReplacementFor_j] != ((char)(0x52d+1477-0xab3)))
 			{
 				ReplacementFor_last = ReplacementFor_tab[ReplacementFor_i][ReplacementFor_j];
 				char c = ReplacementFor_tab[ReplacementFor_i][ReplacementFor_j];
 				int ReplacementFor_poz = ReplacementFor_j - 1;
 				while (ReplacementFor_poz >= 0 && ReplacementFor_tab[ReplacementFor_i][ReplacementFor_poz] == ((char)(0xf36+1607-0x153e))) {
 					ReplacementFor_tab[ReplacementFor_i][ReplacementFor_poz] = c;
 					ReplacementFor_poz--;
 				}
 			}
 			if (ReplacementFor_tab[ReplacementFor_i][ReplacementFor_j] == ((char)(0x19a0+2708-0x23f5)) && ReplacementFor_last != ((char)(0xdc3+4373-0x1e99)))
 			{
 				ReplacementFor_tab[ReplacementFor_i][ReplacementFor_j] = ReplacementFor_last;
 			}
 			
 		}
 		
 	}
 	
 	
 	for (int ReplacementFor_i = 0; ReplacementFor_i < c; ++ReplacementFor_i)
 	{
 		ReplacementFor_last = ((char)(0x709+5644-0x1cd6));
 		for (int ReplacementFor_j = 0; ReplacementFor_j < ReplacementFor_r; ++ReplacementFor_j)
 		{
 			if (ReplacementFor_tab[ReplacementFor_j][ReplacementFor_i] != ((char)(0x184c+122-0x1887)))
 			{
 				ReplacementFor_last = ReplacementFor_tab[ReplacementFor_j][ReplacementFor_i];
 				char c = ReplacementFor_tab[ReplacementFor_j][ReplacementFor_i];
 				int ReplacementFor_poz = ReplacementFor_j - 1;
 				while (ReplacementFor_poz >= 0 && ReplacementFor_tab[ReplacementFor_poz][ReplacementFor_i] == ((char)(0x3a3+3491-0x1107))) {
 					ReplacementFor_tab[ReplacementFor_poz][ReplacementFor_i] = c;
 					ReplacementFor_poz--;
 				}
 			}
 			if (ReplacementFor_tab[ReplacementFor_j][ReplacementFor_i] == ((char)(0xe4+572-0x2e1)) && ReplacementFor_last != ((char)(0xf4c+5063-0x22d4)))
 				ReplacementFor_tab[ReplacementFor_j][ReplacementFor_i] = ReplacementFor_last;
 
 		}
 	}
 
 }
 int main()
 {
 	int t,ReplacementFor_r,ReplacementFor_w;
 	cin >> t;
 	for (int ReplacementFor_i = 1; ReplacementFor_i <= t; ++ReplacementFor_i)
 	{
 		string s;
 		cin >> ReplacementFor_r >> ReplacementFor_w;
 		for (int ReplacementFor_j = 0; ReplacementFor_j < ReplacementFor_r; ++ReplacementFor_j)
 		{
 			cin >> s;
 			for (int k = 0; k < ReplacementFor_w; ++k)
 				ReplacementFor_tab[ReplacementFor_j][k] = s[k];
 		
 
 		}
 		fill(ReplacementFor_r,ReplacementFor_w);
 		cout << "Case #" << ReplacementFor_i << ":\n";
 		for (int ReplacementFor_j = 0; ReplacementFor_j < ReplacementFor_r; ++ReplacementFor_j)
 		{
 			for (int k = 0; k < ReplacementFor_w; ++k)
 				cout << ReplacementFor_tab[ReplacementFor_j][k];
 			cout << "\n";
 		}
 	}
     return 0;
 }
 

