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

    public:
        LinkedList() {
            head = NULL;
        }

        void addHead(int);
        void addTail(int);
        void insertNode(int, int);
        void printList();
        void deleteHead();
        void deleteTail();
        void deleteNode(int);
        void clearList(); 
        int getListLength();
        void getNodeValue(int);
};

#include "linked-list.cpp"
#endif



