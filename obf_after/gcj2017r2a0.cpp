
#include <iostream>
 
#include <fstream>
 
#include <vector>
 
#include <string>
 
#include <math.h>
 
#include <algorithm>
 using namespace std;
 int main() {
 	ifstream in("in.txt");
 	ofstream out("out.txt");
 	int t;
 	in >> t;
 	for(int ReplacementFor_i=1;ReplacementFor_i<=t;ReplacementFor_i++) {
 		int n,p;
 		in >> n >> p;
 		vector <int> ReplacementFor_g(n);
 		vector <int> a(p,0);
 		for (int ReplacementFor_j=0;ReplacementFor_j<n;ReplacementFor_j++) {
 			in >> ReplacementFor_g[ReplacementFor_j];
 			a[ReplacementFor_g[ReplacementFor_j]%p]++;
 		}
 		int ReplacementFor_ans(0);
 		if (p == 2) {
 			int ReplacementFor_z;
 			
 			ReplacementFor_z = a[0];
 			ReplacementFor_ans += ReplacementFor_z;
 			a[0] -= ReplacementFor_z;
 			n -= ReplacementFor_z;
 			
 			ReplacementFor_z = a[1]/2;
 			ReplacementFor_ans += ReplacementFor_z;
 			a[1] -= ReplacementFor_z*2;
 			n -= ReplacementFor_z*2;
 			
 			if (n>0) ReplacementFor_ans++;
 		} else if (p == 3) {
 			int ReplacementFor_z;
 			
 			ReplacementFor_z = a[0];
 			ReplacementFor_ans += ReplacementFor_z;
 			a[0] -= ReplacementFor_z;
 			n -= ReplacementFor_z;
 			
 			ReplacementFor_z = min(a[1],a[2]);
 			ReplacementFor_ans += ReplacementFor_z;
 			a[1] -= ReplacementFor_z;
 			a[2] -= ReplacementFor_z;
 			n -= ReplacementFor_z*2;
 			
 			ReplacementFor_z = a[1]/3;
 			ReplacementFor_ans += ReplacementFor_z;
 			a[1] -= ReplacementFor_z*3;
 			n -= ReplacementFor_z*3;
 			
 			ReplacementFor_z = a[2]/3;
 			ReplacementFor_ans += ReplacementFor_z;
 			a[2] -= ReplacementFor_z*3;
 			n -= ReplacementFor_z*3;
 			
 			if (n>0) ReplacementFor_ans++;
 		} else if (p == 4) {
 			int ReplacementFor_z;
 			
 			ReplacementFor_z = a[0];
 			ReplacementFor_ans += ReplacementFor_z;
 			a[0] -= ReplacementFor_z;
 			n -= ReplacementFor_z;
 			
 			ReplacementFor_z = min(a[1],a[3]);
 			ReplacementFor_ans += ReplacementFor_z;
 			a[1] -= ReplacementFor_z;
 			a[3] -= ReplacementFor_z;
 			n -= ReplacementFor_z*2;
 			
 			ReplacementFor_z = a[2]/2;
 			ReplacementFor_ans += ReplacementFor_z;
 			a[2] -= ReplacementFor_z*2;
 			n -= ReplacementFor_z*2;
 			
 			ReplacementFor_z = min(a[1]/2,a[2]);
 			ReplacementFor_ans += ReplacementFor_z;
 			a[1] -= ReplacementFor_z*2;
 			a[2] -= ReplacementFor_z;
 			n -= ReplacementFor_z*3;
 			
 			ReplacementFor_z = min(a[3]/2,a[2]);
 			ReplacementFor_ans += ReplacementFor_z;
 			a[3] -= ReplacementFor_z*2;
 			a[2] -= ReplacementFor_z;
 			n -= ReplacementFor_z*3;
 			
 			ReplacementFor_z = a[1]/4;
 			ReplacementFor_ans += ReplacementFor_z;
 			a[1] -= ReplacementFor_z*4;
 			n -= ReplacementFor_z*4;
 			
 			ReplacementFor_z = a[3]/4;
 			ReplacementFor_ans += ReplacementFor_z;
 			a[3] -= ReplacementFor_z*4;
 			n -= ReplacementFor_z*4;
 			
 			if (n>0) ReplacementFor_ans++;
 		}
 		out << "Case #" << ReplacementFor_i << ": " << ReplacementFor_ans << "\n";
 	}
 	return 0;
 }
 
