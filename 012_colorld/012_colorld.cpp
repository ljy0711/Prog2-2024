// 012_colorld.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
using namespace std;

class Color {
private:
	float r, g, b;
	int id;
	static int idCounter;	// 멤버에 소속되지 않고 클래스에 소속
public:
	/*Color() : r(0), g(0), b(0), id(idCounter++) {}*/	// 시험문제
	Color() {
		r = 0;
		g = 0;
		b = 0;
		id = idCounter++;
	}
	/*Color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++) {}*/	// 이렇게 작성하면 초기화됌. 알고 있기!! 시험문제
	Color(float r, float g, float b) {
		this->r = r;
		this->g = g;
		this->b = b;
		this->id = idCounter++;
	}

	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }
	int GetId() { return id; }

	static Color MixColors(Color a, Color b) {
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
	}
};

int Color::idCounter = 1;

int main()
{
	Color red = Color(1, 0, 0);
	Color blue = Color(0, 0, 1);
	Color puple = Color::MixColors(red, blue);	// static을 작성하면 red.MixColors에서 red.을 작성 안해도 되지만 Color::를 작성해야함.

	cout << puple.GetR() << ", " << puple.GetG() << ", " << puple.GetB() << endl;
	cout << "red : id = " << red.GetId() << endl;
	cout << "blue : id = " << blue.GetId() << endl;
	cout << "puple : id = " << puple.GetId() << endl;
}