#include <iostream>
#include "linked-list.hpp"
/*
Source: https://topdev.vn/blog/danh-sach-lien-ket-don-trong-c/
*/


int main() {
    LinkedList list;
    CreateList(list); // assign head and tail = NULL

    Node* node;
    for(auto i = 0; i < 10; i++) {
        node = createNode(i + 1);

        // addHead(list, node);
        addTail(list, node);
    }
    node = createNode(15);
    addHead(list, node);

    printList(list);
}