#include <iostream>
 
#include <fstream>
 
#include <vector>
 
#include <string>
 
#include <math.h>
 
#include <algorithm>
 using namespace std;
 int main() {
 	ifstream in("in.txt");
 	ofstream out("out.txt");
 	int t;
 	in >> t;
 	for(int ReplacementFor_i=1;ReplacementFor_i<=t;ReplacementFor_i++) {
 		int n,p;
 		in >> n >> p;
 		vector <int> ReplacementFor_g(n);
 		vector <int> a(p,0);
 		for (int ReplacementFor_j=0;ReplacementFor_j<n;ReplacementFor_j++) {
 			in >> ReplacementFor_g[ReplacementFor_j];
 			a[ReplacementFor_g[ReplacementFor_j]%p]++;
 		}
 		int ReplacementFor_ans(0);
 		if (p == 2) {
 			int ReplacementFor_z;
 			
 			ReplacementFor_z = a[0];
 			ReplacementFor_ans += ReplacementFor_z;
 			a[0] -= ReplacementFor_z;
 			n -= ReplacementFor_z;
 			
 			ReplacementFor_z = a[1]/2;
 			ReplacementFor_ans += ReplacementFor_z;
 			a[1] -= ReplacementFor_z*2;
 			n -= ReplacementFor_z*2;
 			
 			if (n>0) ReplacementFor_ans++;
 		} else if (p == 3) {
 			int ReplacementFor_z;
 			
 			ReplacementFor_z = a[0];
 			ReplacementFor_ans += ReplacementFor_z;
 			a[0] -= ReplacementFor_z;
 			n -= ReplacementFor_z;
 			
 			ReplacementFor_z = min(a[1],a[2]);
 			ReplacementFor_ans += ReplacementFor_z;
 			a[1] -= ReplacementFor_z;
 			a[2] -= ReplacementFor_z;
 			n -= ReplacementFor_z*2;
 			
 			ReplacementFor_z = a[1]/3;
 			ReplacementFor_ans += ReplacementFor_z;
 			a[1] -= ReplacementFor_z*3;
 			n -= ReplacementFor_z*3;
 			
 			ReplacementFor_z = a[2]/3;
 			ReplacementFor_ans += ReplacementFor_z;
 			a[2] -= ReplacementFor_z*3;
 			n -= ReplacementFor_z*3;
 			
 			if (n>0) ReplacementFor_ans++;
 		} else if (p == 4) {
 			int ReplacementFor_z;
 			
 			ReplacementFor_z = a[0];
 			ReplacementFor_ans += ReplacementFor_z;
 			a[0] -= ReplacementFor_z;
 			n -= ReplacementFor_z;
 			
 			ReplacementFor_z = min(a[1],a[3]);
 			ReplacementFor_ans += ReplacementFor_z;
 			a[1] -= ReplacementFor_z;
 			a[3] -= ReplacementFor_z;
 			n -= ReplacementFor_z*2;
 			
 			ReplacementFor_z = a[2]/2;
 			ReplacementFor_ans += ReplacementFor_z;
 			a[2] -= ReplacementFor_z*2;
 			n -= ReplacementFor_z*2;
 			
 			ReplacementFor_z = min(a[1]/2,a[2]);
 			ReplacementFor_ans += ReplacementFor_z;
 			a[1] -= ReplacementFor_z*2;
 			a[2] -= ReplacementFor_z;
 			n -= ReplacementFor_z*3;
 			
 			ReplacementFor_z = min(a[3]/2,a[2]);
 			ReplacementFor_ans += ReplacementFor_z;
 			a[3] -= ReplacementFor_z*2;
 			a[2] -= ReplacementFor_z;
 			n -= ReplacementFor_z*3;
 			
 			ReplacementFor_z = a[1]/4;
 			ReplacementFor_ans += ReplacementFor_z;
 			a[1] -= ReplacementFor_z*4;
 			n -= ReplacementFor_z*4;
 			
 			ReplacementFor_z = a[3]/4;
 			ReplacementFor_ans += ReplacementFor_z;
 			a[3] -= ReplacementFor_z*4;
 			n -= ReplacementFor_z*4;
 			
 			if (n>0) ReplacementFor_ans++;
 		}
 		out << "Case #" << ReplacementFor_i << ": " << ReplacementFor_ans << "\n";
 	}
 	return 0;
 }
 

