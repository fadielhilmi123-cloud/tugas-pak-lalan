#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node* insertBelakang(Node *head, int nilai){
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;

    if(head == NULL){
        return baru;
    }

    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = baru;
    return head;
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

    cout << "Masukkan jumlah data: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        cout << "Masukkan data ke " << i << ": ";
        cin >> data;
        head = insertBelakang(head, data);
    }

    cout << "\nMasukkan data yang ditambahkan di akhir: ";
    cin >> tambah;
    head = insertBelakang(head, tambah);
    cout << "\nData setelah ditambah di akhir:" << endl;
    traverse(head);

    return 0;
}
