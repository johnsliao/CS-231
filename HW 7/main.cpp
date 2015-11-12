#include <iostream>
#include "list_header.h"
#include "node_header.h"
using namespace std;

int main() {
    
    node* aNode = nullptr;
    reversePrintingList aList;

    aNode = new templateNode<int>(3);
    aList.addItem(aNode);
    
    aNode = new templateNode<float>(7.5);
    aList.addItem(aNode);
    
    aNode = new templateNode<char>('a');
    aList.addItem(aNode);
    
    aNode = new templateNode<double>(3.1415);
    aList.addItem(aNode);

    
    aList.printList();

    return 0;
}
