// 018_inheritance.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

// 018_inheritance.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
using namespace std;

class Base {
public:
    int bNum;
    void bFunc() {
        cout << "hello from Base!" << endl;
    }
};

class Derived : public Base {
public:
    int dNum;
    void dFunc() {
        cout << "Hello from Derived!" << endl;
    }
};
int main()
{
    Base b;
    Derived d;

    b.bFunc();
    b.bNum = 1;
    cout << "b.bNum = " << b.bNum << endl;

    d.bFunc();
    d.bNum = 2;
    cout << "d.bNum = " << d.bNum << endl;

    d.dFunc();
    d.dNum = 1;
    cout << "d.dNum = " << d.dNum << endl;
}


