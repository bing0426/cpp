//
// Created by 22970 on 24-9-23.
//

#include "PrintPerson.h"
void PrintPerson( AddressBook* abs) {
    if(abs->m_num == 0) {
        cout << "无数据" << endl;
        return;
    }
    for(int i = 0; i < abs->m_num; ++i) {
        std::cout <<"姓名："<< abs->arr[i].m_name <<"\t";
        if(abs->arr[i].m_sex == 1)
            std::cout <<"性别：男" <<"\t";
        else
            std::cout <<"性别：女" <<"\t";
        std::cout <<"年龄："<< abs->arr[i].m_age <<"\t";
        std::cout <<"电话："<< abs->arr[i].m_tel <<"\t";
        std::cout <<"地址："<< abs->arr[i].m_address <<endl;
    }
}