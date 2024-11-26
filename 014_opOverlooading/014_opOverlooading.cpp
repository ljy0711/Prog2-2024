// 014_opOverlooading.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
using namespace std;

class Vector2 {
private:
	float x, y;

public:
	Vector2();
	Vector2(float x, float y);

	float GetX();
	float GetY();
	Vector2 operator+(Vector2 other);
	Vector2 operator-(Vector2 other);

	//방법4 - * 연산자로 두가지 표현
	Vector2 operator*(float k);
	float operator*(Vector2 other);
};

Vector2::Vector2(): x(0),y(0){}
Vector2::Vector2(float x, float y): x(x),y(y){}
float Vector2::GetX() { return x; }
float Vector2::GetY() { return y; }

Vector2 Vector2::operator+(Vector2 other) {
	return Vector2(this-> x + other.x,this-> y + other.y);
}
Vector2 Vector2::operator-(Vector2 other) {
	return Vector2(this->x - other.x, this->y - other.y);
}

// 방법4
Vector2 Vector2:: operator*(float k) {
	return Vector2(k * x, k * y);
} // -> 백터 리턴
float Vector2::operator*(Vector2 other) {
	return x * other.x + y * other.y;
} // -> 값을 리턴

/* 방법5 - 클래스 밖에서 만든 연산자 오버로딩(클래스 멤버 함수가 아님)
Vector2 operator*(float k, Vector2 v) {
	return Vector2(k * v.GetX() * k * v.GetY());
}  */

/* 방법 2 -함수로 만들기
Vector2 Add(Vector2 other);
// Vector2 Add(const Vector2 other) const; // 방법2에서 const 붙임
Vector2 Vector2::Add(Vector2 other) {
	return Vector2(x + other.x, y + other.y);
}
*/

int main()
{
	/*  방법 2 - 함수로 만들기
	Vector2 e = a.Add(b);
	cout << "e = (" << e.GetX() << ", " << e.GetY() << ")" << endl;

	출력 결과 e = (8,10) */

	Vector2 a(3, 4);
	Vector2 b(5, 6);
	Vector2 c = a + b;
	Vector2 d = a - b;

	Vector2 f = a * 3.1;
	float x = a * b;

	/* 방법5 
	Vector2 g = 3.1 * a; 
	출력 : f와 값이 같아야함*/

	cout << "c = (" << c.GetX() << ", " << c.GetY() << ")" << endl;
	cout << "d = (" << d.GetX() << ", " << d.GetY() << ")" << endl;

	cout << "f= (" << f.GetX() << ", " << f.GetY() << ")" << endl;
	cout << "x = (" << x << endl;
}
	
	

/* 방법 3 - const쓰면 안전함
class Vector2 {
private:
	float x, y;

public:
	Vector2();
	Vector2(float x, float y);
	float GetX() const;
	float GetY() const;
	Vector2 operator+(const Vector2 other) const; .
		Vector2 operator-(const Vector2 other) const;
};
	Vector2::Vector2() : x(0), y(0) {}
	Vector2::Vector2(float x, float y) : x(x), y(y) {}
	float Vector2::GetX() const { return x; }
	float Vector2::GetY() const { return y; }

	Vector2 Vector2::operator+(const Vector2 other) const {
		return Vector2(this->x + other.x, this->y + other.y);
	}
	Vector2 Vector2::operator-(const Vector2 other) const {
		return Vector2(this->x - other.x, this->y - other.y);
	}
*/