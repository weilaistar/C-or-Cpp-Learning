#include<iostream>
using namespace std;

class Person
{
public:
    int m_A;
    int m_B;

};

//只能利用全局函数重载左移运算符
ostream & operator<<(ostream &cout, Person &p)
{
    cout << "m_A = " << p.m_A << " " << "m_B = " << p.m_B;
    return cout;
}

void test01()
{
    Person p1;
    p1.m_A = 10;
    p1.m_B = 10;
    cout << p1 << endl;
}

int main() {
    test01();
    system("pause");
}