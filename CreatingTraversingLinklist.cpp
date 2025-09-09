
#include<iostream>
using namespace std;

//Node structure
struct Node
{
    int data;
    Node* next;
};
int main(){
    //create 3 nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

//Asign data
head->data = 10;
head->next = second;

second->data = 20;
second->next = third;

third->data = 30;
third->next = NULL;  //end of list

//Traversing the linkedlist(Go through each node)
Node* temp = head;
cout<< "Linked list: ";
while(temp != NULL){
    cout<< temp->data << " -> ";
    temp = temp->next;
}
cout << "NULL "<< endl;

return 0;
}


