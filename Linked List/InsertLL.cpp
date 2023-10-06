#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //Constor me data daal diya
    Node(){
        this->data=0;
        this->next=NULL; 
    }
     
    //constor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(Node* head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data << " ";
        temp=temp->next;
    }
 }
 

// I want to insert a node rifht at the head of LL 
void insertAHead(Node* &head, int data){
    //step 1:
    Node* newNode = new Node(data);
    //step1:
    newNode-> next = head;
    //step 3:
    head=newNode;

}
int main(){
    Node* head = new Node(10);
    insertAHead(head,20);
    insertAHead(head,50);
    insertAHead(head,60);
    insertAHead(head,90);

    print(head);
    return 0;
}