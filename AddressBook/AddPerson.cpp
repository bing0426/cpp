//
// Created by 22970 on 24-9-22.
//

#include "AddPerson.h"
void AddPerson(AddressBook* abs) {
    string s_temp;
    cout << "请输入姓名：" << endl;
    cin >> s_temp;
    abs->arr[abs->m_num].m_name = s_temp;

    int i_temp;
    cout << "请输入性别 1 代表男 2 代表女:" << endl;
    while (true) {
        cin >> i_temp;
        if(i_temp == 1 || i_temp == 2) {
            abs->arr[abs->m_num].m_sex = i_temp;
            break;
        }
        else
            cout << "输入有误，请重新输入！" << endl;
    }

    cout << "请输入年纪：" << endl;
    cin >> i_temp;
    abs->arr[abs->m_num].m_age = i_temp;

    cout << "请输入号码：" << endl;
    cin >> s_temp;
    abs->arr[abs->m_num].m_tel= s_temp;

    cout << "请输入地址：" << endl;
    cin >> s_temp;
    abs->arr[abs->m_num].m_address= s_temp;

    ++abs->m_num;//更改坐标
}


