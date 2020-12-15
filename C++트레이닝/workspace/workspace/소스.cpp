#include "stdafx.h"
#include <iostream>
using namespace std;

class Dot // Ex1> Ŭ����(Class)�� ����
{
public:
    Dot(); // Ex2> ������ Dot�� �����ε�(Overloading) �Ѵ�.
    Dot(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    int x;
    int y;
 
    virtual int Cal() // Ex3> �����Լ�(Virtual Functions)�� ����
    {
        return this->x - y;
    }
    
    void NotVirtual() // Ex4> �Ϲ� ����Լ��� ����
    {
        cout << "DOT CALL\n";
    }
   
    virtual void PureVirtual() const = 0; // Ex5> ���������Լ�(Pure Virtual Functions)�� ����
};

class DotA :public Dot // Ex6> Dot Ŭ������ ��ӹ���
{
public:
    DotA();
    DotA(int x, int y);
    virtual int Cal()
    {
        return this->x + this->y;
    }
    void NotVirtual()
    {
        cout << "DOTA CALL\n";
    }
    virtual void PureVirtual() const
    {
        cout << "DOTA CALL\n";
    }
};
DotA::DotA(int x, int y) :Dot(x, y)
{
    cout << "SET DotA\n";
}

class DotB :public Dot
{
public:
    DotB();
    DotB(int x, int y);
    virtual int Cal()
    {
        return this->x * this->y;
    }
    void NotVirtual()
    {
        cout << "DOTB CALL\n";
    }
    virtual void PureVirtual() const
    {
        cout << "DOTB CALL\n";
    }
};
DotB::DotB(int x, int y) :Dot(x, y)
{
    cout << "SET DotB\n";
}

int _tmain(int argc, _TCHAR* argv[])
{
   
    Dot* dot[2] = {}; // �����Լ��� ���

    dot[0] = new DotA(100, 20); // Ex7> ��ü ����
    dot[1] = new DotB(100, 20);
    cout << "\n######## Virtual Functions ########\n";
    // �����Լ��� ���
    cout << "DotA Result : " << dot[0]->Cal() << "\n";
    cout << "DotB Result : " << dot[1]->Cal() << "\n";

    cout << "\n######## Member Functions ########\n";
    // �Ϲݸ���Լ��� ���
    dot[0]->NotVirtual();
    dot[1]->NotVirtual();

    cout << "\n######## Pure Virtual Functions ########\n";
    // ���������Լ��� ���
    dot[0]->PureVirtual();
    dot[1]->PureVirtual();

    // Ex8> �߻�Ŭ���� ����
    // ���������Լ�"virtual void PureVirtual() const = 0;"�� �����ϹǷν� Dot�� �߻�Ŭ������ �� : ��ӹ޾� ������ �ؾ߸� ����� �� �ִ�.

    return 0;
}