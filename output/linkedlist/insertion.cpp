// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// class LinkedList{
//     public:
//     Node* head;
//     Node* tail;
//     int size;

//     LinkedList() {
//         head = NULL;
//         tail = NULL;
//         size=0;
        
//     }
//     void insertAtHead(int val){
//         Node *newNode=new Node(val);
//         if(head==NULL){
//         head=tail=newNode;
    
//         }else{

        
//         newNode->next=head;
//         head=newNode;
//         }
//         size++;  
//     }
//     void insertAtTail(int val){
//         Node* newNode=new Node(val);
//         if(head==NULL){
//             head=tail=newNode;
            
//         }else{
//         tail->next=newNode;
//         tail=newNode;
//         }
//         size++;
//     }
//     void insertAtIdx(int val,int idx){
      
//         if(idx<0|| idx > size){
//             cout<<"Invalid Idx";
//             return;
//         }
//           if (idx == 0) {
//             insertAtHead(val);
//             return;
//         }
//          if (idx == size) {
//             insertAtTail(val);
//             return;
//         }
//         Node* newNode=new Node(val);
//         Node* temp=head;

//         for(int i=1;i<idx;i++){
//             temp=temp->next;
//         }
//         newNode->next = temp->next;
//         temp->next = newNode;
//         size++;
//     }
//     void display(){
//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;

//         }

//     }




// };
// int main() {
//     LinkedList ll;
//     ll.insertAtHead(1);
//     ll.insertAtHead(2);
//     ll.insertAtHead(3);
//     ll.insertAtTail(5);
//     ll.insertAtIdx(7,3);

//     ll.display();
//     return 0;
// }