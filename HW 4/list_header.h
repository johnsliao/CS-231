#pragma once
#include "node_header.h"

class list {
    node* top;
public:
    void addItem(node* node_address);
    int getLargestValue();
};
