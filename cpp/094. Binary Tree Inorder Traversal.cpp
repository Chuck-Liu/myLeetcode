#include <iostream>
#include<vector>
using namespace std;
//Definition for 'a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
	vector<int> inorderTraversal(TreeNode* root) {
		if (root != NULL){
			if (root->left != NULL)
				inorderTraversal(root->left);
			ret.push_back(root->val);
			if (root->right != NULL)
				inorderTraversal(root->right);
		}
		return ret;
	}
	vector<int> ret;
};
