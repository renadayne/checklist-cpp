#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include <iostream>

class Node {
    public:
        int data;
        Node* next;

        Node() {
            data = 0;
            next = NULL;
        }

        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
};

class LinkedList {
    Node* head;
    Node* tail;

    public:
        LinkedList() {
            head = NULL;
        }

        void addTail(int);
        void printList();
        void deleteHead();
        void deleteNode(int); 
};

#include "linked-list.cpp"
#endif



