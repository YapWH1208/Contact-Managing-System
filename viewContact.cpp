#include "viewContact.h"
#include "addressbook.h"
using namespace std;

void viewContact(addressbook *abs){
    if(abs->size == 0){
        cout << "Nothing here" <<endl;
    }
    else{
        for(int i=0; i<abs->size; i++){
            cout << "Name: " << abs->personArray[i].name << endl;
            cout << "Sex: " << abs->personArray[i].sex << endl;
            cout << "Age: " << abs->personArray[i].age << endl;
            cout << "Phone Number: " << abs->personArray[i].phone_num << endl;
            cout << "Address" << abs->personArray[i].address << endl;
        }
    }

    system("Pause");
    system("cls");
}