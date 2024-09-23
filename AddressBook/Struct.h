//
// Created by 22970 on 24-9-23.
//
#ifndef STRUCT_H
#define STRUCT_H
#include <string>
#include <iostream>
using namespace std;
#define MAX 100
struct Person {
    string m_name;
    int m_sex;//1:男 2：女
    int m_age;
    string m_tel;
    string m_address;
};

struct  AddressBook {
    Person arr[MAX];
    int m_num = 0;
};
#endif //STRUCT_H
