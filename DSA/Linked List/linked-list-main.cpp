#include <iostream>
#include "linked-list.hpp"


int main() {
    LinkedList list;
    list.addTail(5);
    list.addTail(4);
    list.addTail(6);
    list.printList();
    std::cout << list.getListLength() << std::endl;
    std::cout << "------------------------------------" << std::endl;

    list.addHead(3);
    list.printList();
    std::cout << "------------------------------------" << std::endl;

    list.insertNode(7, 1);
    list.printList();
    std::cout << "------------------------------------" << std::endl;

    list.deleteNode(1);
    list.printList();
    std::cout << list.getListLength() << std::endl;
    std::cout << "------------------------------------" << std::endl;

    list.deleteNode(10);
    list.printList();
    std::cout << list.getListLength() << std::endl;
    std::cout << "------------------------------------" << std::endl;

    list.deleteTail();
    list.printList();
    std::cout << list.getListLength() << std::endl;
    std::cout << "------------------------------------" << std::endl;

    list.getNodeValue(5);
    list.printList();
    std::cout << "------------------------------------" << std::endl;

    list.clearList();
    std::cout << list.getListLength() << std::endl;
    std::cout << "------------------------------------" << std::endl;

    return 0;
}
