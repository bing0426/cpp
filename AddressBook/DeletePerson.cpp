//
// Created by 22970 on 24-9-23.
//

#include "DeletePerson.h"
void DeletePerson(AddressBook* abs) {
    string name;
    cout << "请输入需删除联系人姓名：" << endl;
    cin >> name;
    int result = Isexist(abs, name);
    if(result == -1)
        cout << "没有该联系人,无法删除" << endl;
    else {
        for(int i = result; i < abs->m_num; ++i) {
            abs->arr[i] = abs->arr[i+1];
        }
        cout << "操作成功！" << endl;
        abs->m_num--;
    }
}