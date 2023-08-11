#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H
#define MAX 1000

# include "person.h"
using namespace std;

struct addressbook{
    struct person personArray[MAX];
    int size;
};

#endif // ADDRESSBOOK_H