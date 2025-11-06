#include<iostream>
#include<string>
using namespace std;

struct Hero
{
    string name;
    int age;
    string gender;
};

void bubblePrint(struct Hero heroArray[], int len)
{
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (heroArray[j].age > heroArray[j + 1].age) {
                struct Hero temp = heroArray[j];
                heroArray[j] = heroArray[j + 1];
                heroArray[j + 1] = temp;
            }
        }
    }
    for (int n = 0; n < len; n++) {
        cout << heroArray[n].name << heroArray[n].age << heroArray[n].gender << endl;
    }
}

int main() {
    struct Hero heroArray[5] = 
    {
        {"刘备", 23, "男"},
        {"张飞", 20, "男"},
        {"关羽", 25, "男"},
        {"貂蝉", 19, "女"},
        {"项羽", 21, "男"},
    };
    int len = sizeof(heroArray) / sizeof(heroArray[0]);
    bubblePrint(heroArray, len);
    system("pause");
}