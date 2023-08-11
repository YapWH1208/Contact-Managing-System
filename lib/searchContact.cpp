# include <iostream>
# include "searchContact.h"
# include "addressbook.h"
# include "isExist.h"

using namespace std;

void searchContact(addressbook *abs){
    cout << "Enter name: " << endl;
    string name;
    cin >> name;

    int ret = isExist(abs, name);
    if(ret != -1){
        cout << "Name: " << abs->personArray[ret].name << endl;
        cout << "Sex: " << abs->personArray[ret].sex << endl;
        cout << "Age: " << abs->personArray[ret].age << endl;
        cout << "Phone Number: " << abs->personArray[ret].phone_num << endl;
        cout << "Address: " << abs->personArray[ret].address << endl;
    }
    else{
        cout << "Name not found" << endl;
    }
}