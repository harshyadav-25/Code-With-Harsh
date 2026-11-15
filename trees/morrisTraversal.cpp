// inorder tranversal in O(1) space
#include<iostream>
#include<queue>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }

};
void inorderMorris(TreeNode* curr) {
    while (curr != nullptr) {

        if (curr->left == nullptr) {

            // Left nahi hai → directly visit
            cout << curr->val << " ";

            // Right subtree
            curr = curr->right;
        }

        else {

            // Inorder predecessor find karo
            TreeNode* pred = curr->left;

            while (pred->right != nullptr && pred->right != curr) {
                pred = pred->right;
            }

            // First time predecessor mila
            if (pred->right == nullptr) {

                // Temporary link banao
                pred->right = curr;

                // Left subtree mein jao
                curr = curr->left;
            }

            // Second time same node par wapas aaye
            else {

                // Temporary link hatao
                pred->right = nullptr;

                // Current node visit
                cout << curr->val << " ";

                // Right subtree mein jao
                curr = curr->right;
            }
        }
    }
}
int main(){
    TreeNode* a = new TreeNode(10);
    TreeNode* b = new TreeNode(6);
    TreeNode* c = new TreeNode(15);
    TreeNode* d = new TreeNode(4);
    TreeNode* e = new TreeNode(1);
    TreeNode* f = new TreeNode(5);
    TreeNode* g = new TreeNode(8);
    TreeNode* h = new TreeNode(12);
    TreeNode* i = new TreeNode(18);
    TreeNode* j = new TreeNode(14);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = g;
    c->left = h;
    c->right = i;
    d->left = e;
    d->right = f;
    e->left = nullptr;
    e->right = nullptr;
    f->left = nullptr;
    f->right = nullptr;
    g->left = nullptr;
    g->right = nullptr;
    h->left = nullptr;
    h->right = j;
    i->left = nullptr;
    i->right = nullptr;
    j->left = nullptr;
    j->right = nullptr;
    inorderMorris(a);
    return 0;
}



// }
// TreeNode* construct(int arr[], int n){
//     queue<TreeNode*> q;
//     TreeNode* root = new TreeNode(arr[0]);
//     q.push(root);
//     TreeNode* l;
//     TreeNode* r;
//     int i = 1;
//     int j = 2;
//     while(q.size() > 0 && i < n){
//         TreeNode* temp = q.front();
//         q.pop();
//         if(i < n && arr[i] != INT16_MIN) l = new TreeNode(arr[i]);
//         else l = NULL;
//         if(j != n && arr[j] != INT16_MIN) r = new TreeNode(arr[j]);
//         else r = NULL;
//         temp->left = l;
//         temp->right = r;
//         if(l != NULL) q.push(l);
//         if(r != NULL) q.push(r);
//         i += 2;
//         j += 2;


//     }
//     return root;


// }
// int main(){
//     //construct
//     int arr[] = {1,2,3,4,5,INT16_MIN,6,INT16_MIN,INT16_MIN,7,8,9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     TreeNode* root = construct(arr,n);
    
//     inorderMorris(root);
//     return 0;

// }
