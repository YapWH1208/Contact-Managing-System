# include "deleteContact.h"
# include "addressbook.h"

using namespace std;

int isExist(addressbook *abs, string name){
    for(int i=0; i<abs->size; i++){
        if(abs->personArray[i].name == name){
            return i;
        }
    }
    return -1;
}

void deleteContact(addressbook *abs){
    cout << "Enter name to delete: " << endl;
    string name;
    cin >> name;

    int ret = isExist(abs, name);
    if(ret != -1){
        for(int i=0; i<abs->size; i++){
            abs->personArray[i] = abs-> personArray[i+1];
        }
        abs->size--;
        cout << "Deleted" << endl;
    }
    else{
        cout << "Name not found" << endl;
    }
    system("Pause");
    system("cls");
}
