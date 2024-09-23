//
// Created by 22970 on 24-9-23.
//

#include "Isexist.h"
int Isexist(AddressBook* abs, string name) {
    for(int i = 0; i < abs->m_num; ++i) {
        if(abs->arr[i].m_name == name) {
            return  i;
        }
    }
    return -1;
}
