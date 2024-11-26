// 011_color.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
using namespace std;

class Color {
private:
	float r, g, b;
public:
	Color() : r(0), g(0), b(0) {}
	Color(float r, float g, float b) : r(r), g(g), b(b) {}	// 이렇게 작성하면 초기화됌. 알고 있기!!

	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }

	static Color MixColors(Color a, Color b) {
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
	}
};

int main()
{
	Color red = Color(1, 0, 0);
	Color blue = Color(0, 0, 1);
	Color puple = Color::MixColors(red, blue);	// static을 작성하면 red.MixColors에서 red.을 작성 안해도 되지만 Color::를 작성해야함.

	cout << puple.GetR() << ", " << puple.GetG() << ", " << puple.GetB() << endl;
}
