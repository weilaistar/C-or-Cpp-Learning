#include<iostream>
#include<string>
using namespace std;

const float PI = 3.14;

class Circle
{

    //访问权限：公共权限
public:
    //属性
    int m_r;
    //行为
    double calculate()
    {
        return 2 * PI * m_r;
    }
};

int main(){
    Circle c1;
    c1.m_r = 10;
    cout << "圆的周长为： " << c1.calculate() << endl;
}