// 028_pair.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// C++ 딕셔너리 사용법 

#include <iostream>
#include <map>
using namespace std;

int main()
{
	pair<int, string> a = { 123,"abc" };

	cout << a.first << ", " << a.second << endl;
	//방법2 
	a.second = "aasdf";
	cout << a.first << ", " << a.second << endl;
	//방법3
	pair<string, string> dict = { "Hello", "안녕하세요" };
	cout << dict.first << ", " << dict.second << endl;

	//방법4(map 방법)
	map<string, int> fruit;
	fruit["apple"] = 7;
	fruit["banana"] = 5;
	fruit["orange"] = 10;
	///map 방법-출력 방법 1
	cout << "banana : " << fruit["banana"] << endl;
	cout << "apple : " << fruit["apple"] << endl;
	cout << "orange : " << fruit["orange"] << endl;
	///map방법-출력 방법2
	// for (auto f : fruit) -> 이렇게 쓰는 게 더 편함.
	for (pair<string, int> f : fruit)

		cout << f.first << " : " << f.second << endl;
	cout << endl;
} 

