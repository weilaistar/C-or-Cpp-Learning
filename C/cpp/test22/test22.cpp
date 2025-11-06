#include<iostream>
#include<fstream>
using namespace std;

void write()
{
    ofstream ofs;
    ofs.open("test22.txt", ios::out);
    ofs << "姓名：XXX" << endl;
    ofs << "学校：中国科学技术大学" << endl;
    ofs << "年龄：22" << endl;
    ofs.close();
}

int main() {
    write();
    system("pause");
    return 0;
}