
#ifndef HUMAH_H
#define HUMAH_H

#include <string>
#include <iostream>
using namespace std;

struct Human {
    char name[20];
    int age;
};

inline void inp(Human& p) {
    cout << "name: ";
    cin >> p.name;
    cout << "age: ";
    cin >> p.age;
}

#endif
