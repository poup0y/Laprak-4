#include <iostream>
#include "singlylist.h"

using namespace std;

void createList(List &L) {
    L.first = Nil;
}

address alokasi(infotype x) {
    address p = new elmList;
    p->info = x;
    p->next = Nil;
    return p;
}

void dealokasi(address p) {
    delete p;
}

void insertFirst(List &L, address p) {
    if (L.first == Nil) {
        L.first = p;
    } else {
        p->next = L.first;
        L.first = p;
    }
}

void printInfo(List L) {
    address p = L.first;

    while (p != Nil) {
        cout << p->info << " ";
        p = p->next;
    }

    cout << endl;
}