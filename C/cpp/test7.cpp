#include<iostream>
using namespace std;

class Cube
{
private:
    int m_L;
    int m_K;
    int m_H;
    /* data */
public:
    void setmL(int L) {
        m_L = L;
    }
    void setmK(int K) {
        m_K = K;
    }
    void setmH(int H) {
        m_H = H;
    }
    int getmL() {
        return m_L;
    }
    int getmK() {
        return m_K;
    }
    int getmH() {
        return m_H;
    }
    int cubeS() {
        return 2*(m_L * m_K + m_L * m_H + m_K * m_H);
    }    
    int cubeV() {
        return m_L * m_H * m_K;
    }
    bool isSame(Cube &c) {
        if (m_L == c.getmL() && m_K == c.getmK() && m_H == c.getmH()) {
            return true;
        } else {
            return false;
        }
    }
};

int main () {
    Cube c1;
    Cube c2;
    c1.setmL(10);
    c1.setmK(10);
    c1.setmH(10);
    c2.setmL(9);
    c2.setmK(10);
    c2.setmH(8);
    cout << "C1的长宽高分别为: " << c1.getmL() << " " << c1.getmK() << " " << c1.getmH() << endl;
    cout << "C2的长宽高分别为: " << c2.getmL() << " " << c2.getmK() << " " << c2.getmH() << endl;
    cout << "C1的面积为: " << c1.cubeS() << endl;
    cout << "C1的体积为: " << c1.cubeV() << endl;
    cout << "C2的面积为: " << c2.cubeS() << endl;
    cout << "C2的体积为: " << c2.cubeV() << endl;
    int tmp = c1.isSame(c2);
    if (tmp) {
        cout << "C1和C2相同" << endl;
    } else {
        cout << "C1和C2不同" << endl;
    }
}