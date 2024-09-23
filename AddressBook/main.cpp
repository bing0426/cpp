#include <iostream>
#include <cstdlib>
#include "PrintMenu.h"
#include "AddPerson.h"
#include "Change.h"
#include "DeleteAll.h"
#include "DeletePerson.h"
#include "Find.h"
#include "PrintPerson.h"
#include "Struct.h"
using namespace std;

int main() {
    AddressBook abs;
    PrintMenu();
    while (true) {
        int order;
        cin >> order;
        switch (order) {
            case 1 ://添加联系人
                AddPerson(&abs);
                break;
            case 2 ://显示联系人
                PrintPerson(&abs);
                break;
            case 3 ://删除联系人
                DeletePerson(&abs);
                break;
            case 4 ://查找联系人
                Find(&abs);
                break;
            case 5 ://修改联系人
                Change(&abs);
                break;
            case 6 ://清空联系人
                DeleteAll(&abs);
                break;
            case 0 :
                cout << "欢迎下次再用 ！" << endl;
                system("pause");
                return 0;
            default: cout << "输入有误，请重新输入 ！" << endl;
        }
        PrintMenu();
    }
}

