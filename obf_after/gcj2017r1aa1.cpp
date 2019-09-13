
#include <iostream>
 
#include <fstream>
 
#include <vector>
 
#include <string>
 using namespace std;
 int main() {
 	ifstream in("in.txt");
 	ofstream out("out.txt");
 	int t;
 	int ReplacementFor_r,c;
 	in >> t;
 	for(int ReplacementFor_i=1;ReplacementFor_i<=t;ReplacementFor_i++) {
 		in >> ReplacementFor_r >> c;
 		vector <string> a(ReplacementFor_r),b;
 		for (int ReplacementFor_j=0;ReplacementFor_j<ReplacementFor_r;ReplacementFor_j++) {
 			in >> a[ReplacementFor_j];
 		}
 		b = a;
 		for (int ReplacementFor_j=0;ReplacementFor_j<ReplacementFor_r;ReplacementFor_j++) {
 			for (int k=0;k<c;k++) {
 				if (b[ReplacementFor_j][k] != ((char)(0x15c8+2819-0x208c))) {
 					for (int ReplacementFor_l=0;ReplacementFor_l<k;ReplacementFor_l++) {
 						b[ReplacementFor_j][ReplacementFor_l] = b[ReplacementFor_j][k];
 					}
 					break;
 				}
 			}
 			for (int k=1;k<c;k++) {
 				if (b[ReplacementFor_j][k] == ((char)(0x42c+4039-0x13b4))) {
 					b[ReplacementFor_j][k] = b[ReplacementFor_j][k-1];
 				}
 			}
 		}
 		for (int ReplacementFor_j=0;ReplacementFor_j<ReplacementFor_r;ReplacementFor_j++) {
 			if (b[ReplacementFor_j][0] != ((char)(0x1572+345-0x168c))) {
 				for (int m=0;m<ReplacementFor_j;m++) for (int k=0;k<c;k++) {
 					b[m][k] = b[ReplacementFor_j][k];
 				}
 				break;
 			}
 		}
 		for (int ReplacementFor_j=1;ReplacementFor_j<ReplacementFor_r;ReplacementFor_j++) {
 			if (b[ReplacementFor_j][0] == ((char)(0x52d+6990-0x203c))) {
 				for (int k=0;k<c;k++) {
 					b[ReplacementFor_j][k] = b[ReplacementFor_j-1][k];
 				}
 			}
 		}
 		
 		out << "Case #" << ReplacementFor_i << ":\n";
 		for (int ReplacementFor_j=0;ReplacementFor_j<ReplacementFor_r;ReplacementFor_j++) {
 			out << b[ReplacementFor_j] << "\n";
 		}
 	}
 	return 0;
 }
 
#include <iostream>
 
#include <fstream>
 
#include <vector>
 
