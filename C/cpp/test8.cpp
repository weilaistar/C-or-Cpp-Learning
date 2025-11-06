#include<iostream>
using namespace std;

class Person
{
public:
    Person() {
        cout << "Person的构造函数: " << endl;
    }
    ~Person() {

    }
    static int m_A;
private:
    static int m_B;
};

int Person::m_A = 100;
int Person::m_B = 10;

void test01() {
    Person p1;
    p1.m_A = 10;
    cout << "p1.m_A:" << p1.m_A << endl;
}

int main() {
    test01();
}
