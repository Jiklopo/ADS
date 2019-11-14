#include <iostream>
#include <map>
#include <cstring>

using namespace std;
struct TreeNode{
	int val;
	TreeNode * left;
	TreeNode * right;
	TreeNode(int x) {
		val = x;
		left = right = NULL;
	}
};

void insert(int x, TreeNode* &root) {
	TreeNode * cur = new TreeNode(x);
	if (root == NULL) {
		root = cur;
		return;
	}
	else if (x < root -> val) {
		insert(x, root -> left);
	}
	else insert(x, root -> right);
}

TreeNode* invertTree(TreeNode* root) {//needed to write this function
	if(root == NULL)
		return NULL;
	swap(root-> left, root ->right);//swap left and right sons
	invertTree(root->left);//then go to the sons
	invertTree(root->right);// and make the same operation for them
	return root;
    }

void Order(TreeNode * root) {
	if (root == NULL) return;
	Order(root -> left);
	printf("%d\n", root -> val);
	Order(root -> right);
}

int main() {
	TreeNode* root = NULL;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		insert(x, root);
	}
	TreeNode* ans = invertTree(root);
	Order(ans);
}