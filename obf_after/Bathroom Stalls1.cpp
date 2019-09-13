
 
 
 
#include <iostream>
 
#include <algorithm>
 
 
#include <map>
 using namespace std;
 class ReplacementFor_Tree {
 public:
 	struct ReplacementFor_Node
 	{
 		int s, ReplacementFor_e, ReplacementFor_l, ReplacementFor_r;
 		ReplacementFor_Node *left, *right,*ReplacementFor_parent;
 		ReplacementFor_Node(){}
 		ReplacementFor_Node(int s, int ReplacementFor_e) :s(s), ReplacementFor_e(ReplacementFor_e)
 		{
 			if ((ReplacementFor_e - s-1) % 2)
 			{
 				ReplacementFor_l = ReplacementFor_r = (ReplacementFor_e - s - 1) / 2;
 			}
 			else
 			{
 				ReplacementFor_r = (ReplacementFor_e - s - 1) / 2;
 				ReplacementFor_l = ReplacementFor_r - 1;
 			}
 			left = nullptr;
 			right = nullptr;
 			ReplacementFor_parent = nullptr;
 		}
 		void ReplacementFor_divide()
 		{
 			int ReplacementFor_sr = (ReplacementFor_e - s) / 2;
 			left = new ReplacementFor_Node(s, ReplacementFor_sr);
 			right = new ReplacementFor_Node(ReplacementFor_sr, ReplacementFor_e);
 			left->ReplacementFor_parent = this;
 			right->ReplacementFor_parent = this;
 		}
 	};
 	ReplacementFor_Node *ReplacementFor_root;
 	ReplacementFor_Tree(int s, int ReplacementFor_e)
 	{
 		ReplacementFor_root = new ReplacementFor_Node(s, ReplacementFor_e);
 	}
 	ReplacementFor_Node insert()
 	{
 		ReplacementFor_Node *cur = ReplacementFor_root;
 		while(cur->left!=nullptr)
 		{ 
 			ReplacementFor_Node *ReplacementFor_tmp = cur->left;
 			int ReplacementFor_leftMin = min(cur->left->ReplacementFor_l, cur->left->ReplacementFor_r);
 			int ReplacementFor_leftMax = max(cur->left->ReplacementFor_l, cur->left->ReplacementFor_r);
 			int ReplacementFor_rightMin = min(cur->right->ReplacementFor_l, cur->right->ReplacementFor_r);
 			int ReplacementFor_rightMax = max(cur->right->ReplacementFor_l, cur->right->ReplacementFor_r);
 
 			if (ReplacementFor_leftMin < ReplacementFor_rightMin || (ReplacementFor_leftMin==ReplacementFor_rightMin && ReplacementFor_leftMax < ReplacementFor_rightMax))ReplacementFor_tmp = cur->right;
 			cur = ReplacementFor_tmp;
 		}
 		ReplacementFor_Node ReplacementFor_res = *cur;
 		cur->ReplacementFor_divide();
 		ReplacementFor_update(cur);
 		return ReplacementFor_res;
 	}
 	void ReplacementFor_update(ReplacementFor_Node *cur)
 	{
 		while (true) {
 			ReplacementFor_Node *ReplacementFor_tmp = cur->left;
 			int ReplacementFor_leftMin = min(cur->left->ReplacementFor_l, cur->left->ReplacementFor_r);
 			int ReplacementFor_leftMax = max(cur->left->ReplacementFor_l, cur->left->ReplacementFor_r);
 			int ReplacementFor_rightMin = min(cur->right->ReplacementFor_l, cur->right->ReplacementFor_r);
 			int ReplacementFor_rightMax = max(cur->right->ReplacementFor_l, cur->right->ReplacementFor_r);
 			if (ReplacementFor_leftMin < ReplacementFor_rightMin || (ReplacementFor_leftMin == ReplacementFor_rightMin && ReplacementFor_leftMax < ReplacementFor_rightMax))
 			{
 				ReplacementFor_tmp = cur->right;
 			}
 			cur->ReplacementFor_l = ReplacementFor_tmp->ReplacementFor_l;
 			cur->ReplacementFor_r = ReplacementFor_tmp->ReplacementFor_r;
 			if (cur->ReplacementFor_parent == nullptr)break;
 			cur = cur->ReplacementFor_parent;
 		}
 	}
 	
 
 
 };
 
 int main()
 {
 	long long int t, n,k;
 	ReplacementFor_Tree::ReplacementFor_Node ReplacementFor_res;
 	map<long long int,long long int> ReplacementFor_mapa;
 
 	cin >> t;
 	for(int ReplacementFor_j=1;ReplacementFor_j<=t;++ReplacementFor_j)
 	{
 		
 		cin >> n >> k;
 		ReplacementFor_mapa.clear();
 		ReplacementFor_mapa[n] = 1;
 		int ReplacementFor_res;
 		auto ReplacementFor_it=ReplacementFor_mapa.begin();
 		int ReplacementFor_ile = 0;
 		int ReplacementFor_sum = 0;
 		while (ReplacementFor_it != ReplacementFor_mapa.end() && ReplacementFor_it->first != 0)
 		{
 			if (k > ReplacementFor_it->second)k -= ReplacementFor_it->second;
 			else
 			{
 				ReplacementFor_res = ReplacementFor_it->first;
 				break;
 			}
 			ReplacementFor_sum += ReplacementFor_it->second;
 			ReplacementFor_mapa[ReplacementFor_it->first / 2]+=ReplacementFor_it->second;
 			ReplacementFor_ile++;
 			
 			ReplacementFor_mapa[ReplacementFor_it->first - ReplacementFor_it->first / 2 - 1]+=ReplacementFor_it->second;
 			ReplacementFor_it--;
 		}
 		cout <<"Case #"<<ReplacementFor_j<<": "<< max(ReplacementFor_res / 2,ReplacementFor_res-ReplacementFor_res/2-1) << " " << min(ReplacementFor_res / 2, ReplacementFor_res - ReplacementFor_res / 2 - 1)<< "\n";
 	}
 	return 0;
 }
 

