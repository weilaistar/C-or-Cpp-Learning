#include<iostream>
using namespace std;

class CPU
{
public:
    virtual void calculate() = 0;
};

class VideoCard
{
public:
    virtual void display() = 0;
};

class Memory
{
public:
    virtual void storage() = 0;
};

class Computer
{
public:
    Computer(CPU* cpu, VideoCard* vc, Memory* mem)
    {
        m_CPU = cpu;
        m_VideoCard = vc;
        m_Memory = mem;
    }

    void Work() 
    {
        m_CPU->calculate();
        m_VideoCard->display();
        m_Memory->storage();
    }

    ~Computer()
    {
        if (m_CPU != NULL) {
            delete m_CPU;
            m_CPU = NULL;
        }
        if (m_VideoCard != NULL) {
            delete m_VideoCard;
            m_VideoCard = NULL;
        }
        if (m_Memory != NULL) {
            delete m_Memory;
            m_Memory = NULL;
        }
    }

private:
    CPU* m_CPU;
    VideoCard* m_VideoCard;
    Memory* m_Memory;
};

class IntelCPU: public CPU
{
public:
    void calculate() 
    {
        cout << "Intel的CPU开始计算" << endl;
    }
};
class IntelVideoCard: public VideoCard
{
public:
    void display() 
    {
        cout << "Intel的VideoCard开始显示" << endl;
    }
};
class IntelMemory: public Memory
{
public:
    void storage() 
    {
        cout << "Intel的Memory开始存储" << endl;
    }
};

class LenovoCPU: public CPU
{
public:
    void calculate() 
    {
        cout << "Lenovo的CPU开始计算" << endl;
    }
};
class LenovoVideoCard: public VideoCard
{
public:
    void display() 
    {
        cout << "Lenovo的VideoCard开始显示" << endl;
    }
};
class LenovoMemory: public Memory
{
public:
    void storage() 
    {
        cout << "Lenovo的Memory开始存储" << endl;
    }
};

void test()
{
    CPU* intelcpu = new IntelCPU;
    VideoCard* intelvc = new IntelVideoCard;
    Memory* intelmem = new IntelMemory;
    Computer* intelcomputer = new Computer(intelcpu, intelvc, intelmem);
    intelcomputer->Work();
    delete intelcomputer;
    cout << "------------------------------------------------" << endl;
    CPU* lenovocpu = new LenovoCPU;
    VideoCard* lenovovc = new LenovoVideoCard;
    Memory* lenovomem = new LenovoMemory;
    Computer* lenovocomputer = new Computer(lenovocpu, lenovovc, lenovomem);
    lenovocomputer->Work();
    delete lenovocomputer;
}

int main() {
    test();
    system("pause");
}