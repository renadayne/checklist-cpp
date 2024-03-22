#include <iostream>
#include "struct-linked-list.hpp"

Node* createNode(int init_data)  {
    Node* node = new Node;
    node->data = init_data;
    node->next = NULL;
    return node;
}

void CreateList(LinkedList& l) {
    l.head = NULL;
    l.tail = NULL;
}

void addHead(LinkedList& l, Node* node) {
    if(l.head == NULL) {
        l.head = node;
        l.tail = node;
    }
    else {
        node->next = l.head;
        l.head = node;
    }
}

void addTail(LinkedList& l, Node* node) {
    if(l.head == NULL) {
        l.head = node;
        l.tail = node;
    }
    else {
        l.tail->next = node;
        l.tail = node;
    }
}


void insertAfterQ(LinkedList &l, Node* p, Node* q) {
    if(q != NULL) {
        p->next = q->next;
        q->next = p;
        if(q == l.tail) l.tail = p;
    }
    else addHead(l, p);
}

int removeHead(LinkedList& l, int& x) {
    if(l.head != NULL) {
        Node* node = l.head;
        x = node->data;
        l.head = node->next;
        delete node;
        if(l.head == NULL) l.tail = NULL;
        return 1;
    }
    return 0;
}

int removeAfterQ(LinkedList& l, Node* q, int& x) {
    if(q != NULL) {
        Node* p = q->next;
        if(p != NULL) {
            if(l.tail == p) l.tail = q;
            q->next = p->next;
            x = p->data;
            delete p;
            return 1;
        }
        return 0;
    }
    return 0;
}

Node* GetNode(LinkedList& l, int index) {
    Node* node = l.head;
    int i = 0;
    while(node != NULL && i != index) {
        node = node->next;
        i++;
    } 
    if(node != NULL && i == index) return node;
    return NULL;
}

int Length(LinkedList l) {
    int count = 0;
    Node* node = l.head;
    while(node != NULL) {
        count++;
        node = node->next;
    }
    return count;
}

void DestroyList(LinkedList& l) {
    int x;
    Node* node = l.head;
    while(node != NULL) {
        removeHead(l, x);
        node = l.head;
    }
    l.tail = NULL;
}

void printList(LinkedList l) {
    if(l.head != NULL) {
        Node* node = l.head;
        while(node != NULL) {
            std::cout << node->data << " ";
            node = node->next;
        }
        std::cout << std::endl;
    }
}


