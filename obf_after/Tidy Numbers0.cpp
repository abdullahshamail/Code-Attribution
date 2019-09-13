
 
 
 
#include <iostream>
 
#include <string>
 using std::string;
 using std::cout;
 using std::cin;
 string ReplacementFor_tenToPower(int n)
 {
 	string ReplacementFor_res = "1";
 	for (int ReplacementFor_i = 0; ReplacementFor_i < n; ++ReplacementFor_i)
 		ReplacementFor_res += ((char)(0x68a+5528-0x1bf2));
 	return ReplacementFor_res;
 }
 string ReplacementFor_ones(int n)
 {
 	string ReplacementFor_res = "1";
 	for (int ReplacementFor_i = 0; ReplacementFor_i < n; ++ReplacementFor_i)
 		ReplacementFor_res += ((char)(0xe91+4070-0x1e46));
 	return ReplacementFor_res;
 }
 string ReplacementFor_nines(int n)
 {
 	string ReplacementFor_res = "9";
 	for (int ReplacementFor_i = 0; ReplacementFor_i < n; ++ReplacementFor_i)
 		ReplacementFor_res += ((char)(0xcb0+1559-0x128e));
 	return ReplacementFor_res;
 }
 bool ReplacementFor_isTidy(string s)
 {
 	bool ReplacementFor_ans = true;
 	for (int ReplacementFor_i = 1; ReplacementFor_i < s.size(); ++ReplacementFor_i)
 		ReplacementFor_ans = ReplacementFor_ans && s[ReplacementFor_i - 1] <= s[ReplacementFor_i];
 	return ReplacementFor_ans;
 }
 string ReplacementFor_solve(string n)
 {
 	if (ReplacementFor_isTidy(n))return n;
 	string ReplacementFor_one = ReplacementFor_ones(n.size() - 1);
 	string ReplacementFor_ten= ReplacementFor_tenToPower(n.size() - 1);
 	if (n < ReplacementFor_one && n >= ReplacementFor_ten)return ReplacementFor_nines(n.size() - 2);
 	int ReplacementFor_i;
 	for (ReplacementFor_i = 1; ReplacementFor_i < n.size(); ++ReplacementFor_i)
 	{
 		if (n[ReplacementFor_i - 1] > n[ReplacementFor_i])
 		{
 			n[ReplacementFor_i - 1]--;
 			break;
 		}
 	}
 	for (; ReplacementFor_i < n.size(); ++ReplacementFor_i)
 		n[ReplacementFor_i] = ((char)(0x51d+113-0x555));
 	if (!ReplacementFor_isTidy(n))return ReplacementFor_solve(n);
 	return n;
 }
 int main()
 {
 	int t;
 	cin >> t;
 	for(int ReplacementFor_i=1;ReplacementFor_i<=t;++ReplacementFor_i)
 	{
 		string s;
 		cin >> s;
 		cout << "Case #" << ReplacementFor_i << ": ";
 		cout << ReplacementFor_solve(s)<<"\n";
 	}
     return 0;
 }
 

 
 
 
#include <iostream>
 
#include <string>
 using std::string;
 using std::cout;
 using std::cin;
 string ReplacementFor_tenToPower(int n)
 {
 	string ReplacementFor_res = "1";
 	for (int ReplacementFor_i = 0; ReplacementFor_i < n; ++ReplacementFor_i)
 		ReplacementFor_res += ((char)(0x70f+6410-0x1fe9));
 	return ReplacementFor_res;
 }
 string ReplacementFor_ones(int n)
 {
 	string ReplacementFor_res = "1";
 	for (int ReplacementFor_i = 0; ReplacementFor_i < n; ++ReplacementFor_i)
 		ReplacementFor_res += ((char)(0x4e0+875-0x81a));
 	return ReplacementFor_res;
 }
 string ReplacementFor_nines(int n)
 {
 	string ReplacementFor_res = "9";
 	for (int ReplacementFor_i = 0; ReplacementFor_i < n; ++ReplacementFor_i)
 		ReplacementFor_res += ((char)(0x15f4+3934-0x2519));
 	return ReplacementFor_res;
 }
 bool ReplacementFor_isTidy(string s)
 {
 	bool ReplacementFor_ans = true;
 	for (int ReplacementFor_i = 1; ReplacementFor_i < s.size(); ++ReplacementFor_i)
 		ReplacementFor_ans = ReplacementFor_ans && s[ReplacementFor_i - 1] <= s[ReplacementFor_i];
 	return ReplacementFor_ans;
 }
 string ReplacementFor_solve(string n)
 {
 	if (ReplacementFor_isTidy(n))return n;
 	string ReplacementFor_one = ReplacementFor_ones(n.size() - 1);
 	string ReplacementFor_ten= ReplacementFor_tenToPower(n.size() - 1);
 	if (n < ReplacementFor_one && n >= ReplacementFor_ten)return ReplacementFor_nines(n.size() - 2);
 	int ReplacementFor_i;
 	for (ReplacementFor_i = 1; ReplacementFor_i < n.size(); ++ReplacementFor_i)
 	{
 		if (n[ReplacementFor_i - 1] > n[ReplacementFor_i])
 		{
 			n[ReplacementFor_i - 1]--;
 			break;
 		}
 	}
 	for (; ReplacementFor_i < n.size(); ++ReplacementFor_i)
 		n[ReplacementFor_i] = ((char)(0x1352+2410-0x1c83));
 	if (!ReplacementFor_isTidy(n))return ReplacementFor_solve(n);
 	return n;
 }
 int main()
 {
 	int t;
 	cin >> t;
 	for(int ReplacementFor_i=1;ReplacementFor_i<=t;++ReplacementFor_i)
 	{
 		string s;
 		cin >> s;
 		cout << "Case #" << ReplacementFor_i << ": ";
 		cout << ReplacementFor_solve(s)<<"\n";
 	}
     return 0;
 }
 

