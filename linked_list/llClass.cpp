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
class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size == 0){
            head = tail = temp;
        }
        else{
            tail -> next = temp;
            tail = temp;
            
        }
        size++;
    }
    void insertAtBegin(int val){
        Node* temp = new Node(val);
        if(size == 0){
            head = tail = temp;
        }
        else{
            temp -> next = head;
            head = temp;
        }
        size++;


    }
    void deleteAtEnd(){
        if(head == NULL) return;
        if(head == tail){
            cout<<"only one node present and deleted";
            head = tail = NULL;
        }

        Node* temp = head;

        while(temp ->next->next != NULL){
            temp = temp ->next;

        }
        tail = temp;
        tail -> next = NULL;
        size--;
    }
    void deleteAtBegin(){
        Node* temp = head;
        if(head == NULL) return;
        if(head == tail){
            cout<<"only one node present and deleted";
            head = tail = NULL;
            return;
        }
        
        temp = temp ->next;
        head = temp;
        size--;


    }
    void insertAtIdx(int val, int idx){
        Node* add = new Node(val);
        Node* temp = head;
        if(size == 0) head = tail = add;
        if(idx == 0){
            insertAtBegin(val);
            return;
        }
        if(idx == size){
            insertAtEnd(val);
            return;
        }
        for(int i = 1; i <idx - 1; i++){
            temp = temp -> next;
        }
        add->next = temp->next;
        temp->next = add;
        size++;
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp -> val<<" ";
            temp = temp ->next;

        }
        cout<<endl;
    }
};


int main(){
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtBegin(50);
    ll.insertAtIdx(40,3);
    // ll.deleteAtBegin();
    // ll.deleteAtEnd();
    ll.display();
    return 0;

}