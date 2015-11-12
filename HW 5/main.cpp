#include <iostream>
#include "list_header.h"
#include "node_header.h"
using namespace std;

int main() {
    int intInput = 0;
    char charInput;
    char usrInput;
    
    node* aNode = nullptr;
    
    reversePrintingList aList;

    for (int x = 0; x < 5; x++) {
        
        cout << "Char ('c') or int ('i')? ";
        cin >> usrInput;
        
        switch (usrInput) {
            case 'i':
                cout << "Enter #: ";
                cin >> intInput;
                
                aNode = new intNode(intInput);
                aList.addItem(aNode);
                
                break;
            case 'c':
                cout << "Enter char: ";
                cin >> charInput;
                
                aNode = new charNode(charInput);
                aList.addItem(aNode);
                
                break;
            default:
                cout << "invalid input";
                break;
        }
    }
    //aList.printList();
    aList.startReversePrint();
    
    return 0;
}
