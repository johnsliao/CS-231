#include <iostream>
#include "list_header.h"
#include "node_header.h"
using namespace std;

void list::addItem(node* node_address) {
    if (top == nullptr)
        top = node_address;
    
    else {
        node* tempNode = top;
        
        while (tempNode->getNextNode() != nullptr){
            tempNode = tempNode->getNextNode();
        }
        
        tempNode->setNextNode(node_address);
    }
}

void list::printList() {
    node* tempNode = top;
    
    while (tempNode->getNextNode() != nullptr){
        tempNode -> getData();
        tempNode = tempNode->getNextNode();
    }
    
    tempNode -> getData(); // print last value
}

void intNode::getData() {
    cout << data << endl;
}

void charNode::getData() {
    cout << data << endl;
}

void reversePrintingList::startReversePrint() {
    reversePrint(top);
}

int reversePrintingList::reversePrint(node* node_address) {
    if(node_address->getNextNode() == nullptr) {
        node_address->getData();
        return 0;
    }
    
    reversePrint(node_address->getNextNode());
    node_address->getData();
    return 0;
}