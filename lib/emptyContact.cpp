# include <iostream>
# include "emptyContact.h"
# include "addressbook.h"

using namespace std;

void emptyContact(addressbook *abs){
    abs->size = 0;
    cout << "Contact emptied" << endl;
}
