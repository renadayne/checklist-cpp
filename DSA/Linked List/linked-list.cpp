#ifndef LINKEDLIST_CPP
#define LINKEDLIST_CPP

#include "linked-list.hpp"

void LinkedList::addTail(int data) {
    Node* node = new Node(data); // Create new node

    // if list is empty, assign head = node
    if(head == NULL) {
        head = node; 
        return;
    }
    
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = node;
}

void LinkedList::printList() {
    Node* temp = head;
    
    if(head == NULL) {
        std::cout << "Empty List" << std::endl;
        return;
    }

    while(temp != NULL) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

void LinkedList::deleteHead() {
    if(head == NULL) {
        std::cout << "Empty List" << std::endl;
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

void LinkedList::deleteNode(int nodePosition) {
    if(head == NULL) {
        std::cout << "Empty List" << std::endl;
        return;
    }

    int count = 0;
    Node* temp = head, *prev = NULL;
    if(nodePosition < 1) {
        std::cout << "Invalid Position" << std::endl;
        return;
    }

    if(nodePosition == 1) {
        deleteHead();
        return;
    }

    while(count != nodePosition - 1) {
        prev = temp;
        temp = temp->next;
        count++;
    }

    prev->next = temp->next;
    delete temp;
}


#endif

