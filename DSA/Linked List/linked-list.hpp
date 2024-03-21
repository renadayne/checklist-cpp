#ifndef linkedlist_hpp
#define linkedlist_hpp

struct Node {
    int data;
    Node* next;
};

struct LinkedList {
    Node* head;
    Node* tail;
};

Node* createNode(int init_data);
void CreateList(LinkedList& l);
void addHead(LinkedList& l, Node* node);
void addTail(LinkedList& l, Node* node);
void insertAfterQ(LinkedList &l, Node* p, Node* q);
int removeHead(LinkedList&l, int& x);
int removeAfterQ(LinkedList& l, Node* q, int& x);
Node* GetNode(LinkedList& l, int index);
void printList(LinkedList l);
int DestroyList(LinkedList& l, int& x);
#include "linked-list.cpp"
#endif