#include <iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
};

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
	
	node1->data = 12;
	node1->next = node2;
	node1->prev = node5;
	
	node2->data = 23;
	node2->next = node3;
	node2->prev = node1;
	
	node3->data = 43;
	node3->next = node4;
	node3->prev =node2;
	
	node4->data = 47;
	node4->next = node5;
	node4->prev=node3;
	
	node5->data = 50;
	node5->next = node1;
	node5->prev = node4;
	
	Node *nodeSekarang = node1;
	
	do {
	    cout << nodeSekarang->data << " -> ";
	    nodeSekarang = nodeSekarang->next;
	} while (nodeSekarang != node1);
	nodeSekarang = node1->prev;
	do {
	    cout << nodeSekarang->data << " -> ";
	    nodeSekarang = nodeSekarang->prev;
	} while (nodeSekarang != node1->prev);
	cout << "(kembali ke awal)" << endl;
	
	return 0;
}
