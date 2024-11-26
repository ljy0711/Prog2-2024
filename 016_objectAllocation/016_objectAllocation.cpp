// 016_objectAllocation.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
using namespace std;

class Vector2{
public:
	float x, y;
public:
	Vector2() :x(0), y(0) {
		cout << this << ": Vector2()" << endl;
	}
	Vector2(float x, float y) :x(x), y(y) {
		cout << this << ": Vector2(float, float" << endl;
	} // 검정 x,y는 8번재째 줄 의미함
	~Vector2() {
		cout << this << ": ~Vector2()" << endl;
	}
	float GetX() const { return x; }
	float GetY() const { return y; }
};

int main()
{
	Vector2 s1;
	Vector2 s2(2, 3);
  //cout << sizeof(float) << endl;
	cout << "s2 : " << s2.GetX() << s2.GetY() << endl;

  //객체 동적 할당
	Vector2* d1 = new Vector2();
	Vector2* d2 = new Vector2(4, 5);

	cout << "d2 : " << d2->GetX() << ", " << d2->GetY() << endl;
	delete d1;
	delete d2;

  //주의할 점
	cout << "main() 끝" << endl;
}

