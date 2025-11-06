#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
    Person(string name, int age) {
        m_Name = name;
        m_Age = age;
    }

    //重载函数调用()
    void operator()(Person &p){
        cout << p.m_Name << endl;
    }


    string m_Name;
    int m_Age;
};

void test01()
{
    Person p1("Alan", 18);
    Person p2("Tom", 18);
    p1(p1);
    p1(p2);
}

int main() {
    test01();
    system("pause");
}