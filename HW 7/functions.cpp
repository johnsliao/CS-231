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

void reversePrintingList::startReversePrint() {
    reversePrint(top);
}

int reversePrintingList::reversePrint(node* node_address) {
    if(node_address->getNextNode() == nullptr) {
        cout << "HIT BOTTOM. Deleting...";
        node_address->getData();
        delete node_address;
        return 0;
    }
    
    reversePrint(node_address->getNextNode());
    
    cout << "Deleting...";
    node_address->getData();
    delete node_address;
    return 0;
}

reversePrintingList::~reversePrintingList() {
    cout << "destructor started" << endl;
    reversePrint(top);
}