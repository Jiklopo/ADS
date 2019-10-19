#include <iostream>
using namespace std;

int cnt;

class Node {
public:
	int data;
	Node* left;
	Node* right;

	Node(int data) {
		this->data = data;
		left = NULL;
		right = NULL;
	} 
};

class Tree {
public:
	Node* root;
    int rheight, lheight;
    
	Tree() 
    {
		root = NULL;
        rheight = lheight = 0;
	}

	Node* add(Node* root, int data) {
		if (root == NULL) {
			return new Node(data);
		} else if (root->data > data) {
			root->left = add(root->left, data);
            
		} else if (root->data < data) {
			root->right = add(root->right, data);
		}
		return root;
	}

	Node* find(Node* root, int x) {
		if (root == NULL) {
			return NULL;
		} else if (root->data == x) {
			return root;
		} else if (root->data < x) {
			return find(root->right, x);
		} else {
			return find(root->left, x);
		}
	}

	int getSubtreeHeight(Node* root, int cnt = 1)
    {
        if(root == NULL)      
            return cnt;  
        if(root->left == NULL && root->right == NULL)  
            return cnt;          
        else
            return max(getSubtreeHeight(root->left, cnt + 1), getSubtreeHeight(root->right, cnt + 1));  
	}
};

int main()
{
    int n;
    cin >> n;
    Tree tr = Tree();
    for(int i = 0;i < n; i++)
    {
        int x;
        cnt = 0;
        cin >> x;
        tr.root = tr.add(tr.root, x);
    }
    int x;
    cin >> x;
    cout  << tr.getSubtreeHeight(tr.find(tr.root, x));
    //cout << tr.getSubtreeHeight(tr.find(tr.root, x));
}