// CPP_2024.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
using namespace std;

int main()
{
	// std::cout << "Hello World!\n"; <<std::endl;
	cout << "Hello World!" << endl;

	int a = 5;
	double b = 3.141592;
	char c = 'd';

	cout << a << ' ' << b << ' ' << c << endl;

	int x, y;
	cout << "두 정수 입력 : ";
	cin >> x >> y; //오른쪽 화살표는 입력
	cout << x << "+" << y << "=" << x + y << endl; //왼쪽 화살표는 출력
}
