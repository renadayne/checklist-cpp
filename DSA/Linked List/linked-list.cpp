#ifndef LINKEDLIST_CPP
#define LINKEDLIST_CPP

#include "linked-list.hpp"

void LinkedList::addHead(int data) {
    Node* node = new Node(data);

    if(head == NULL) {
        head = node;
        return;
    }

    node->next = head;
    head = node;
}

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

void LinkedList::insertNode(int data, int nodePosition) {
    Node* node = new Node(data);
    Node* temp = head, * prev = NULL;
    int count = 0;

    if(nodePosition == 1) {
        node->next = head;
        head = node;
        return;
    }

    while(count != nodePosition - 1) {
        if(count < nodePosition && temp == NULL) {
            std::cout << "Node not exist in list" << std::endl;
            return;
        }
        count++;
        prev = temp;
        temp = temp->next;
    }

    node->next = temp;
    prev->next = node;
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


void LinkedList::deleteTail() {
    if(head == NULL) {
        std::cout << "Empty List" << std::endl;
        return;
    }

    Node* temp = head, * prev = NULL;
    while(temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
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
        if(count < nodePosition - 1 && temp == NULL) {
            std::cout << "Node not exist in list" << std::endl;
            return;
        }
        prev = temp;
        temp = temp->next;
        count++;
    }

    prev->next = temp->next;
    delete temp;
}

void LinkedList::clearList() {
    while(head != NULL) {
        deleteHead();
    }
}

int LinkedList::getListLength() {
    Node* temp = head;
    int count = 0;
    if(head == NULL) {
        return count;
    }

    while(temp != NULL) {
        count++;
        temp = temp->next;
    }

    return count;
}

void LinkedList::getNodeValue(int nodePosition) {
    if(head == NULL) {
        std::cout << "Empty List" << std::endl;
        return;
    }

    int count = 0;
    Node* temp = head;
    while(count != nodePosition - 1) {
        if(temp == NULL && count < nodePosition - 1) {
            std::cout << "Node not exist in list" << std::endl;
            return;
        }
        temp = temp->next;
        count++;
    }
    if(count == nodePosition - 1 && temp != NULL) {
        std::cout << temp->data << std::endl;
        return;
        }
}


#endif

