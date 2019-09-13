
#include <iostream>
 
#include <fstream>
 
#include <vector>
 
#include <string>
 
#include <math.h>
 
#include <algorithm>
 using namespace std;
 const double ReplacementFor_pi = 3.14159265358979323846264338327950288419716939937510582;
 int main() {
 	ifstream in("in.txt");
 	ofstream out("out.txt");
 	int t;
 	in >> t;
 	for(int ReplacementFor_i=1;ReplacementFor_i<=t;ReplacementFor_i++) {
 		int k,n;
 		in >> n >> k;
 		vector <double> ReplacementFor_r(n),ReplacementFor_h(n);
 		vector <int> f(n,0);
 		double ReplacementFor_rm(0.);
 		double ReplacementFor_g(0.);
 		
 		for (int ReplacementFor_j=0;ReplacementFor_j<n;ReplacementFor_j++) {
 			in >> ReplacementFor_r[ReplacementFor_j] >> ReplacementFor_h[ReplacementFor_j];
 		}
 		
 		while (k > 0) {
 			int ReplacementFor_l(0);
 			for (int ReplacementFor_j=0;ReplacementFor_j<n;ReplacementFor_j++) {
 				if (f[ReplacementFor_j] < f[ReplacementFor_l]) ReplacementFor_l = ReplacementFor_j;
 				else if (f[ReplacementFor_j] == 0 && ReplacementFor_r[ReplacementFor_j]*ReplacementFor_h[ReplacementFor_j]*2. + max(ReplacementFor_r[ReplacementFor_j]*ReplacementFor_r[ReplacementFor_j]-ReplacementFor_rm*ReplacementFor_rm, 0.) > ReplacementFor_r[ReplacementFor_l]*ReplacementFor_h[ReplacementFor_l]*2. + max(ReplacementFor_r[ReplacementFor_l]*ReplacementFor_r[ReplacementFor_l]-ReplacementFor_rm*ReplacementFor_rm, 0.)) {
 					ReplacementFor_l = ReplacementFor_j;
 				}
 			}
 			ReplacementFor_g += ReplacementFor_pi * (ReplacementFor_r[ReplacementFor_l] * ReplacementFor_h[ReplacementFor_l] * 2. + max(ReplacementFor_r[ReplacementFor_l] * ReplacementFor_r[ReplacementFor_l] - ReplacementFor_rm * ReplacementFor_rm, 0.));
 			ReplacementFor_rm = max(ReplacementFor_rm, ReplacementFor_r[ReplacementFor_l]);
 			f[ReplacementFor_l] = 1;
 			k--;
 		}
 		
 		out.setf(ios::fixed);
 		out.precision(6);
 		out << "Case #" << ReplacementFor_i << ": " << ReplacementFor_g << "\n";
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
 const double ReplacementFor_pi = 3.14159265358979323846264338327950288419716939937510582;
 int main() {
 	ifstream in("in.txt");
 	ofstream out("out.txt");
 	int t;
 	in >> t;
 	for(int ReplacementFor_i=1;ReplacementFor_i<=t;ReplacementFor_i++) {
 		int k,n;
 		in >> n >> k;
 		vector <double> ReplacementFor_r(n),ReplacementFor_h(n);
 		vector <int> f(n,0);
 		double ReplacementFor_rm(0.);
 		double ReplacementFor_g(0.);
 		
 		for (int ReplacementFor_j=0;ReplacementFor_j<n;ReplacementFor_j++) {
 			in >> ReplacementFor_r[ReplacementFor_j] >> ReplacementFor_h[ReplacementFor_j];
 		}
 		
 		while (k > 0) {
 			int ReplacementFor_l(0);
 			for (int ReplacementFor_j=0;ReplacementFor_j<n;ReplacementFor_j++) {
 				if (f[ReplacementFor_j] < f[ReplacementFor_l]) ReplacementFor_l = ReplacementFor_j;
 				else if (f[ReplacementFor_j] == 0 && ReplacementFor_r[ReplacementFor_j]*ReplacementFor_h[ReplacementFor_j]*2. + max(ReplacementFor_r[ReplacementFor_j]*ReplacementFor_r[ReplacementFor_j]-ReplacementFor_rm*ReplacementFor_rm, 0.) > ReplacementFor_r[ReplacementFor_l]*ReplacementFor_h[ReplacementFor_l]*2. + max(ReplacementFor_r[ReplacementFor_l]*ReplacementFor_r[ReplacementFor_l]-ReplacementFor_rm*ReplacementFor_rm, 0.)) {
 					ReplacementFor_l = ReplacementFor_j;
 				}
 			}
 			ReplacementFor_g += ReplacementFor_pi * (ReplacementFor_r[ReplacementFor_l] * ReplacementFor_h[ReplacementFor_l] * 2. + max(ReplacementFor_r[ReplacementFor_l] * ReplacementFor_r[ReplacementFor_l] - ReplacementFor_rm * ReplacementFor_rm, 0.));
 			ReplacementFor_rm = max(ReplacementFor_rm, ReplacementFor_r[ReplacementFor_l]);
 			f[ReplacementFor_l] = 1;
 			k--;
 		}
 		
 		out.setf(ios::fixed);
 		out.precision(6);
 		out << "Case #" << ReplacementFor_i << ": " << ReplacementFor_g << "\n";
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
 const double ReplacementFor_pi = 3.14159265358979323846264338327950288419716939937510582;
 int main() {
 	ifstream in("in.txt");
 	ofstream out("out.txt");
 	int t;
 	in >> t;
 	for(int ReplacementFor_i=1;ReplacementFor_i<=t;ReplacementFor_i++) {
 		int k,n;
 		in >> n >> k;
 		vector <double> ReplacementFor_r(n),ReplacementFor_h(n);
 		vector <int> f(n,0);
 		double ReplacementFor_rm(0.);
 		double ReplacementFor_g(0.);
 		
 		for (int ReplacementFor_j=0;ReplacementFor_j<n;ReplacementFor_j++) {
 			in >> ReplacementFor_r[ReplacementFor_j] >> ReplacementFor_h[ReplacementFor_j];
 		}
 		
 		while (k > 0) {
 			int ReplacementFor_l(0);
 			for (int ReplacementFor_j=0;ReplacementFor_j<n;ReplacementFor_j++) {
 				if (f[ReplacementFor_j] < f[ReplacementFor_l]) ReplacementFor_l = ReplacementFor_j;
 				else if (f[ReplacementFor_j] == 0 && ReplacementFor_r[ReplacementFor_j]*ReplacementFor_h[ReplacementFor_j]*2. + max(ReplacementFor_r[ReplacementFor_j]*ReplacementFor_r[ReplacementFor_j]-ReplacementFor_rm*ReplacementFor_rm, 0.) > ReplacementFor_r[ReplacementFor_l]*ReplacementFor_h[ReplacementFor_l]*2. + max(ReplacementFor_r[ReplacementFor_l]*ReplacementFor_r[ReplacementFor_l]-ReplacementFor_rm*ReplacementFor_rm, 0.)) {
 					ReplacementFor_l = ReplacementFor_j;
 				}
 			}
 			ReplacementFor_g += ReplacementFor_pi * (ReplacementFor_r[ReplacementFor_l] * ReplacementFor_h[ReplacementFor_l] * 2. + max(ReplacementFor_r[ReplacementFor_l] * ReplacementFor_r[ReplacementFor_l] - ReplacementFor_rm * ReplacementFor_rm, 0.));
 			ReplacementFor_rm = max(ReplacementFor_rm, ReplacementFor_r[ReplacementFor_l]);
 			f[ReplacementFor_l] = 1;
 			k--;
 		}
 		
 		out.setf(ios::fixed);
 		out.precision(6);
 		out << "Case #" << ReplacementFor_i << ": " << ReplacementFor_g << "\n";
 	}
 	return 0;
 }
 

