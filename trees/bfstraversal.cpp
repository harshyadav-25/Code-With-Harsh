#include<iostream>
using namespace std;
class Node{
public:
    Node* left;
    Node* right;
    int val;
    Node(int val){
        this->left = NULL;
        this->right = NULL;
        this->val = val;
    }
};
int levels(Node* root){
    if(root == NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}
void nthlevel(Node* root,int curr, int dest){
    if(root == NULL) return;
    if(curr == dest){  // isko kahi bhi likho same answer aayega yaa call se phle yaa call ke beech ya call ke end
        cout<<root->val<<" ";
        return;
        
    }
    nthlevel(root->left,curr+1,dest);
    
    nthlevel(root->right,curr+1,dest);
    

}

void levelorder(Node* root){
    int n = levels(root);
    for(int i = 1; i <= n; i++){
        nthlevel(root,1,i);
    }
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    Node* f = new Node(60);
    Node* g = new Node(70);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    levelorder(a);

    return 0;
}
