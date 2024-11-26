// 003_initialize.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
using namespace std;

int main()
{
    int a = 10; // 원래 초기화 방법
    int b(20); // c++에서 쓸 수 있는 방법
    int& x = a; // x는 a의 레퍼런스임(x는 a의 다른 이름이다.)

    x = 100;
    cout << a << ' ' << b << endl;
}

