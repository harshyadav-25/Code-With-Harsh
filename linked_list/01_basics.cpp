#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }

};

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp= temp -> next;

    }
}

//size of ll
int size(Node* a){
    int c = 0;
    Node* temp = a;
    while(temp!= NULL){
        c++;
        temp = temp ->next;
    }

    return c;
    

}
//reverse the ll
void rev_ll(Node* head){
   if(head == NULL){
    return;
   }
   rev_ll(head->next);
   cout<<head->val<<endl;
        
        

}
    // head = temp;
    // head = head->next;
    // cout<<head->val;



int main(){
    //create new node

    Node* a = new Node(10);
    Node* b  = new Node(20);
    Node* c = new Node(30);
    Node* d= new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    // cout<<b.next->val;

    //for display 
    // Node* temp = a;
    // while(temp){
    //     cout<<temp->val<<endl;
    //     temp = temp->next;

    // }

    //using recursion 
    display(a);
    cout<<size(a)<<endl;
    rev_ll(a);



}