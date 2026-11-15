#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        left = nullptr;
        right = nullptr;
    }

};
void inorder(TreeNode* root,vector<int> &arr){
    if(root == NULL) return;
    inorder(root->right,arr);
    arr.push_back(root->val);
    inorder(root->left,arr);



}
void print(vector<int> arr){
     for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }

}
void build(TreeNode* root, vector<int>&arr,int &i){
    if(root == NULL) return;
    //uses preorder
    root->val = arr[i++];
    build(root->left,arr,i);
    build(root->right, arr, i);



}
void levelOrder(TreeNode* root){
    queue<TreeNode*>q;
    q.push(root);
    while(q.size() > 0){
        TreeNode* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
    }
    cout<<endl;

}


int main(){
    TreeNode* a = new TreeNode(10);
    TreeNode* b = new TreeNode(5);
    TreeNode* c = new TreeNode(16);
    TreeNode* d = new TreeNode(1);
    TreeNode* e = new TreeNode(8);
    TreeNode* f = new TreeNode(12);
    TreeNode* g = new TreeNode(20);
    a->left = b; a->right = c;
    b->left = d; b->right = e;
    c->left = f; c->right = g;
    vector<int>arr;
    inorder(a,arr);
    levelOrder(a);
    print(arr);
    cout<<endl;
    int i = 0;
    build(a,arr,i);
    print(arr);
   
    


}
