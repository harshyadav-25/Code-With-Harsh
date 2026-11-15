#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }


};
class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }size++;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;

        }
        cout<<endl;
    }
    void insertAtTail(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp=tail;

        }size++;
    }
    void insertAtIdx(int val,int idx){
        if(idx<0 || idx>size){
            cout<<"invalid";
            return;
        }if(idx==0) {
            insertAtHead(val);
            return;
        }
        else if(idx==size){
            insertAtTail(val);
            return;
        } 
            
        else{
            Node* newNode= new Node(val);
            Node* temp=head;
            for(int i=1;i<idx-1;i++){
                temp=temp->next;
            }newNode->next=temp->next;
            temp->next=newNode;
            size++;

        }
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"empty";
            return;
        }head=head->next;
        size--;
    }
    void deleteAtail(){
        if(size==0){
            cout<<"empty";
            return ;
        }
        Node* temp=head;
        while(temp->next==tail){
            temp=temp->next;
        }
        tail=temp;
        temp->next=NULL;
        size--;

        // Node* temp=head;
        // for(int i=1;i<size-1;i++){
        //     temp=temp->next;
        // }tail=temp;
        // tail->next=NULL;
        // size--;

    }
    void deleteAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"invalid";
            return;
        }
        else if(idx==0) return deleteAtHead();
        else if(idx==size-1) return deleteAtail();
        else{
            Node* temp=head;

            for(int i=1;i<idx-1;i++){
                temp=temp->next;
            }
        temp->next=temp->next->next;
        size--;
        }
    }
};

int main(){
    LinkedList ll;
    ll.insertAtHead(20); //20
    ll.display();
    ll.insertAtHead(10);//10->20
    ll.display();
    ll.insertAtTail(30);//10->20->30
    ll.display();
    ll.insertAtIdx(50,2);
    ll.display();
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtail();
    ll.display();
    ll.insertAtHead(10);//10->20
    ll.display();
    ll.insertAtTail(30);//10->20->30
    ll.display();
    ll.deleteAtIdx(2);
    ll.display();
    // ll.deleteAtail();
    // ll.display();
    // ll.deleteAtail();
    // ll.display();


    return 0;

}