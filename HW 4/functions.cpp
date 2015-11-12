#include "list_header.h"
#include "node_header.h"

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

int list::getLargestValue() {
    int largest = 0;
    
    node* tempNode = top;
    
    while (tempNode->getNextNode() != nullptr){
        tempNode = tempNode->getNextNode();
        if (tempNode->getData() > largest)
            largest = tempNode->getData();
    }
    
    return largest;
}