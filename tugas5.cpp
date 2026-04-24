#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node* insertDepan(Node *head, int nilai){
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = head;
    return baru;
}

void traverse(Node *temp){
    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    int n, data, tambah;
    Node *head = NULL;
    Node *tail = NULL;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        cout << "Masukkan data ke " << i << ": ";
        cin >> data;
        Node *baru = new Node;
        baru->data = data;
        baru->next = NULL;
        if(head == NULL){
            head = tail = baru;
        } else {
            tail->next = baru;
            tail = baru;
        }
    }

    cout << "\nMasukkan data yang ditambahkan di awal: ";
    cin >> tambah;
    head = insertDepan(head, tambah);
    cout << "\nData setelah ditambah di awal:" << endl;
    traverse(head);

    return 0;
}
