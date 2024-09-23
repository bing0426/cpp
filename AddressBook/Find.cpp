//
// Created by 22970 on 24-9-23.
//

#include "Find.h"
void Find(AddressBook* abs) {
    string name;
    cout << "请输入查找联系人姓名：" << endl;
    cin >> name;
    int reslute =  Isexist(abs, name);
    if(reslute == -1)
        cout << "没查询到该联系人" << endl;
    else {
        std::cout <<"姓名："<< abs->arr[reslute].m_name <<"\t";
        if(abs->arr[reslute].m_sex == 1)
            std::cout <<"性别：男" <<"\t";
        else
            std::cout <<"性别：女" <<"\t";
        std::cout <<"年龄："<< abs->arr[reslute].m_age <<"\t";
        std::cout <<"电话："<< abs->arr[reslute].m_tel <<"\t";
        std::cout <<"地址："<< abs->arr[reslute].m_address <<endl;
    }
}