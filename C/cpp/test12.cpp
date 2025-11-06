#include<iostream>
using namespace std;

class MyInteger
{
    friend ostream & operator<<(ostream &cout, const MyInteger &myint);

public:
    MyInteger() {
        m_Num = 0;
    }

    //重置前置++运算符  返回引用为了一直对一个数据进行递增操作
    MyInteger& operator++() {
        m_Num++;
        return *this;
    }
    //重置后置++运算符  int为占位参数 用于区分前置与后置
    MyInteger operator++(int) {
        //先记录当前结果
        MyInteger temp = *this;
        m_Num++;
        return temp;
    }

private:
    int m_Num;
};

//只能利用全局函数重载左移运算符    
ostream & operator<<(ostream &cout, const MyInteger &myint)
{
    cout << myint.m_Num;
    return cout;
}

void test01()
{
    MyInteger myint;
    cout << ++(++myint) << endl;
    cout << myint << endl;
}

void test02()
{
    MyInteger myint;
    cout << myint++ << endl;
    cout << myint << endl;
}

int main() {
    test01();
    test02();
    system("pause");
}