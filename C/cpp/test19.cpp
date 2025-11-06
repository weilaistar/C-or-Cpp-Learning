#include<iostream>
using namespace std;

class Abstract
{
public:
    virtual void func() = 0;
};

class Son: public Abstract
{
public:
    void func() {
        cout << "hello" << endl;
    }
};

void test01() 
{
    Abstract* test = new Son;
    test->func();
    delete test;
}

int main() {
    test01();
    system("pause");
}