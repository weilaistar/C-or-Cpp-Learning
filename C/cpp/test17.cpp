#include<iostream>
using namespace std;
class Animal
{
public:
	//加上virtual变成虚函数,实现地址晚绑定
	virtual void speak()
	{
		cout << "动物在说话"<< endl;
	}
};

class Cat :public Animal
{
public:
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};

class Dog : public Animal
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};
//执行说话的函数
//地址早绑定，在编译阶段就确定函数地址
//如果想让猫说话，那么这个函数的地址就不能提前绑定，需要在运行阶段进行绑定

//动态多条满足条件
/*
1.有继承关系
2.子类重写父类的虚函数
*/
//重写要求:函数返回值类型 函数名 参数列表 完全相同 
//动态多态的使用
/*
父类的指针或者引用 指向子类的对象//Animal &animal = cat;
*/

void doSpeak(Animal &animal)//Animal &animal = cat;
{
	animal.speak();
}
void test01()
{
	Cat cat;
	doSpeak(cat);
	Dog dog;
	doSpeak(dog);
}
int main(void)
{
	test01();
	system("pause");
	return 0;
}