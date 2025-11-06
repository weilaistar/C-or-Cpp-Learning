#include<iostream>
using namespace std;

class AbstractBase
{
public:
    virtual void Boil() = 0;
    virtual void Brew() = 0;
    virtual void Pour() = 0;
    virtual void PutSomething() = 0;
    void makeDrink() {
        Boil();
        Brew();
        Pour();
        PutSomething();
    }
};

class Coffee: public AbstractBase
{
public:
    void Boil() {
        cout << "把水煮沸！~~~~" << endl;
    }
    void Brew() {
        cout << "清洗咖啡杯" << endl;
    }
    void Pour() {
        cout << "将咖啡倒入杯中" << endl;
    }
    void PutSomething() {
        cout << "加入佐料" << endl;
    }
};

class Tea: public AbstractBase
{
public:
    void Boil() {
        cout << "把水煮沸！~~~~" << endl;
    }
    void Brew() {
        cout << "清洗茶杯" << endl;
    }
    void Pour() {
        cout << "将茶倒入杯中" << endl;
    }
    void PutSomething() {
        cout << "加入佐料" << endl;
    }
};

void doWork(AbstractBase* drink) 
{
    drink->makeDrink();
    delete drink;
}

void test01()
{
    doWork(new Coffee);
    cout << "------------------" << endl;
    doWork(new Tea);
}

int main() {
    test01();
    system("pause");
}