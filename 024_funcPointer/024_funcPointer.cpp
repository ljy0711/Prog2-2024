// 024_funcPointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
using namespace std;

bool compare(int a, int b) {
	return a == b;
} //함수포인터 정의




int main()
{
	bool (*fp)(int, int); // fp는 함수 포인터

	fp = &compare;

	bool res1 = (*fp)(1, 1);
	bool res2 = fp(1, 3);

	cout << res1 << ", " << res2 << endl;

}
