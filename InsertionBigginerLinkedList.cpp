
// Concept:

// Create a new node.

// Point the new node’s next to the current head.

// Make the new node the new head.

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void insertAtBeginninng(Node*& head, int newData){

    Node* newNode = new Node(); //create new node
    newNode->data = newData;  //assign data
    newNode->next = head; //link new node to old head
    head = newNode; // move head to new node

}
void printList(Node* head){
    while(head != NULL){
        cout<< head->data << "->";
        head = head->next;
    }
    cout<< "NULL" << endl;
}

int main(){

    Node* head =  NULL ; //start with empty list

    insertAtBeginninng(head, 30);
    insertAtBeginninng(head, 20);
    insertAtBeginninng(head, 10);

    cout<< "Linked list after inserttion at beginning: ";
    printList(head);

    return 0;
}