#include "stdafx.h"
#include <iostream>
using namespace std;

class Dot // Ex1> 클래스(Class)의 선언
{
public:
    Dot(); // Ex2> 생성자 Dot을 오버로딩(Overloading) 한다.
    Dot(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    int x;
    int y;
 
    virtual int Cal() // Ex3> 가상함수(Virtual Functions)를 선언
    {
        return this->x - y;
    }
    
    void NotVirtual() // Ex4> 일반 멤버함수를 선언
    {
        cout << "DOT CALL\n";
    }
   
    virtual void PureVirtual() const = 0; // Ex5> 순수가상함수(Pure Virtual Functions)를 선언
};

class DotA :public Dot // Ex6> Dot 클래스를 상속받음
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
   
    Dot* dot[2] = {}; // 가상함수의 사용

    dot[0] = new DotA(100, 20); // Ex7> 객체 생성
    dot[1] = new DotB(100, 20);
    cout << "\n######## Virtual Functions ########\n";
    // 가상함수의 사용
    cout << "DotA Result : " << dot[0]->Cal() << "\n";
    cout << "DotB Result : " << dot[1]->Cal() << "\n";

    cout << "\n######## Member Functions ########\n";
    // 일반멤버함수의 사용
    dot[0]->NotVirtual();
    dot[1]->NotVirtual();

    cout << "\n######## Pure Virtual Functions ########\n";
    // 순수가상함수의 사용
    dot[0]->PureVirtual();
    dot[1]->PureVirtual();

    // Ex8> 추상클래스 생성
    // 순수가상함수"virtual void PureVirtual() const = 0;"를 선언하므로써 Dot은 추상클래스가 됨 : 상속받아 구현을 해야만 사용할 수 있다.

    return 0;
}