#pragma once

class node { //base node
protected:
    node* nextNode = nullptr;
public:
    node* getNextNode() {return nextNode;}
    void setNextNode(node* input) {nextNode = input;}
    virtual void getData() = 0;
};

class charNode : public node {
private:
    char data;
public:
    charNode(char input) {data = input;}
    void getData();
};

class intNode : public node {
private:
    int data;
public:
    intNode(int input) {data = input;}
    void getData();
};