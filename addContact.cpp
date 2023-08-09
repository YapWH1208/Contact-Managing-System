# include "addContact.h"
# include "person.h"
# include "addressbook.h"
using namespace std;

void addContact(addressbook *abs){
    if(abs->size == MAX){
        cout << "Contact FULL!" << endl;
        return;
    }
    else{
        // Name
        string name;
        cout << "Enter name: " << endl;
        cin >> name;
        abs->personArray[abs->size].name = name;

        // Sex
        cout << "0 - Female" << endl;
        cout << "1 - Male" << endl;
        cout << "Enter sex: " << endl;
        int sex;
        while(true){
            cin >> sex;
            if(sex == 0 || sex == 1){
                abs->personArray[abs->size].sex = sex;
                break;
            }
            cout << "Wrong Value" << endl;
        }

        // Age
        cout << "Enter age: " << endl;
        int age;
        cin >> age;
        abs->personArray[abs->size].age = age;

        // Phone Number
        cout << "Enter Phone Number: " << endl;
        int phoneNumber;
        cin >> phoneNumber;
        abs->personArray[abs->size].phone_num = to_string(phoneNumber);

        // Address
        cout << "Enter Address: " << endl;
        int address;
        cin >> address;
        abs->personArray[abs->size].address = to_string(address);

        // Update contact list size
        abs->size++;

        cout << "Added" << endl;
        system("Pause");
        system("cls");
    }
}