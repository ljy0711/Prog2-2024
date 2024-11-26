// 009_this.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//this는 클래스 안 객체의 주소를 의미함.

#include <iostream>
using namespace std;

class MyClass //클래스는 첫 문자를 대문자
{
public:
    void printThiss() {
        cout << "나의 주소는 " << this << endl;
    } //클래스 안 this는 나를 가르킴
};

int main()
{
    MyClass a, b; //a와 b가 16진수로 20씩 차이남
    cout << "a의 주소 " << &a << endl;
    cout << "b의 주소 " << &b << endl;

   // 방법2
    a.printThiss();
    b.printThiss();

  
}
