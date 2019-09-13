
 
 
 
#include <cstdio>
 
#include <queue>
 
#include <string>
 using namespace std;
 
 int ReplacementFor_solve(string s, int k)
 {
 	queue<int> ReplacementFor_q;
 	int ReplacementFor_res = 0;
 	int ReplacementFor_i;
 	for (ReplacementFor_i = 0; ReplacementFor_i+k-1 < s.length(); ++ReplacementFor_i)
 	{
 		while (!ReplacementFor_q.empty() && ReplacementFor_q.front() < ReplacementFor_i)ReplacementFor_q.pop();
 		if ((s[ReplacementFor_i] == ((char)(0x1740+4017-0x26c4)) && ReplacementFor_q.size()%2==0) ||(s[ReplacementFor_i] == ((char)(0x2f2+376-0x43f)) && ReplacementFor_q.size()%2))
 		{
 			ReplacementFor_q.push(ReplacementFor_i + k - 1);
 			ReplacementFor_res++;
 		}
 		s[ReplacementFor_i] = ((char)(0x1e4c+2283-0x270c));
 	}
 	for (; ReplacementFor_i < s.length(); ++ReplacementFor_i)
 	{
 		while (!ReplacementFor_q.empty() && ReplacementFor_q.front() < ReplacementFor_i)ReplacementFor_q.pop();
 		if ((s[ReplacementFor_i] == ((char)(0x15c9+4455-0x2703)) && ReplacementFor_q.size() % 2 == 0) || (s[ReplacementFor_i] == ((char)(0xef2+1085-0x1304)) && ReplacementFor_q.size() % 2))s[ReplacementFor_i] = ((char)(0x1cbd+1210-0x214a)); else s[ReplacementFor_i] = ((char)(0x10c2+3103-0x1cb6));
 	}
 	bool ReplacementFor_allPlus = true;
 	for (int ReplacementFor_i = 0; ReplacementFor_i < s.length(); ++ReplacementFor_i)
 		ReplacementFor_allPlus = ReplacementFor_allPlus && s[ReplacementFor_i] == ((char)(0x1827+3387-0x2537));
 	return ReplacementFor_allPlus ? ReplacementFor_res : -1;
 }
 int main()
 {
 	char c[10001];
 	int t, k;
 	scanf("%d", &t);
 	for(int ReplacementFor_i=1;ReplacementFor_i<=t;++ReplacementFor_i)
 	{
 		scanf("%s %d", &c, &k);
 		string s(c);
 		int ReplacementFor_res = ReplacementFor_solve(s, k);
 		printf("Case #%d: ", ReplacementFor_i);
 		if (ReplacementFor_res < 0)printf("IMPOSSIBLE\n");
 		else printf("%d\n", ReplacementFor_res);
 	}
     return 0;
 }
 

 
 
 
#include <cstdio>
 
#include <queue>
 
#include <string>
 using namespace std;
 
 int ReplacementFor_solve(string s, int k)
 {
 	queue<int> ReplacementFor_q;
 	int ReplacementFor_res = 0;
 	int ReplacementFor_i;
 	for (ReplacementFor_i = 0; ReplacementFor_i+k-1 < s.length(); ++ReplacementFor_i)
 	{
 		while (!ReplacementFor_q.empty() && ReplacementFor_q.front() < ReplacementFor_i)ReplacementFor_q.pop();
 		if ((s[ReplacementFor_i] == ((char)(0x110f+2410-0x1a4c)) && ReplacementFor_q.size()%2==0) ||(s[ReplacementFor_i] == ((char)(0x1084+849-0x13aa)) && ReplacementFor_q.size()%2))
 		{
 			ReplacementFor_q.push(ReplacementFor_i + k - 1);
 			ReplacementFor_res++;
 		}
 		s[ReplacementFor_i] = ((char)(0xa93+2367-0x13a7));
 	}
 	for (; ReplacementFor_i < s.length(); ++ReplacementFor_i)
 	{
 		while (!ReplacementFor_q.empty() && ReplacementFor_q.front() < ReplacementFor_i)ReplacementFor_q.pop();
 		if ((s[ReplacementFor_i] == ((char)(0xac8+2999-0x1652)) && ReplacementFor_q.size() % 2 == 0) || (s[ReplacementFor_i] == ((char)(0x95b+6832-0x23e0)) && ReplacementFor_q.size() % 2))s[ReplacementFor_i] = ((char)(0x9f3+1425-0xf57)); else s[ReplacementFor_i] = ((char)(0x826+3927-0x1752));
 	}
 	bool ReplacementFor_allPlus = true;
 	for (int ReplacementFor_i = 0; ReplacementFor_i < s.length(); ++ReplacementFor_i)
 		ReplacementFor_allPlus = ReplacementFor_allPlus && s[ReplacementFor_i] == ((char)(0x1f86+1311-0x247a));
 	return ReplacementFor_allPlus ? ReplacementFor_res : -1;
 }
 int main()
 {
 	char c[10001];
 	int t, k;
 	scanf("%d", &t);
 	for(int ReplacementFor_i=1;ReplacementFor_i<=t;++ReplacementFor_i)
 	{
 		scanf("%s %d", &c, &k);
 		string s(c);
 		int ReplacementFor_res = ReplacementFor_solve(s, k);
 		printf("Case #%d: ", ReplacementFor_i);
 		if (ReplacementFor_res < 0)printf("IMPOSSIBLE\n");
 		else printf("%d\n", ReplacementFor_res);
 	}
     return 0;
 }
 

