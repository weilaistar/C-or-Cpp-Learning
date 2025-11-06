#include<iostream>
using namespace std;

class AbstractCalculate {
public:
    virtual int Calculator() {

    }
    int m_Num1;
    int m_Num2;
};

class addCalculate: public AbstractCalculate {
    int Calculator() {
        return m_Num1 + m_Num2;
    }
};

class minusCalculate: public AbstractCalculate {
    int Calculator() {
        return m_Num1 - m_Num2;
    }
};

void test01() {
    AbstractCalculate* cal = new addCalculate;
    cal->m_Num1 = 10;
    cal->m_Num2 = 20;
    cout << cal->m_Num1 << "+" << cal->m_Num2 << "=" << cal->Calculator() << endl;
    delete cal;
    cal = new minusCalculate;
    cal->m_Num1 = 10;
    cal->m_Num2 = 20;
    cout << cal->m_Num1 << "-" << cal->m_Num2 << "=" << cal->Calculator() << endl;
    delete cal;
}

int main() {
    test01();
    system("pause");
}