#include<iostream>
#include<queue>
#include<limits>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }

};
// void bfs(Node* root){
//     queue<Node*> q;
//     q.push(root);
//     while(q.size() > 0){
//         Node* temp = q.front();
//         q.pop();
//         cout<<temp->val<<" ";
//         if(temp->left != NULL) q.push(temp->left);
//         if(temp->right != NULL) q.push(temp->right);

//     }

// }
Node* construct(int arr[], int n){
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    Node* l;
    Node* r;
    int i = 1;
    int j = 2;
    while(q.size() > 0 && i < n){
        Node* temp = q.front();
        q.pop();
        if(i < n && arr[i] != INT16_MIN) l = new Node(arr[i]);
        else l = NULL;
        if(j != n && arr[j] != INT16_MIN) r = new Node(arr[j]);
        else r = NULL;
        temp->left = l;
        temp->right = r;
        if(l != NULL) q.push(l);
        if(r != NULL) q.push(r);
        i += 2;
        j += 2;


    }
    return root;


}
// int levels(Node* root){
//     if(root == NULL) return 0;
//     return 1 + max(levels(root->left),levels(root->right));
// }
// void nthlevel(Node* root,int curr, int dest){
//     if(root == NULL) return;
//     if(curr == dest){  // isko kahi bhi likho same answer aayega yaa call se phle yaa call ke beech ya call ke end
//         cout<<root->val<<" ";
//         return;
        
//     }
//     nthlevel(root->left,curr+1,dest);
    
//     nthlevel(root->right,curr+1,dest);
    
    

// }

// void levelorder(Node* root){
//     int n = levels(root);
//     for(int i = 1; i <= n; i++){
//         nthlevel(root,1,i);
//         cout<<endl;
//     }
    
// }

void leftboundary(Node* root){
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL) return;
    cout<<root->val<<" ";
    leftboundary(root->left);
    if(root->left == NULL){
        leftboundary(root->right);
    }

}
void leafnode(Node* root){
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL) cout<<root->val<<" ";
    leafnode(root->left);
    leafnode(root->right);

}
void RevRightboundary(Node* root){
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL) return;
    
    
    
    RevRightboundary(root->right);
    if(root->right == NULL) RevRightboundary(root->left);
    cout<<root->val<<" ";
    
    

}

int main(){
    //construct
    int arr[] = {1,2,3,4,5,INT16_MIN,6,7,INT16_MIN,8,INT16_MIN,9,10,INT16_MIN,11,INT16_MIN,12,INT16_MIN,13,INT16_MIN,14,15,16,INT16_MIN,17,INT16_MIN,INT16_MIN,18,INT16_MIN,19,INT16_MIN,INT16_MIN,INT16_MIN,20,21,22,23,INT16_MIN,24,25,26,27,INT16_MIN,28,INT16_MIN,INT16_MIN};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* root = construct(arr,n);
    // levelorder(root);
    leftboundary(root);
    leafnode(root);
    RevRightboundary(root->right);
    
    // bfs(root);
    return 0;

}
