#pragma once

class node {
private:
    int data;
    node* nextNode = nullptr;
public:
    node(int input) {data = input;}
    node* getNextNode() {return nextNode;}
    void setNextNode(node* input) {nextNode = input;}
    int getData() {return data;}
};