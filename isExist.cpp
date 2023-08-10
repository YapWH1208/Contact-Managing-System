#include "addressbook.h"
#include "isExist.h"

using namespace std;

int isExist(addressbook *abs, string name){
    for(int i=0; i<abs->size; i++){
        if(abs->personArray[i].name == name){
            return i;
        }
    }
    return -1;
}