# include "modifyContact.h"
# include "addressbook.h"
# include "isExist.h"
# include <iostream>

using namespace std;

void modifyMenu(){
    cout << "1. Name" << endl;
    cout << "2. Sex" << endl;
    cout << "3. Age" << endl;
    cout << "4. Phone Number" << endl;
    cout << "5. Address" << endl;
}

void modifyContact(addressbook *abs){
    string name;
    cout << "Enter Name: " << endl;
    cin >> name;

    int ret = isExist(abs, name);
    if(ret != -1){
        int choice;

        while(true){
            modifyMenu();
            cin >> choice;

            switch (choice) {
                case 1:
                    char new_name[100];
                    cout << "Enter new name: " << endl;
                    cin >> new_name;
                    abs->personArray[ret].name = new_name;
                    break;
                case 2:
                    int sex;
                    cout << "Enter new sex: " << endl;
                    cout << "0 - Female" << endl;
                    cout << "1 - Male" << endl;
                    cin >> sex;
                    abs->personArray[ret].sex = sex;
                    break;
                case 3:
                    int age;
                    cout << "Enter new age: " << endl;
                    cin >> age;
                    abs->personArray[ret].age = age;
                    break;
                case 4:
                    int phone_num;
                    cout << "Enter new phone number: " << endl;
                    cin >> phone_num;
                    abs->personArray[ret].phone_num = to_string(phone_num);
                    break;
                case 5:
                    char address[1000];
                    cout << "Enter new address: " << endl;
                    cin >> address;
                    abs->personArray[ret].address = address;
                    break;
                default:
                    cout << "Wrong Selection" << endl;
                    break;
            }
            break;
        }
    }
    else{
        cout << "Name not found" << endl;
    }
}

