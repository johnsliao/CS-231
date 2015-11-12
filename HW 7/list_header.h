#pragma once
#include "node_header.h"

class list {
protected:
    node* top;
public:
    void addItem(node* node_address);
    void printList();
};

class reversePrintingList : public list {
private:
    int reversePrint(node* node_address);
public:
    void startReversePrint();
    ~reversePrintingList();
    
};