#include <string>
 using namespace std;
 int main() {
 	ifstream in("in.txt");
 	ofstream out("out.txt");
 	int t;
 	int ReplacementFor_r,c;
 	in >> t;
 	for(int ReplacementFor_i=1;ReplacementFor_i<=t;ReplacementFor_i++) {
 		in >> ReplacementFor_r >> c;
 		vector <string> a(ReplacementFor_r),b;
 		for (int ReplacementFor_j=0;ReplacementFor_j<ReplacementFor_r;ReplacementFor_j++) {
 			in >> a[ReplacementFor_j];
 		}
 		b = a;
 		for (int ReplacementFor_j=0;ReplacementFor_j<ReplacementFor_r;ReplacementFor_j++) {
 			for (int k=0;k<c;k++) {
 				if (b[ReplacementFor_j][k] != ((char)(0xb9f+1929-0x12e9))) {
 					for (int ReplacementFor_l=0;ReplacementFor_l<k;ReplacementFor_l++) {
 						b[ReplacementFor_j][ReplacementFor_l] = b[ReplacementFor_j][k];
 					}
 					break;
 				}
 			}
 			for (int k=1;k<c;k++) {
 				if (b[ReplacementFor_j][k] == ((char)(0x10e3+843-0x13ef))) {
 					b[ReplacementFor_j][k] = b[ReplacementFor_j][k-1];
 				}
 			}
 		}
 		for (int ReplacementFor_j=0;ReplacementFor_j<ReplacementFor_r;ReplacementFor_j++) {
 			if (b[ReplacementFor_j][0] != ((char)(0x1c4+6805-0x1c1a))) {
 				for (int m=0;m<ReplacementFor_j;m++) for (int k=0;k<c;k++) {
 					b[m][k] = b[ReplacementFor_j][k];
 				}
 				break;
 			}
 		}
 		for (int ReplacementFor_j=1;ReplacementFor_j<ReplacementFor_r;ReplacementFor_j++) {
 			if (b[ReplacementFor_j][0] == ((char)(0x1a10+788-0x1ce5))) {
 				for (int k=0;k<c;k++) {
 					b[ReplacementFor_j][k] = b[ReplacementFor_j-1][k];
 				}
 			}
 		}
 		
 		out << "Case #" << ReplacementFor_i << ":\n";
 		for (int ReplacementFor_j=0;ReplacementFor_j<ReplacementFor_r;ReplacementFor_j++) {
 			out << b[ReplacementFor_j] << "\n";
 		}
 	}
 	return 0;
 }
 
#include <iostream>
 
#include <fstream>
 
#include <vector>
 
#include <string>
 using namespace std;
 int main() {
 	ifstream in("in.txt");
 	ofstream out("out.txt");
 	int t;
 	int ReplacementFor_r,c;
 	in >> t;
 	for(int ReplacementFor_i=1;ReplacementFor_i<=t;ReplacementFor_i++) {
 		in >> ReplacementFor_r >> c;
 		vector <string> a(ReplacementFor_r),b;
 		for (int ReplacementFor_j=0;ReplacementFor_j<ReplacementFor_r;ReplacementFor_j++) {
 			in >> a[ReplacementFor_j];
 		}
 		b = a;
 		for (int ReplacementFor_j=0;ReplacementFor_j<ReplacementFor_r;ReplacementFor_j++) {
 			for (int k=0;k<c;k++) {
 				if (b[ReplacementFor_j][k] != ((char)(0x352+2432-0xc93))) {
 					for (int ReplacementFor_l=0;ReplacementFor_l<k;ReplacementFor_l++) {
 						b[ReplacementFor_j][ReplacementFor_l] = b[ReplacementFor_j][k];
 					}
 					break;
 				}
 			}
 			for (int k=1;k<c;k++) {
 				if (b[ReplacementFor_j][k] == ((char)(0x22d+4836-0x14d2))) {
 					b[ReplacementFor_j][k] = b[ReplacementFor_j][k-1];
 				}
 			}
 		}
 		for (int ReplacementFor_j=0;ReplacementFor_j<ReplacementFor_r;ReplacementFor_j++) {
 			if (b[ReplacementFor_j][0] != ((char)(0x1c8+6771-0x1bfc))) {
 				for (int m=0;m<ReplacementFor_j;m++) for (int k=0;k<c;k++) {
 					b[m][k] = b[ReplacementFor_j][k];
 				}
 				break;
 			}
 		}
 		for (int ReplacementFor_j=1;ReplacementFor_j<ReplacementFor_r;ReplacementFor_j++) {
 			if (b[ReplacementFor_j][0] == ((char)(0xfa0+4523-0x210c))) {
 				for (int k=0;k<c;k++) {
 					b[ReplacementFor_j][k] = b[ReplacementFor_j-1][k];
 				}
 			}
 		}
 		
 		out << "Case #" << ReplacementFor_i << ":\n";
 		for (int ReplacementFor_j=0;ReplacementFor_j<ReplacementFor_r;ReplacementFor_j++) {
 			out << b[ReplacementFor_j] << "\n";
 		}
 	}
 	return 0;
 }
 

