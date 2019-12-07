#include <iostream>
 
using namespace std;

int cnt;

class Node{
public:
    int key;
    Node* right;
    Node* left;
    Node(int key){
        this->key = key;
        right = left = NULL;
    }
};

class BSTree{
public:
    Node* root;
    BSTree(){
        root = NULL;
    }
    Node* insert(Node* node, int key){
        if(node == NULL){
            node = new Node(key);
            return node;
        }
        else {
            if(key < node->key){
                node->left = insert(node->left, key);
            }
            else if(key > node->key){
                node->right = insert(node->right, key);
            }
            return node;
        }
    }


    
 

    int cnt;
    void count(Node * root){
        
        if (root != NULL){
            count(root->right);
            cnt += root->key;
            cout << cnt << " ";
            count(root->left);
        }
    }


};

int main(){
    BSTree *tree = new BSTree();
    int x;
    cin >> x;
    for(int i = 0; i < x; i++)
    {
        int n; cin >> n;
        tree->root = tree->insert(tree->root, n);
    }

    tree->count(tree->root);
 
    return 0;
}