#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node* insertDepan(Node *head, int nilai);
void traverse(Node *temp); 

int main(){
    
    Node *node1 = NULL;
    Node *node2 = NULL;
    Node *node3 = NULL;
    Node *node4 = NULL;
    Node *node5 = NULL;
    
    node1 = new Node;
    node2 = new Node;
    node3 = new Node;
    node4 = new Node;
    node5 = new Node;
    
    node1->data = 10;
    node1->next = node2;
    
    node2->data = 20;
    node2->next = node3;
    
    node3->data = 30;
    node3->next = node4;
    
    node4->data = 40;
    node4->next = node5;
    
    node5->data = 50;
    node5->next = NULL;

    cout << "data linked list : " << endl;

    node1 = insertDepan(node1, 5);

    traverse(node1);

    cin.get();
    return 0;
}

Node* insertDepan(Node *head, int nilai){
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = head;
    return baru; 
}

void traverse(Node *temp){
    int i = 1;
    int total = 0;

    while (temp != NULL){
        cout << "Data ke " << i << ": " << temp->data << endl;
        total += temp->data;
        temp = temp->next;
        i++;
    }

    cout << "Total data adalah: " << total << endl;
}
