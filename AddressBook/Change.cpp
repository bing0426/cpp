//
// Created by 22970 on 24-9-23.
//

#include "Change.h"
void Change(AddressBook* abs) {
    string name;
    cout << "请输入需要修改的联系人姓名：" <<endl;
    cin >> name;
    int resulte = Isexist(abs, name);
    if(resulte == -1)
        cout << "没有该联系人,无法修改" << endl;
    else {
        string s_temp;
        cout << "请输入姓名：" << endl;
        cin >> s_temp;
        abs->arr[resulte].m_name = s_temp;

        int i_temp;
        cout << "请输入性别 1 代表男 2 代表女:" << endl;
        while (true) {
            cin >> i_temp;
            if(i_temp == 1 || i_temp == 2) {
                abs->arr[resulte].m_sex = i_temp;
                break;
            }
            else
                cout << "输入有误，请重新输入！" << endl;
        }

        cout << "请输入年纪：" << endl;
        cin >> i_temp;
        abs->arr[resulte].m_age = i_temp;

        cout << "请输入号码：" << endl;
        cin >> s_temp;
        abs->arr[resulte].m_tel= s_temp;

        cout << "请输入地址：" << endl;
        cin >> s_temp;
        abs->arr[resulte].m_address= s_temp;
    }
}