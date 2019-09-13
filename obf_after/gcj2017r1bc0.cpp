
#include <iostream>
 
#include <fstream>
 
#include <vector>
 
#include <string>
 
#include <math.h>
 
#include <algorithm>
 using namespace std;
 const long long int ReplacementFor_md = 1e15;
 const double ReplacementFor_mt = 1e30;
 int main() {
 	ifstream in("in.txt");
 	ofstream out("out.txt");
 	int t;
 	in >> t;
 	for(int ReplacementFor_i=1;ReplacementFor_i<=t;ReplacementFor_i++) {
 		int ReplacementFor_q,n;
 		in >> n >> ReplacementFor_q;
 		vector <int> ReplacementFor_e(n),s(n);
 		for (int ReplacementFor_j=0;ReplacementFor_j<n;ReplacementFor_j++) {
 			in >> ReplacementFor_e[ReplacementFor_j] >> s[ReplacementFor_j];
 		}
 		vector <vector <long long int> > ReplacementFor_d(n,vector<long long int>(n,0));
 		for (int ReplacementFor_j=0;ReplacementFor_j<n;ReplacementFor_j++) for (int k=0;k<n;k++) {
 			in >> ReplacementFor_d[ReplacementFor_j][k];
 			if (ReplacementFor_d[ReplacementFor_j][k] == -1) ReplacementFor_d[ReplacementFor_j][k] = ReplacementFor_md;
 		}
 		vector <int> ReplacementFor_u(ReplacementFor_q),ReplacementFor_v(ReplacementFor_q);
 		for (int ReplacementFor_j=0;ReplacementFor_j<ReplacementFor_q;ReplacementFor_j++) in >> ReplacementFor_u[ReplacementFor_j] >> ReplacementFor_v[ReplacementFor_j];
 		
 		for (int ReplacementFor_j=0;ReplacementFor_j<n;ReplacementFor_j++) for (int k=0;k<n;k++) for (int ReplacementFor_l=0;ReplacementFor_l<n;ReplacementFor_l++) {
 			if (ReplacementFor_d[k][ReplacementFor_l] > ReplacementFor_d[k][ReplacementFor_j] + ReplacementFor_d[ReplacementFor_j][ReplacementFor_l]) ReplacementFor_d[k][ReplacementFor_l] = ReplacementFor_d[k][ReplacementFor_j] + ReplacementFor_d[ReplacementFor_j][ReplacementFor_l];
 		}
 		
 		vector <double> a(ReplacementFor_q,0.);
 		for (int ReplacementFor_j=0;ReplacementFor_j<ReplacementFor_q;ReplacementFor_j++) {
 			vector <bool> b(n,true);
 			int cur = ReplacementFor_u[ReplacementFor_j]-1;
 			vector <vector <double> > c(n,vector<double>(n,ReplacementFor_mt));
 			vector <double> x(n,ReplacementFor_mt);
 			
 			b[cur] = false;
 			for (int k=0;k<n;k++) for (int ReplacementFor_l=0;ReplacementFor_l<n;ReplacementFor_l++) c[cur][ReplacementFor_l] = 0.;
 			x[cur] = 0.;
 			while (cur != ReplacementFor_v[ReplacementFor_j]-1) {
 				for (int k=0;k<n;k++) {
 					if (ReplacementFor_d[cur][k] <= ReplacementFor_e[cur]) {
 						if (c[k][cur] > x[cur] + (double)ReplacementFor_d[cur][k] / s[cur]) c[k][cur] = x[cur] + (double)ReplacementFor_d[cur][k] / s[cur];
 						if (x[k] > c[k][cur]) x[k] = c[k][cur];
 					}
 				}
 				
 				for (int k=0;k<n;k++) if (b[k]) cur = k;
 				for (int k=0;k<n;k++) if (b[k] && x[k] < x[cur]) cur = k;
 				b[cur] = false;
 			}
 			
 			a[ReplacementFor_j] = x[cur];
 			cout << ReplacementFor_i << "\t" << ReplacementFor_j << "\t" << a[ReplacementFor_j] << "\n";
 		}
 		
 		out.setf(ios::fixed);
 		out.precision(6);
 		out << "Case #" << ReplacementFor_i << ":";
 		for (int ReplacementFor_j=0;ReplacementFor_j<ReplacementFor_q;ReplacementFor_j++) out << " " << a[ReplacementFor_j];
 		out << "\n";
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
 const long long int ReplacementFor_md = 1e15;
 const double ReplacementFor_mt = 1e30;
 int main() {
 	ifstream in("in.txt");
 	ofstream out("out.txt");
 	int t;
 	in >> t;
 	for(int ReplacementFor_i=1;ReplacementFor_i<=t;ReplacementFor_i++) {
 		int ReplacementFor_q,n;
 		in >> n >> ReplacementFor_q;
 		vector <int> ReplacementFor_e(n),s(n);
 		for (int ReplacementFor_j=0;ReplacementFor_j<n;ReplacementFor_j++) {
 			in >> ReplacementFor_e[ReplacementFor_j] >> s[ReplacementFor_j];
 		}
 		vector <vector <long long int> > ReplacementFor_d(n,vector<long long int>(n,0));
 		for (int ReplacementFor_j=0;ReplacementFor_j<n;ReplacementFor_j++) for (int k=0;k<n;k++) {
 			in >> ReplacementFor_d[ReplacementFor_j][k];
 			if (ReplacementFor_d[ReplacementFor_j][k] == -1) ReplacementFor_d[ReplacementFor_j][k] = ReplacementFor_md;
 		}
 		vector <int> ReplacementFor_u(ReplacementFor_q),ReplacementFor_v(ReplacementFor_q);
 		for (int ReplacementFor_j=0;ReplacementFor_j<ReplacementFor_q;ReplacementFor_j++) in >> ReplacementFor_u[ReplacementFor_j] >> ReplacementFor_v[ReplacementFor_j];
 		
 		for (int ReplacementFor_j=0;ReplacementFor_j<n;ReplacementFor_j++) for (int k=0;k<n;k++) for (int ReplacementFor_l=0;ReplacementFor_l<n;ReplacementFor_l++) {
 			if (ReplacementFor_d[k][ReplacementFor_l] > ReplacementFor_d[k][ReplacementFor_j] + ReplacementFor_d[ReplacementFor_j][ReplacementFor_l]) ReplacementFor_d[k][ReplacementFor_l] = ReplacementFor_d[k][ReplacementFor_j] + ReplacementFor_d[ReplacementFor_j][ReplacementFor_l];
 		}
 		
 		vector <double> a(ReplacementFor_q,0.);
 		for (int ReplacementFor_j=0;ReplacementFor_j<ReplacementFor_q;ReplacementFor_j++) {
 			vector <bool> b(n,true);
 			int cur = ReplacementFor_u[ReplacementFor_j]-1;
 			vector <vector <double> > c(n,vector<double>(n,ReplacementFor_mt));
 			vector <double> x(n,ReplacementFor_mt);
 			
 			b[cur] = false;
 			for (int k=0;k<n;k++) for (int ReplacementFor_l=0;ReplacementFor_l<n;ReplacementFor_l++) c[cur][ReplacementFor_l] = 0.;
 			x[cur] = 0.;
 			while (cur != ReplacementFor_v[ReplacementFor_j]-1) {
 				for (int k=0;k<n;k++) {
 					if (ReplacementFor_d[cur][k] <= ReplacementFor_e[cur]) {
 						if (c[k][cur] > x[cur] + (double)ReplacementFor_d[cur][k] / s[cur]) c[k][cur] = x[cur] + (double)ReplacementFor_d[cur][k] / s[cur];
 						if (x[k] > c[k][cur]) x[k] = c[k][cur];
 					}
 				}
 				
 				for (int k=0;k<n;k++) if (b[k]) cur = k;
 				for (int k=0;k<n;k++) if (b[k] && x[k] < x[cur]) cur = k;
 				b[cur] = false;
 			}
 			
 			a[ReplacementFor_j] = x[cur];
 			cout << ReplacementFor_i << "\t" << ReplacementFor_j << "\t" << a[ReplacementFor_j] << "\n";
 		}
 		
 		out.setf(ios::fixed);
 		out.precision(6);
 		out << "Case #" << ReplacementFor_i << ":";
 		for (int ReplacementFor_j=0;ReplacementFor_j<ReplacementFor_q;ReplacementFor_j++) out << " " << a[ReplacementFor_j];
 		out << "\n";
 	}
 	return 0;
 }
 

