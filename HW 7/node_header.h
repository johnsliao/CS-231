#include <iostream>
#pragma once

class node { //base node
protected:
    node* nextNode = nullptr;
public:
    node* getNextNode() {return nextNode;}
    void setNextNode(node* input) {nextNode = input;}
    virtual void getData() = 0;
};

template <class T>
class templateNode : public node {
private:
    T data;
public:
    templateNode(T input) {data = input;}
    void getData() {std::cout << data << std::endl;};
};