#include <iostream>
using namespace std;

class Person{
public:
    Person(){
        cout << "默认构造函数" << endl;
    };

    Person(int age, int h){
        m_age = age;
        m_h = new int(h);
        cout << "有参构造函数" << endl;
    }

/*    Person(Person &p){
        m_age = p.m_age;
        m_h = p.m_h;
        cout << "拷贝参构造函数" << endl;
    }
*/
    ~Person(){
        if(m_h == NULL){
            delete m_h;
            m_h = NULL;
        }
        cout << "析构函数" << endl;
    }
private:
    int m_age;
    int* m_h;

};

void test01(){
    Person p1(10, 180);
    Person p2(p1);
}

int main(){
    test01();
    return 0;
 }