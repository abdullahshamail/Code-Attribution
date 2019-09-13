
#include <fstream>
 
#include <vector>
 
#include <string>
 using namespace std;
 int main() {
 	ifstream in("in.txt");
 	ofstream out("out.txt");
 	int t;
 	string n;
 	in >> t;
 	for(int ReplacementFor_i=1;ReplacementFor_i<=t;ReplacementFor_i++) {
 		in >> n;
 		string m = n;
 		string ReplacementFor_ans;
 		int ReplacementFor_l = (int)n.size();
 		for (int ReplacementFor_j=0;ReplacementFor_j<ReplacementFor_l;ReplacementFor_j++) m[ReplacementFor_j]=((char)(0xa48+3202-0x1699));
 		if (m > n) {
 			ReplacementFor_ans = m;
 			ReplacementFor_ans.erase(ReplacementFor_l-1,1);
 			for (int ReplacementFor_j=0;ReplacementFor_j<ReplacementFor_l-1;ReplacementFor_j++) ReplacementFor_ans[ReplacementFor_j] = ((char)(0xf15+3973-0x1e61));
 		} else {
 			ReplacementFor_ans = n;
 			for (int k=0;k<ReplacementFor_l;k++) {
 				for (int ReplacementFor_j=1;ReplacementFor_j<ReplacementFor_l;ReplacementFor_j++) {
 					if (ReplacementFor_ans[ReplacementFor_j] < ReplacementFor_ans[ReplacementFor_j-1]) {
 						ReplacementFor_ans[ReplacementFor_j-1]--;
 						for (int k=ReplacementFor_j;k<ReplacementFor_l;k++) ReplacementFor_ans[k] = ((char)(0xe50+1728-0x14d7));
 					}
 				}
 			}
 		}
 		out << "Case #" << ReplacementFor_i << ": " << ReplacementFor_ans << "\n";
 	}
 	return 0;
 }
 
#include <fstream>
 
#include <vector>
 
#include <string>
 using namespace std;
 int main() {
 	ifstream in("in.txt");
 	ofstream out("out.txt");
 	int t;
 	string n;
 	in >> t;
 	for(int ReplacementFor_i=1;ReplacementFor_i<=t;ReplacementFor_i++) {
 		in >> n;
 		string m = n;
 		string ReplacementFor_ans;
 		int ReplacementFor_l = (int)n.size();
 		for (int ReplacementFor_j=0;ReplacementFor_j<ReplacementFor_l;ReplacementFor_j++) m[ReplacementFor_j]=((char)(0x567+3160-0x118e));
 		if (m > n) {
 			ReplacementFor_ans = m;
 			ReplacementFor_ans.erase(ReplacementFor_l-1,1);
 			for (int ReplacementFor_j=0;ReplacementFor_j<ReplacementFor_l-1;ReplacementFor_j++) ReplacementFor_ans[ReplacementFor_j] = ((char)(0x9bf+6212-0x21ca));
 		} else {
 			ReplacementFor_ans = n;
 			for (int k=0;k<ReplacementFor_l;k++) {
 				for (int ReplacementFor_j=1;ReplacementFor_j<ReplacementFor_l;ReplacementFor_j++) {
 					if (ReplacementFor_ans[ReplacementFor_j] < ReplacementFor_ans[ReplacementFor_j-1]) {
 						ReplacementFor_ans[ReplacementFor_j-1]--;
 						for (int k=ReplacementFor_j;k<ReplacementFor_l;k++) ReplacementFor_ans[k] = ((char)(0x1c81+683-0x1ef3));
 					}
 				}
 			}
 		}
 		out << "Case #" << ReplacementFor_i << ": " << ReplacementFor_ans << "\n";
 	}
 	return 0;
 }
 
#include <fstream>
 
#include <vector>
 
#include <string>
 using namespace std;
 int main() {
 	ifstream in("in.txt");
 	ofstream out("out.txt");
 	int t;
 	string n;
 	in >> t;
 	for(int ReplacementFor_i=1;ReplacementFor_i<=t;ReplacementFor_i++) {
 		in >> n;
 		string m = n;
 		string ReplacementFor_ans;
 		int ReplacementFor_l = (int)n.size();
 		for (int ReplacementFor_j=0;ReplacementFor_j<ReplacementFor_l;ReplacementFor_j++) m[ReplacementFor_j]=((char)(0x138+5880-0x17ff));
 		if (m > n) {
 			ReplacementFor_ans = m;
 			ReplacementFor_ans.erase(ReplacementFor_l-1,1);
 			for (int ReplacementFor_j=0;ReplacementFor_j<ReplacementFor_l-1;ReplacementFor_j++) ReplacementFor_ans[ReplacementFor_j] = ((char)(0x13f7+4408-0x24f6));
 		} else {
 			ReplacementFor_ans = n;
 			for (int k=0;k<ReplacementFor_l;k++) {
 				for (int ReplacementFor_j=1;ReplacementFor_j<ReplacementFor_l;ReplacementFor_j++) {
 					if (ReplacementFor_ans[ReplacementFor_j] < ReplacementFor_ans[ReplacementFor_j-1]) {
 						ReplacementFor_ans[ReplacementFor_j-1]--;
 						for (int k=ReplacementFor_j;k<ReplacementFor_l;k++) ReplacementFor_ans[k] = ((char)(0x156c+1700-0x1bd7));
 					}
 				}
 			}
 		}
 		out << "Case #" << ReplacementFor_i << ": " << ReplacementFor_ans << "\n";
 	}
 	return 0;
 }
 

