#include<iostream>
#include<stack>
#include<vector>
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
void preOrderdfs(Node* root, vector<int> &ans){
    if(root == NULL) return;
    stack<Node*> st;
        st.push(root);
       
        while(!st.empty()){
            Node* temp = st.top();
            st.pop();
            ans.push_back(temp->val);
            if(temp->right != NULL) st.push(temp->right);
            if(temp->left != NULL) st.push(temp->left);

            

        }
        cout<<"preorder  ";
        for(int i = 0; i < ans.size(); i++){
            
            cout<<ans[i]<<" ";
        
        }
        cout<<endl;
    

}
void inorderdfs(Node* root, vector<int> &ans){
    if(root == NULL) return;
    stack<Node*> st;
    while(root != NULL || !st.empty()){
        while(root != NULL){
            st.push(root);
            root = root->left;
        }
        Node* temp = st.top();
        st.pop();

        ans.push_back(temp->val);
        root = temp->right;

    }
    cout<<"inorder  ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    cout << endl;
}
void postOrderdfs(Node* root, vector<int> &ans){
    if(root == NULL) return;
    stack<Node*> st;
    st.push(root);
    while(!st.empty()){
        Node* temp = st.top();
        st.pop();
        ans.push_back(temp->val);
        if(temp->left != NULL) st.push(temp->left);
        if(temp->right != NULL) st.push(temp->right);
        

    }
    cout<<"postOrder  ";
    for(int i = ans.size() - 1; i >= 0; i--){
        cout<<ans[i]<<" ";
        
    }
    cout<<endl;
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
    vector<int> ans1;
    vector<int> ans2;
    vector<int> ans3;
    
    preOrderdfs(a, ans1);
    inorderdfs(a, ans3);
    postOrderdfs(a, ans2);
    

    

}
