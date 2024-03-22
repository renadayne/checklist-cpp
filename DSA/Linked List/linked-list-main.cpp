#include <iostream>
#include "linked-list.hpp"


int main() {
    LinkedList list;
    list.addTail(5);
    list.addTail(4);
    list.addTail(6);
    list.printList();

    list.deleteNode(1);
    list.printList();

    return 0;
}
