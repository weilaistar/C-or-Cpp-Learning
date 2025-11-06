#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int *p;
    p = &a;
    cout << "a的地址为:" << &a << endl;
    cout << "指针p:" << p << endl;
    cout << "sizeof(int *):" << sizeof(int *) << endl;
    system("pause");
    return 0;
}