// 013_Vector2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
using namespace std;

class Vector2 {
private:
    float x, y;
public:
    Vector2();
    Vector2(float x, float y);
    float GetX() const; // const 작성하면 멤버 변수를 바꾸지 않음
    float GetY() const;
    static Vector2 Sum(Vector2 a, Vector2 b);
    Vector2 Add(Vector2 other);
};

Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}
float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }

Vector2 Vector2::Sum(Vector2 a, Vector2 b) {
    return Vector2(a.x + b.x, a.y + b.y);

}

Vector2 Vector2::Add(Vector2 other) {
    return Vector2(this->x + other.x, this->y + other.y);  // this는 안써도됌
}
Vector2 Sum(Vector2 a, Vector2 b);  // Vector2를 리턴해주는 함수

Vector2 Sum(Vector2 a, Vector2 b) {
    return Vector2(a.GetX() + b.GetX(), a.GetY() + b.GetY());

}
int main()
{
    Vector2 a(2, 3);
    Vector2 b(5, 6);
    Vector2 c1 = Sum(a, b); // 전역함수 이용
    Vector2 c2 = Vector2::Sum(a, b);  // 정적 메소드 이용
    Vector2 c3 = a.Add(b);  //클래스의 멤버함수

    cout << "a = (" << a.GetX() << ", " << a.GetY() << ")" << endl;
    cout << "b = (" << b.GetX() << ", " << b.GetY() << ")" << endl;

    cout << "c1 = (" << c1.GetX() << ", " << c1.GetY() << ")" << endl;
    cout << "c2 = (" << c2.GetX() << ", " << c2.GetY() << ")" << endl;
    cout << "c3 = (" << c3.GetX() << ", " << c3.GetY() << ")" << endl;
}
