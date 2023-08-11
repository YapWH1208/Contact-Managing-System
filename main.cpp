#include <iostream>
#include "addContact.h"
#include "viewContact.h"
#include "addressbook.h"
#include "deleteContact.h"
#include "searchContact.h"
#include "modifyContact.h"
using namespace std;

void showMenu(){
    cout << "*****************************" << endl;
    cout << "***** 1. Add contact    *****" << endl;
    cout << "***** 2. View contacts  *****" << endl;
    cout << "***** 3. Delete contact *****" << endl;
    cout << "***** 4. Search contact *****" << endl;
    cout << "***** 5. Modify contact *****" << endl;
    cout << "***** 6. Empty contact  *****" << endl;
    cout << "***** 0. Exit           *****" << endl;
    cout << "*****************************" << endl;
}

int main() {
    addressbook abs;
    abs.size = 0;

    int select;

    while(true){
        showMenu();
        cin >> select;

        switch (select) {
            case 1:
                addContact(&abs);
                break;
            case 2:
                viewContact(&abs);
                break;
            case 3:
                deleteContact(&abs);
                break;
            case 4:
                searchContact(&abs);
                break;
            case 5:
                modifyContact(&abs);
                break;
            case 6:
                //emptyContact();
                break;
            case 0:
                cout << "See you next time" << endl;
                system("Pause");
                return 0;
            default:
                break;
        }
    }

    system("Pause");
    return 0;
}
