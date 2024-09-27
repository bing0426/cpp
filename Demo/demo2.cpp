#include <iostream>
using namespace std;

class Person {
public:
    Person& persionAgeAdd(int age){
        m_age += age;
        return *this;
    }
    int m_age;
};

void test(){
    Person p;
    p.m_age = 10;
    p.persionAgeAdd(10).persionAgeAdd(10).persionAgeAdd(10);
    cout << p.m_age <<endl;
}

int main(){
    test();
    return 0;
}