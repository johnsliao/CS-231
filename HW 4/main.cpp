#include <iostream>
#include "list_header.h"
#include "node_header.h"
using namespace std;

int main() {
    int input = 0;
    node* aNode = nullptr;
    list aList;

    for (int x = 1; x <= 5; x++) {
        cout << "Input #"<< x <<": ";
        cin >> input;
        aNode = new node(input);
        aList.addItem(aNode);
    }

    cout << "largest " << aList.getLargestValue() << endl;
    return 0;
    
}
